/* 个人作品集 — 交互脚本 */
(function () {
  'use strict';

  /* ============================================================
     互动专区配置（Giscus 留言板）
     ------------------------------------------------------------
     留言存储在 GitHub Discussions，访客必须用 GitHub 账号登录
     才能发言，留言公开可见。免费、无需自建后端。

     配置步骤：
       1. 准备一个【公开】的 GitHub 仓库（新建一个空仓库即可）
       2. 进仓库 Settings → 勾选 Features 里的 Discussions
       3. 打开 https://giscus.app/zh-CN ，按提示安装 giscus App
          并授权给这个仓库，页面会自动生成下面 4 个参数
       4. 把生成的参数填进下面的 GISCUS 对象，保存后重新发布
     ============================================================ */
  var GISCUS = {
    repo: 'liu-ran-fnn/frina',
    repoId: 'R_kgDOU8i7KQ',
    category: 'General',          // 用 General：Announcements 只有你能开新帖，访客发不了言
    categoryId: 'DIC_kwDOU8i7Kc4DHFex',
    lang: 'zh-CN',
    theme: 'light'   // 浅色主题，跟整站一致
  };

  /* ---------- 挂载 Giscus 留言区 ---------- */
  (function mountGiscus() {
    var wrap = document.getElementById('giscusWrap');
    if (!wrap) return;

    if (!GISCUS.repo || !GISCUS.repoId || !GISCUS.categoryId) {
      wrap.innerHTML =
        '<div class="gb-empty">' +
        '<span class="gb-empty-icon">💬</span>' +
        '<p class="gb-empty-title">留言区还没接上</p>' +
        '<p class="gb-empty-text">需要在 GitHub 仓库开启 Discussions 并完成授权后才能使用，' +
        '站长正在配置中。</p>' +
        '</div>';
      return;
    }

    wrap.innerHTML = '<p class="gb-loading">留言区加载中…</p>';

    var s = document.createElement('script');
    s.src = 'https://giscus.app/client.js';
    s.async = true;
    s.setAttribute('data-repo', GISCUS.repo);
    s.setAttribute('data-repo-id', GISCUS.repoId);
    s.setAttribute('data-category', GISCUS.category);
    s.setAttribute('data-category-id', GISCUS.categoryId);
    s.setAttribute('data-mapping', 'pathname');
    s.setAttribute('data-strict', '0');
    s.setAttribute('data-reactions-enabled', '1');
    s.setAttribute('data-emit-metadata', '0');
    s.setAttribute('data-input-position', 'top');
    s.setAttribute('data-theme', GISCUS.theme);
    s.setAttribute('data-lang', GISCUS.lang);
    s.setAttribute('data-loading', 'lazy');
    s.crossOrigin = 'anonymous';
    wrap.appendChild(s);
  })();

  /* ---------- 代码区：一键复制 ---------- */
  Array.prototype.forEach.call(document.querySelectorAll('.copy-btn'), function (btn) {
    btn.addEventListener('click', function () {
      var target = document.getElementById(btn.getAttribute('data-target'));
      if (!target) return;

      var done = function () {
        var old = btn.textContent;
        btn.textContent = '已复制 ✓';
        btn.classList.add('done');
        setTimeout(function () {
          btn.textContent = old;
          btn.classList.remove('done');
        }, 1600);
      };

      var fallback = function () {
        var ta = document.createElement('textarea');
        ta.value = target.textContent;
        ta.style.position = 'fixed';
        ta.style.opacity = '0';
        document.body.appendChild(ta);
        ta.select();
        try {
          document.execCommand('copy');
          done();
        } catch (e) {
          btn.textContent = '复制失败';
        }
        document.body.removeChild(ta);
      };

      if (navigator.clipboard && navigator.clipboard.writeText) {
        navigator.clipboard.writeText(target.textContent).then(done, fallback);
      } else {
        fallback();
      }
    });
  });

  /* ---------- 导航滚动状态 + 回到顶部按钮 ---------- */
  var nav = document.getElementById('nav');
  var toTop = document.getElementById('toTop');
  var SHOW_AFTER = 600;   // 滚动超过这个距离（px）才显示按钮

  var onScroll = function () {
    var y = window.pageYOffset || document.documentElement.scrollTop || 0;
    nav.classList.toggle('scrolled', y > 12);
    if (toTop) toTop.classList.toggle('show', y > SHOW_AFTER);
  };
  onScroll();
  window.addEventListener('scroll', onScroll, { passive: true });

  if (toTop) {
    toTop.addEventListener('click', function () {
      var reduce = window.matchMedia && window.matchMedia('(prefers-reduced-motion: reduce)').matches;
      window.scrollTo({ top: 0, behavior: reduce ? 'auto' : 'smooth' });
    });
  }

  /* ---------- 背景音乐：涓流轻缓 Clement Rillet ---------- */
  /* 右下角胶囊：循环播放，可随时关闭；开关与音量记在本地，
     下次访问自动按上次的设置走（浏览器不允许自动播放时，
     会在你第一次跟页面交互的瞬间自动补上）。 */
  (function bgmPlayer() {
    var box = document.getElementById('bgm');
    var btn = document.getElementById('bgmBtn');
    var audio = document.getElementById('bgmAudio');
    var vol = document.getElementById('bgmVolume');
    if (!box || !btn || !audio) return;

    var panel = box.querySelector('.bgm-panel');
    var label = box.querySelector('.bgm-label');
    var KEY_ON = 'bgm.enabled';
    var KEY_VOL = 'bgm.volume';

    var readStore = function (k, fb) {
      try {
        var v = localStorage.getItem(k);
        return v === null ? fb : v;
      } catch (e) { return fb; }
    };
    var writeStore = function (k, v) {
      try { localStorage.setItem(k, v); } catch (e) { /* 隐私模式下忽略 */ }
    };

    audio.loop = true;
    box.hidden = false;

    // 音频文件不存在 / 解码失败时，整个控件不显示
    audio.addEventListener('error', function () { box.hidden = true; });
    audio.addEventListener('ended', function () { /* loop 已兜底 */ });

    var setUI = function (playing) {
      btn.classList.toggle('playing', playing);
      btn.setAttribute('aria-pressed', String(playing));
      btn.title = playing ? '关闭背景音乐' : '播放背景音乐';
      btn.setAttribute('aria-label', btn.title);
      if (panel) panel.classList.toggle('paused', !playing);
      if (label) label.textContent = playing ? '正在播放' : '已暂停';
    };

    // 音量
    var savedVol = parseFloat(readStore(KEY_VOL, '55'));
    if (isNaN(savedVol)) savedVol = 55;
    audio.volume = savedVol / 100;
    if (vol) {
      vol.value = String(savedVol);
      vol.addEventListener('input', function () {
        audio.volume = Number(vol.value) / 100;
        writeStore(KEY_VOL, vol.value);
      });
    }

    var play = function () {
      var p = audio.play();
      if (p && p.catch) p.catch(function () { /* 自动播放被拦截，忽略 */ });
    };

    audio.addEventListener('play', function () { setUI(true); });
    audio.addEventListener('pause', function () { setUI(false); });
    setUI(!audio.paused);

    // 首次交互补播（浏览器拦截自动播放时的兜底）
    var EVENTS = ['pointerdown', 'keydown', 'touchstart'];
    var detach = function () {
      EVENTS.forEach(function (evt) { window.removeEventListener(evt, once); });
    };
    var once = function () {
      if (audio.paused) play();
      detach();
    };

    btn.addEventListener('click', function () {
      detach();
      if (audio.paused) {
        play();
        writeStore(KEY_ON, '1');
      } else {
        audio.pause();
        writeStore(KEY_ON, '0');
      }
    });

    // 上次的开关状态；从未设置过的话，默认尝试播放
    if (readStore(KEY_ON, '1') !== '0') {
      var p = audio.play();
      if (p && p.catch) {
        p.catch(function () {
          EVENTS.forEach(function (evt) {
            window.addEventListener(evt, once, { once: true, passive: true });
          });
        });
      }
    }
  })();

  /* ---------- 移动端菜单 ---------- */
  var burger = document.getElementById('burger');
  var navLinks = document.getElementById('navLinks');

  burger.addEventListener('click', function () {
    var open = navLinks.classList.toggle('open');
    burger.classList.toggle('open', open);
    burger.setAttribute('aria-expanded', String(open));
  });

  navLinks.addEventListener('click', function (e) {
    if (e.target.tagName === 'A') {
      navLinks.classList.remove('open');
      burger.classList.remove('open');
      burger.setAttribute('aria-expanded', 'false');
    }
  });

  /* ---------- 滚动出现动画 ---------- */
  var revealEls = document.querySelectorAll('.reveal');

  if ('IntersectionObserver' in window) {
    var io = new IntersectionObserver(function (entries) {
      entries.forEach(function (entry) {
        if (!entry.isIntersecting) return;
        entry.target.classList.add('in');
        io.unobserve(entry.target);
      });
    }, { threshold: 0.12, rootMargin: '0px 0px -40px 0px' });

    revealEls.forEach(function (el) { io.observe(el); });
  } else {
    revealEls.forEach(function (el) { el.classList.add('in'); });
  }

  /* ---------- 技能条填充 ---------- */
  var bars = document.querySelectorAll('.bar');
  if ('IntersectionObserver' in window) {
    var bio = new IntersectionObserver(function (entries) {
      entries.forEach(function (entry) {
        if (!entry.isIntersecting) return;
        entry.target.classList.add('in');
        bio.unobserve(entry.target);
      });
    }, { threshold: 0.4 });
    bars.forEach(function (b) { bio.observe(b); });
  } else {
    bars.forEach(function (b) { b.classList.add('in'); });
  }

  /* ---------- 数字滚动 ---------- */
  var counters = document.querySelectorAll('[data-count]');
  var animateCount = function (el) {
    var target = parseInt(el.getAttribute('data-count'), 10);
    var dur = 1200;
    var start = performance.now();

    var step = function (now) {
      var p = Math.min((now - start) / dur, 1);
      var eased = 1 - Math.pow(1 - p, 3);          // easeOutCubic
      el.textContent = Math.round(target * eased);
      if (p < 1) requestAnimationFrame(step);
    };
    requestAnimationFrame(step);
  };

  if ('IntersectionObserver' in window) {
    var cio = new IntersectionObserver(function (entries) {
      entries.forEach(function (entry) {
        if (!entry.isIntersecting) return;
        animateCount(entry.target);
        cio.unobserve(entry.target);
      });
    }, { threshold: 0.6 });
    counters.forEach(function (c) { cio.observe(c); });
  } else {
    counters.forEach(function (c) { c.textContent = c.getAttribute('data-count'); });
  }
})();
