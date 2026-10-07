#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include <assert.h>


//
////int main()
////{
////	srand((unsigned int)time(NULL));
////	printf("%d\n", rand());
////	printf("%d\n", rand());
////	printf("%d\n", rand());
////	printf("%d\n", rand());
////	return 0;
////}
////time函数会返回当前的日历时间，是1970年1月1日0分0秒到现在时间的差值，单位是秒
//// 这个时间差也叫：时间戳
//// time_t 是一个整型
//// 生成一个0~99的随机数的方法
//// rand()%100;余数是0~99
//// 100+rand()%(101)是100~200
//// 生成A到B的随机数
//// a+rand()%(b-a+1)
////int main()
////{
////	int age = 0;
////	printf("your age  ");
////	scanf_s("%d", &age);
////	if (age <= 18)
////		printf("shao nain");
////	else if (age <= 44)
////		printf("qing nian");
////	else if (age <= 59)
////		printf("zhong lao nian");
////	else if (age <= 89)
////		printf("lao nian");
////	else
////		printf("lao shou xing");
//	
//	/*printf("%zu\n", sizeof(_Bool));
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n", sizeof(long double)*/
//	/*int tbw = 1;
//	tbw = tbw + 13;
//	printf("%d\n", tbw);*/
//	//int a = 10;
//	//int b = a++;//后置++先加1，在使用
//	//printf("a=%d\n", a);
//	//printf("b=%d\n", b);
//	//int a = 12;
//	//int b = ++a;//前置++，先使用，再加1
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	/*int a = 1;
//	printf("%d\n", (++a) + (++a) + (++a));*/
//	/*printf("there are %d tbw\n", 10);*/
//	/*printf("%s mei you ji ji\n", "tianbowen");*/
//	//printf("%s doesn't have %s\n", "tianbowen","jiji");
//	//printf("%.1f\n", 5.148);
//	//printf("%*.*f\n", 4, 2, 12.333);
//	//printf("%.3s", "tianbowen");
//	/*int score = 0;
//	printf("please enter your score:");
//	scanf_s("%d", &score);
//	printf("score is:%d\n", score);*/
//	///*int i = 0;
//	//int j = 0;
//	//float x = 0;
//	//float y = 0;
//	//scanf_s("%d%d%f%f", &i, &j, &x, &y);
//	//printf("i=%d\n",i);
//	//printf("j=%d\n",j);
//	//printf("x=%f\n",x);
//	//printf("y=%f\n",y);*/
//	
//	
//	/*int a = 0;
//	int b = 0;
//	float c = 0.0f;
//	int s = scanf_s("%d %d %f", &a, &b, &c);
//	printf("a=%d,b=%d,c=%f\n",a,b,c);
//	printf("s=%d\n", s);*/
//	/*int a = 0;
//	int b = 0;
//	while (scanf_s("%d %d", &a, &b)==2)
//	{
//		int c = a + b;
//		printf("%d\n", c);
//	}*/
//	/*float a = 3.14;
//	printf("%f\n", a);*/
//	/*int num = 0;
//	char c = 0;
//	scanf_s("%c", &c);
//	printf("----%c---\n", c);*/
//
//	//char arr[100];
//	//scanf_s("%s", arr,100);
//	//printf("%s\n", arr);
//
//	/*char tbw[100];
//	printf("what is your name:");
//	scanf_s("%s", tbw , 100);
//	printf("%s is liuran's sex slave",tbw);*/
//	/*int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf_s("%d%*s%d%*s%d", &year, &month, &day);
//	printf("%d %d %d", year, month, day);*/
//	
//	/*int tbw = 0;
//	scanf_s("%d", &tbw);
//	if (tbw % 2 == 1)
//		printf("jishu\n");
//	else 
//		printf("oushu\n");*/
//	/*int a = 0;
//	printf("how old are you:");
//	scanf_s("%d", &a);
//	if (a >= 18)
//		printf("cheng nian");
//	else
//		printf("wei cheng nian");*/
//    //*int tbw = 0;
//    ///printf("qing shu ru yi ge zheng shu:");
//	//scanf_s("%d", &tbw);
//	//if (tbw > 0)
//	//	printf("zheng shu\n");
//	///else
//	//	if (tbw == 0)
//	//		printf("0\n");
//	//	else
//	//		printf("fu shu\n");*/
////int main()
////{
////	int age = 0;
////	scanf_s("%d", &age);
////	if (age >= 18 && age <= 36)
////		printf("qing nian");
////
////	return 0;
//// 
//// 
////int main()
////{
////	//&& bing qie fuhao
////	//||hou zhe fuhao
////	int mounth = 0;
////	scanf_s("%d", &mounth);
////	if (mounth >= 3 && mounth <= 5)
////		printf("spring");
////	return 0;
////
////}
////int main()
////{
////	int year = 0;
////	scanf_s("%d", &year);
////	if ((year % 4 == 0 && year % 100 != 0 )|| (year % 400 == 0))
////		printf("ren nian\n");
////
////
////	return 0;
////
////}
///*nt main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("1");
//		break;
//
//	case 2:
//		printf("2");
//		break;
//	case 3:
//		printf("3");
//		break;
//	case 4:
//		printf("4");
//		break;
//	case 5:
//		printf("5");
//		break;
//	case 6:
//		printf("6");
//		break;
//	case 7:
//		printf("7");
//		break;
//	default:
//		printf("1~7");
//		break;
//	}
//	return 0;
//
//}*/
////int main()
////{
////	int day = 0;
////	scanf_s("%d", &day);
////	switch (day)瑕佹暣鍨嬪彉閲?
////	{
////	case 1:
////	case 2:鍙兘鏄父閲?
////	case 3:
////	case 4:
////	case 5:
////		printf("work day\n");
////		break;
////	case 6:
////	case 7:
////		printf("rest day\n");
////		break;
////	default:
////		printf("fvv");
////		break;
////	}
////	return 0;
////
////}
////int main()
////{
////	/*int i = 1;
////	while (i <= 10)
////	{
////		printf("%d ", i);
////		i=i+1;
////	}*/
////	int tbw = 0;
////	scanf_s("%d",&tbw);
////	while (tbw)
////	{
////		printf("%d ", tbw % 10);
////		tbw = tbw / 10;
////	
////	}
////		
////
////	return 0;
//
////while璇硶鍜孖F宸笉澶?
////for瑕佸啓鍒濆鍊硷紝鍒ゆ柇锛岃皟鏁?
////鍒ゆ柇鏈€閲嶈
////int main()
////{
////	int i = 0;
////	int tbw = 0;
////	for (i = 3; i <= 100; i +=3)
////	{
////		tbw += i;
////
////	}
////	printf("%d ", tbw);
////	return 0;
////
////}
////int main()
////{
////	int i = 1;
////	do
////	{
////		printf("%d ", i);
////		i++;
////	} 
////	while (i <= 10);
////	return 0;
////
////}
////int main()
////{
////	int i = 0;
////	do
////	{
////		printf("tianbowen\n");
////		i++;
////	} while (i < 100);
////	return 0;
////
////}
////int main()
////{
////	int i = 0;
////	for (;i < 100;i++)
////	{
////		printf("tianbowen hao yingdang\n");
////	}
////	return 0;
////}
////int main()
////{
////	int i = 0;
////	while (i < 100)
////	{
////		printf("tianbowen hao ying dang\n");
////		i++;
////	}
////	return 0;
////}
////int main()
////{
////	int tbw = 0;
////	scanf_s("%d", &tbw);
////	int n = 0;
////	do
////	{
////		tbw/=10;
////		n++;
////	} while (tbw);
////	printf("%d ",n);
////	return 0;
////}
////break寮哄埗缁撴潫
////continue璺宠繃鍚庨潰鐨勪唬鐮?
//
// +
////int main()
////{
////	int age = 0;
////	char name[100];
////	scanf_s("%d %s", &age, name,100);
////	printf("%s is %d years old", name, age);
////	return 0;
////}
////int main()
////{
////	int i = 0;
////	for (;i < 201;i++)
////	{
////		int j = 0;
////		for (j = 2;j <= i - 1;j++)
////		{
////			if (i % j == 0)
////			{
////				break;
////			}
////		}
////		if (i ==j)
////			printf("%d ", i);
////	}
////	return 0;
////
////}
////}//直接到某一部分
//
////windows的关机命令:shutdown -s -t 60
////注意中间有空格
////shutdown -a 取消关机
////system 执行系统命令
// //<stdlib.h>是它的头文件
////strcmp 是字符串相等判断的库函数
////int main()
////{
////	char tbw[100];
////	printf("你的电脑将在10分钟后关机，如果输入：我叫星见雅，就取消关机\n");
////	system("shutdown -s -t 600");
////again:
////	scanf_s("%s",tbw,100);
////	if (strcmp(tbw,"我叫星见雅") == 0)
////	{
////		system("shutdown -a");
////	}
////	else
////	{
////		goto again;
////	}
////	return 0;
////}

//void game()//玩游戏的函数
//{
//	int guess = 0;
//	int i = rand() % 100 + 1;
//	while(1)
//	{
//		printf("请猜数字:");
//		scanf_s("%d", &guess);
//		if (guess > i)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < i)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//	
//}
//int main()
//{
//	int tbw = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		printf("---1.play----\n");
//		printf("---0.elxt----\n");
//		printf("请选择:");
//		scanf_s("%d", &tbw);
//		switch (tbw)
//		{
//		case 1:
//			game(); 
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择錯誤，重新选择\n");
//			break;
//		}
//	} while (tbw);
//	return 0;
//}
//int main()
//{
//	int i[2] = {1,2};大小是8  
//	double tbw1[3] = { 1.1,1.2,12.3 };
//	char tbwmjj[6];
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	//    编号：  0,1,2,3,4，5,6,7,8,9
//	int tbw[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", tbw[6]);
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d \n", tbw[i]);
//	}
//	//修改数组的内容
//	for (i = 0;i < 10;i++)
//	{
//		tbw[i] = -(i + 1);
//	}
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d \n", tbw[i]);
//	} 
//	return 0;
//}
//%p是用来打印地址的
//int main()
//{
//	int tbw[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%zu\n", sizeof(tbw));//计算的是整个数组的大小，单位是字节
//	//大小是40，一个int是4，一共10个元素
//	int sz = sizeof(tbw) / sizeof(tbw[0]);
//	printf("%d\n", sz);
//	int i = 0;
//	for (;i < sz;i++)
//		printf("%d ", tbw[i]);
//	
//
//	/*int i = 0;
//	for (i = 0;i < 10;i++)
//	{ 
//		printf("&tbw[%d]=%p\n",i, &tbw[i]);
//	}*/
//	return 0;
//}
 //int arr[3][5];表示有3行，一行有5个元素
//type arr_name[][];先表示行，在表示一行有多少元素
//不完全初始化-剩余的默认为0；
//完全初始化
//能省略行，但不能省略列
//int main()
//{
//	int tbw[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7, };
//	//int tbw1[2][4] = { {1,2},{2,3} };
//	//printf("%d\n", tbw[2][3]);
//	
//	int i = 0;
//	/*for (;i < 3;i++)
//	{
//		int j = 0;
//		for (;j < 5;j++)
//		{
//			scanf_s("%d", &tbw[i][j]);
//		}
//	}*/
//	for (;i < 3;i++)
//	{
//		int j = 0;
//		for (;j < 5;j++)
//		{
//			printf("%d ", tbw[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//
//}
//int main()
//{
//	char tbw1[] = "tbw is slx";
//	char tbw2[] = "##########";
//	size_t right = strlen(tbw1) - 1;
//	size_t lef = 0;
//	while (lef<=right)
//	{
//        tbw2[lef] = tbw1[lef];
//	    tbw2[right] = tbw1[right];
//	    printf("%s\n", tbw2);
//		Sleep(1000);//休眠，单位是毫秒
//		system("cls");//windowS的清屏
//	    lef++;
//	    right--;
//	}
//	printf("%s\n", tbw1);
//	return 0;
//}
//int main()
//{
//	int tbw[] = {  1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(tbw) / sizeof(tbw[0])-1;
//	int left = 0;
//	int right = sz;
//	
//	while (left <= right)
//	{
//		int mid = (left + right)/2;
//		if (tbw[mid]< k)
//		{
//			left = mid + 1;
//		}
//		else if (tbw[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("%d",mid);
//			break;
//		}
//	}
//	return 0;
//}
//sqrt()开平方的函数
//double i = sqrt(num);
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d\n", &a, &b);
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
//tbw(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf_s("%d", &year);
//	if (tbw(year) == 1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}


//void set_tbw(int tbw2[10], int sz2)
//{
//	int i = 0;
//	for (;i < sz2;i++)
//	{
//		tbw2[i] = -1;
//	}
//}
//void printf_tbw(int tbw2[10],int sz2)
//{
//	int i = 0;
//	for (;i < sz2;i++)
//	{
//		printf("%d ", tbw2[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int tbw[10] = { 0 };
//	int sz = sizeof(tbw) / sizeof(tbw[0]);
//	printf_tbw(tbw, sz);//设置打印函数
//	set_tbw(tbw, sz);//设置赋值函数
//	printf_tbw(tbw,sz);
//	return 0;
//}


//void set_tbw(int tbw[3][5],int r,int c)
//{
//	int i = 0;
//	for (;i < r;i++)
//	{
//		int j = 0;
//		for (;j < c;j++)
//		{
//			tbw[i][j] = i + j;
//		}
//	}
//}
//
//void printf_tbw(int tbw[3][5], int r, int c)
//{
//	int i = 0;
//	for (;i < r;i++)
//	{
//		int j = 0;
//		for (;j < c;j++)
//		{
//			printf("%d ", tbw[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//}
// 
//int main()
//{
//	int tbw[3][5] = { 0 };
//	set_tbw(tbw, 3, 5);
//	printf_tbw(tbw, 3, 5);
//	return 0;
//}
//bool leap_year(int tbw)
//{
//	if ((tbw % 4 == 0) && (tbw % 100 != 0) || (tbw % 400 == 0))
//		return true;
//	else
//		return false;
//}
//
//int get_days(int y, int m)
//{
//	int tbw[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int d = tbw[m];
//	if (leap_year(y) && m == 2)
//		d += 1;
//	return d;
//
//}
//
//int main()
//{
//	int year = 0;
//	int mouth = 0;
//	scanf_s("%d%d", &year, &mouth);
//	int day = get_days(year, mouth);
//	printf("%d", day);
//	return 0;
//}

//printf返回值是整型
//""包含是自己创建的头文件
//<>包含的是标准库中的头文件
//static修饰变量，函数
//extern用来声明外部符号

//void test()
//{
//	int j = 10;
//	j++;
//	printf("%d ", j);
//}
//int main()
//{
//	int i = 0;
//	for (;i < 5;i++)
//	{
//		test();
//	}
//	return 0;
//}

//void test()
//{
//	static  int j = 10;
//	//static修饰局部变量 延长了生命周期 作用域不变
//	//静态变量的生命周期和全局变量是一样的
//	j++;
//	printf("%d ", j);
//}
//int main()
//{
//	int i = 0;
//	for (;i < 5;i++)
//	{
//		test();
//	}
//	return 0;
//}

//int hanshu(int n, int m, int d)
//{
//	int xq = 0;
//	int c = 0;
//	int y = 0;
//	y = n % 100;
//	c = (n - y) / 100;
//	if (m > 2)
//	{
//		m -= 2;
//		xq = (d + ((13 * m - 1) / 5) + y + (y / 4) + (c / 4) - (2 * c) )% 7;
//	}
//	else if (m<3)
//	{
//		m+=10;
//		n -= 1;
//		xq = (d + ((13 * m - 1) / 5) + y + (y / 4) + (c / 4) - (2 * c)) % 7;
//	}
//	return xq;
//}
//int main()
//{
//	int year = 0;
//	int mouth = 0;
//	int day = 0;
//	
//	scanf_s("%d %d %d", &year, &mouth, &day);
//	char* tbw[] = { "星期日","星期一","星期二","星期三","星期四","星期五","星期六"};
//	int d = hanshu(year, mouth, day);
//	printf("%s", tbw[d]);
//	return 0;
//}



//#define ROW 9
//#define COL 9
//#define MINE 10
//
////初始化棋盘
//void InitBoard(char board[ROW][COL], char set)
//{
//    for (int i = 0; i < ROW; i++)
//    {
//        for (int j = 0; j < COL; j++)
//        {
//            board[i][j] = set;
//        }
//    }
//}
//
////布置地雷
//void SetMine(char mine[ROW][COL])
//{
//    int count = 0;
//    while (count < MINE)
//    {
//        int x = rand() % ROW;
//        int y = rand() % COL;
//        if (mine[x][y] != '*')
//        {
//            mine[x][y] = '*';
//            count++;
//        }
//    }
//}
//
////计算周围地雷数量
//int GetMineNum(char mine[ROW][COL], int x, int y)
//{
//    int num = 0;
//    for (int i = x - 1; i <= x + 1; i++)
//    {
//        for (int j = y - 1; j <= y + 1; j++)
//        {
//            if (i >= 0 && i < ROW && j >= 0 && j < COL)
//            {
//                if (mine[i][j] == '*')
//                    num++;
//            }
//        }
//    }
//    return num;
//}
//
////递归展开空白区域
//void OpenBlank(char mine[ROW][COL], char show[ROW][COL], int x, int y)
//{
//    int n = GetMineNum(mine, x, y);
//    if (n > 0)
//    {
//        show[x][y] = n + '0';
//        return;
//    }
//    show[x][y] = ' ';
//
//    for (int i = x - 1; i <= x + 1; i++)
//    {
//        for (int j = y - 1; j <= y + 1; j++)
//        {
//            if (i >= 0 && i < ROW && j >= 0 && j < COL && show[i][j] == '#')
//            {
//                OpenBlank(mine, show, i, j);
//            }
//        }
//    }
//}
//
////打印棋盘
//void PrintBoard(char board[ROW][COL])
//{
//    printf("   ");
//    for (int i = 0; i < COL; i++)
//    {
//        printf("%2d", i);
//    }
//    printf("\n");
//    for (int i = 0; i < ROW; i++)
//    {
//        printf("%2d ", i);
//        for (int j = 0; j < COL; j++)
//        {
//            printf("%2c", board[i][j]);
//        }
//        printf("\n");
//    }
//}
//
////判断游戏是否胜利
//int IsWin(char mine[ROW][COL], char show[ROW][COL])
//{
//    int safe = 0;
//    for (int i = 0; i < ROW; i++)
//    {
//        for (int j = 0; j < COL; j++)
//        {
//            if (show[i][j] == '#' && mine[i][j] != '*')
//            {
//                safe++;
//            }
//        }
//    }
//    return safe;
//}
//
//int main()
//{
//    char mine[ROW][COL];
//    char show[ROW][COL];
//    srand((unsigned int)time(NULL));
//
//    InitBoard(mine, '0');
//    InitBoard(show, '#');
//    SetMine(mine);
//
//    int x, y;
//    int op; //1翻开，2插旗
//
//    while (1)
//    {
//        PrintBoard(show);
//        if (IsWin(mine, show) == 0)
//        {
//            printf("🎉恭喜你，扫雷成功！\n");
//            break;
//        }
//        printf("1翻开格子，2插旗标记地雷 请输入操作 行 列：\n");
//        printf("示例：1 3 4  翻开(3,4)； 2 2 5 给(2,5)插旗子\n");
//        scanf_s("%d %d %d", &op, &x, &y);
//
//        //越界检查
//        if (x < 0 || x >= ROW || y < 0 || y >= COL)
//        {
//            printf("坐标非法！\n");
//            continue;
//        }
//
//        if (op == 1)
//        {
//            if (mine[x][y] == '*')
//            {
//                printf("💥踩雷！游戏结束！\n");
//                //全部地雷展示
//                for (int i = 0; i < ROW; i++)
//                {
//                    for (int j = 0; j < COL; j++)
//                    {
//                        if (mine[i][j] == '*')
//                            show[i][j] = '*';
//                    }
//                }
//                PrintBoard(show);
//                break;
//            }
//            OpenBlank(mine, show, x, y);
//        }
//        else if (op == 2)
//        {
//            if (show[x][y] == '#')
//                show[x][y] = '⚑';
//            else if (show[x][y] == '⚑')
//                show[x][y] = '#';
//        }
//    }
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1;n <= 10;n++)
//	{
//		for (int i = 1;i <= n;i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int tbw = 1;
//	for (int i = 1;i <= n;i++)
//	{
//		tbw *= i;
//	}
//	printf("%d\n", tbw);
//	return 0;
//}

//int fac(int n)
//{
//	 if( n==0 )
//	{
//		return 1;
//	}
//	 else 
//	{
//		return fac(n - 1) * n;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = fac(n);
//	printf("%d\n", i);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);	
//	}
//     printf("%d ", n % 10);
//}
//
//int main()
//{
//	int tbw = 0;
//	scanf_s("%d", &tbw);
//	print(tbw);
//	return 0;
//}

//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int r = fib(n);
//	printf("%d", r);
//	return 0;
//}

//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c; 
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int r = fib(n);
//	printf("%d\n", r);
//}

//题目1：求N的阶乘
//int tbw(int i)
//{
//	int n = 1;
//	if (i == 0)
//	{
//		return 1;
//	}
//	else if (i > 0)
//	{
//		n = i * tbw(i - 1);
//		return n;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = tbw(n);
//	printf("%d\n", i);
//}

//题目二：1到N的和

//int tbw(int i)
//{
//	int n = 0;
//	if (i == 1)
//	{
//		return 1;
//	}
//	else if (i > 1)
//	{
//		n = i + tbw(i - 1);
//		return n;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = tbw(n);
//	printf("%d\n", i);
//}

//正数：
// 原反补均一样
// 负数：
//原码：直接将数值按照正负数的形式翻译成二进制
// 反码：将原码的符号位不变，其他未依次按位取反就是
// 补码：反码+1
//最高位表示正负，正数符号位是0；负数是1
//移位操作符的操作只能说整数，移动的是二进制
//左移，左边抛弃，右边补0
//int main()
//{
//	int a = -10;
//	//10001010    A的原码
//	//11110101    A的反码
//	//11110110    A的补码---存储的值
//	int b = a << 1 ;
//	//11101100    B的补码
//	//10010011
//	//10010100     b的原码
//	printf("%d", b);
//	return 0;
//}
//左移乘上2的N次方
//右移除上2的N次方，取整


//   &  按位与   
//int main()
//{
//	int a = 10;
//	//00001010   
//	int b = -7;
//	//10000111
//	//11111000
//	//11111001
//	int c = a & b;
//	//两者对比，同一位上，有0则为0.同为1则为1
//	//00001000   c的补码
//	printf("%d", c);
//}

//  |  按位或   有1则为1，同0则为0
//   ~  按位取反 1为0，0为1
//   ^  按位异或  相同则为0，不同则为1

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	printf("1...a=%d,b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("2...a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d %d", &a, &b);
//	printf("1...a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("2...a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int tbw = 0;
//	scanf_s("%d", &num);
//	/*while (num)
//	{
//		if ((num % 2) == 1)
//			tbw++;
//		num /= 2;
//	}*/
//	int i = 0;
//	for (i = 0;i <= 32;i++)
//	{
//		if ((num >> i) & 1 == 1)
//			tbw++;
//	}
//	printf("%d\n", tbw);
//	return 0;
//}

//13    000001101
  //    000010000   
//      000011101
//      111100010
//      111110010
//      000001101
// 

// struct 结构体关键字
//struct trg
// {
//    member-list;
// }variable-list;
// 
//member-list  成员列表 1个或多个
// trg 是自定义的名字

//struct student
//{
//	char name[20];
//	int age;
//	float score;
//
//};//注意分号不能忘
//
//struct test
//{
//	int n;
//	struct student;
//	char c[20];
//};
//
//int main()
//{
//	struct student zq = {"zhangqiang",18,85.33f};
//	struct student tbw = {"tianbowen",16,32.22f};
//	struct test fvv = { 100,{"zw",123,32.44f},"ch"};
//	printf("%s %d %f\n", zq.name, zq.age, zq.score);
//	printf("%d %s %d %f %s\n", fvv.n, fvv.name, fvv.age, fvv.score, fvv.c);
//	return 0;
//}


//    ++ --自增自减运算符
//   * / %乘除取余运算符
//   + -加减运算符
//   << >>移位运算符
//   < <= > >=关系运算符
//   == !=等于不等于运算符
//   &按位与运算符
//   ^按位异或运算符
//   |按位或运算符
	 //&&逻辑与运算符
	  //||逻辑或运算符
//    =赋值运算符
//    ,+=,-=,*=,/=,%=,<<=,>>=,&=,^=,|=复合赋值运算符
//     ? :条件运算符
//    ,逗号运算符
//    sizeof运算符
//    &取地址运算符
//    *指针运算符
//    ()小括号  用来改变运算顺序
		//->结构体指针运算符
//     []下标运算符
//	 .结构体成员运算符
//	 typecast类型转换运算符
//	 sizeof()返回类型所占的字节数
//	 &取地址运算符
//	 *指针运算符

//圆括号，自增自减，单目运算符，乘除取余 ，加减，关系运算符，按位运算符，逻辑运算符，条件运算符，赋值运算符，逗号运算符

//整型提升 把char short int提升为int类型
//截断转换  把高精度类型转换为低精度类型
//
//int main()
//{
//	char a = 10;
//	//00001010
//	//00000000000000000000000000000000000001010
//	char b = 120;
//	//01111000
//	//00000000000000000000000000000000000001111000
//	char c = 0;
//	c = a + b;
//	//a 00001010
//	//b 01111000
//	//c 10000010
//	//11111111111110000010
//	//10000000000001111110
//	
//	printf("%d\n", c);
//	//%d打印的是整型，c是char类型，打印的时候会进行整型提升，c的值是-126
//	//以10进制打印有符号位，c的值是-126
//	//%u打印的是无符号整型，c的值是130
//	printf("%u\n", c);
//	return  0;
//}
//有符号提升是按照补码的形式进行提升的
//补位按照符号位进行补位，正数补0，负数补1

//int fun()
//{
//	static int a = 1;
//	return ++a;
//}
//
//int main()
//{
//	int tbw = 0;
//	tbw = fun() - fun() * fun();
//	printf("%d\n", tbw);
//	return 0;
//}

//指针
//内存单元的编号是地址，地址是一个整数--指针
//指针是一个变量，存储的是地址
//指针变量的类型是指针类型
//变量的创建本质是在内存中开辟一块空间，给这块空间起一个名字
//%p打印指针变量的值，打印的是地址

//int main()
//{
//	int a = 10;
//	int* p = &a;//p就是指针变量，用来存储a的地址
//	printf("%p\n", p);
//	printf("%p\n", &a);
//  printf("%d\n",*p);
// *p是解引用操作符，取指针变量指向的值
// *p是指针变量，存储的是a的地址，*p是指针变量指向的值，也就是a的值
//}

//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(char*));
//	//x64位系统，指针变量的大小是8个字节
//	return 0;
//
// int a=0x12345678;
//char* p = (char*)&a; 
//*p=0;


//指针类型决定了指针变量解引用的大小，加减有多大步长，步长是指针类型的大小
//void*是万能指针，void*可以指向任意类型的变量，但是不能解引用

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p =& arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		//printf("%d ", *p);
//		//p++;
//	}
//	return 0;
//}

//指针的加减法
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int* q = &arr[9];
//	printf("%d\n", q - p);
//	//q-p是两个指针变量相减，得到的是两个指针变量之间的元素个数
//	return 0;
//}在同一数组中，两个指针变量相减，得到的是两个指针变量之间的元素个数

//size_t My_strlen( char* str)
//{
//	 char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	size_t len = My_strlen(arr);
//	printf("%zu\n", len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	while(p < &arr[10])
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//指针的比较，两个指针变量可以进行比较，比较的是两个指针变量的地址值


//const修饰指针变量，const修饰的是指针变量指向的值，不能通过指针变量修改指针变量指向的值

//int main()
//{
//	int a = 10;
//	const int* p = &a;
//	//*p = 20; //错误，不能通过指针变量修改指针变量指向的值
//	a = 20; //正确，可以直接修改a的值
//	printf("%d\n", *p);
//	return 0;
//}

//const放在*前面，修饰的是指针变量指向的值，不能通过指针变量修改指针变量指向的值,约束的是*P
// 放在*后面，修饰的是指针变量本身，不能修改指针变量的值，约束的是p

//野指针，指针变量没有初始化，指向的是一个随机的地址，访问野指针会导致程序崩溃
//超过释放的指针，指针变量指向的内存已经被释放，访问这个指针会导致程序崩溃
//悬空指针，指针变量指向的内存已经被释放，访问这个指针会导致程序崩溃
//空指针，指针变量指向的是NULL，访问空指针会导致程序崩溃
//int *p= NULL;空指针
//NULL是一个宏，表示空指针，NULL的值是0

//assert宏，断言宏，断言宏是一个调试宏，用来判断一个表达式是否为真，如果为假，就会打印出错误信息，并终止程序运行
//assert(表达式);头文件#include<assert.h>，如果表达式为假，就会打印出错误信息，并终止程序运行
//#define NDEBUG 关闭assert宏，NDEBUG是一个宏，表示不调试，关闭assert宏
//int main()
//{
//	int a = 10;
//	int b = 0;
//	assert(b != 0);
//	int c = a / b;
//	printf("%d\n", c);
//	return 0;

//void Sweap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf_s("%d%d", &a, &b);
//	printf("former:%d,%d\n", a, b);
//	Sweap(&a, &b);
//	printf("after:%d,%d\n", a, b);
//	return 0;
//}		
//传址调用，可以让函数和主函数建立联系，函数可以修改主函数的变量的值
//数组传参，传递的是数组的首元素的地址，函数可以通过指针修改数组的值
// 形参的数组和实参的数组是同一块内存空间，函数可以通过指针修改数组的值

//int main()
//{ 
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for(int i = 0; i < sz; i++)
//	{
//		*(p + i) = i + 1;
//		printf("%d ", *(p + i));
//	}
//	//arr[i]==*(arr+i)==*(p+i)
//	//i[arr]==*(i+arr)==*(i+p)
//	return 0;
//}

//void test(int arr[10])
////arr[10]=>arr[]=>int* arr大小为4或8，取决于32位还是64位
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz2);
//}
//
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz1);
//	test(arr);
// 数组传参，传递的是数组的首元素的地址
//	return 0;
//}
//数组降级

//void tbw1(int arr[], int sz)
//{
//	int i = 0;
//	for (; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void tbw2(int arr[], int sz)
//{
//	int i = 0;
// int flag = 1;
//	for (i = 0; i < sz-1; i++)
//	{
//		for(int j = 0; j < sz - 1 - i; j++)
//		{
//			if(arr[j] > arr[j + 1])
//			{
//              flag = 0;
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//       if(flag == 1)
//       {
//          break;
//        }
//	}
//}
//
//int main()
//{
//	int arr[10] = { 7,3,5,8,9,0,1,2,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	tbw2(arr, sz);
//	tbw1(arr, sz);
//	return 0;
//}
//排序算法，冒泡排序，选择排序，插入排序，快速排序，归并排序，堆排序，希尔排序，计数排序，桶排序，基数排序
 
//二级指针，指针的指针，指向指针的指针变量，二级指针变量存储的是一级指针变量的地址
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("%d\n", **pp);
//	return 0;
//}

//指针数组，数组的元素是指针变量，指针数组的元素是指针变量，指针数组的元素是指针变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		printf("%d ", *arr[i]);
//	}
//	return 0;
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int arr3[] = { 11,12,13,14,15 };
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		int j = 0;
//		for (; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char* ps = "abcdef";
//	//这里的赋值是把字符串常量的首地址--a赋值给了指针变量ps，ps指向的是字符串常量"abcdef"
//	printf("%c\n", *ps);
//	printf("%s\n", ps);
//	return 0;
//}

//数组指针，指向数组的指针变量，数组指针变量存储的是数组的首元素的地址

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
//	int(*p)[5] =&arr;
//	int i = 0;
//	for (; i < 3; i++)
//	{
//		int j = 0;
//		for (; j < 5; j++)
//		{
//			printf("%d ", p[i][j]);
//           arr[i][i];*(arr[i]+j);*(*(arr+i)+j)
//		}
//		printf("\n");
//	}
//	return 0;
//}

//函数指针，指向函数的指针变量，函数指针变量存储的是函数的首地址
//&函数名可以省略，函数名就是函数的首地址

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int x,int y) = Add;
//	int r = (*pf)(3, 5);
//	//int r = pf(3, 5);
//	printf("%d\n", r);
//	return 0;
//}

//void(*signal(int, void(*)(int)))
//signal函数的返回值是一个函数指针，指向一个函数，函数的参数是一个int类型的参数，返回值是void类型
//是一个函数声明，声明的函数是signal，函数的参数有两个，第一个参数是int类型，第二个参数是一个函数指针void(*)(int)
//signal函数的返回值类型是函数指针类型void(*)(int)

//(*(void(*)() 0)()是一个函数指针，指向一个函数，函数的参数是空，返回值是void类型
//void(*)()是函数指针类型，(void(*)())0类型放在括号中是强制类型转化
// 将整型0强制类型转换为函数指针类型，也就是0被当做函数的地址了
// *(void(*)())0，前面的*是调用0地址处的函数，根据函数指针，它是void类型的函数，调用后没有返回值

//typedef变量类型的别名，typedef是一个关键字，用来给一个类型起一个别名
//typedef unsigned int unit;
//
//int main()
//{
//	unit a = 10;
//	printf("%u\n", a);
//	return 0;
//}

//typedef给函数指针类型起别名
//int *p1,p2;
//p1是一个指针变量，指向一个int类型的变量，p2是一个int类型的变量
//#define PF int*

//typedef int (*pa)[5];
//
//int main()
//{
//	int arr[5] = { 0 };
//	int (*p)[5] = &arr;
//	pa  tbw = &arr;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//typedef int (*pf)(int, int);
//int main()
//{
//	pf tbw = Add;
//
//	return 0;
//}

//typedef void(*pf)(int);
//int main()
//{
//	//void(*signal(int, void(*)(int)))(int);
//	pf signal(int, pf);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int  Div(int x, int y)
//{
//	return x / y;
//}
//
//void mune()
//{
//	printf("---1.add   2.sub---\n");
//	printf("---3.mui   4.div---\n");
//	printf("---0.exit  --------\n");
//}
//
//int main()
//{ 
//	int input = 0;
//	mune();
//	scanf_s("%d", &input);
//	int (*pf[5])(int, int) = {NULL,Add,Sub,Mul,Div};
//	if (input >= 1 && input <= 4)
//	{
//		int x = 0, y = 0;
//		printf("输入两个数: ");
//		scanf_s("%d%d", &x, &y);
//		int result = pf[input](x, y);
//		printf("%d\n", result);
//	}
//	return 0;
//}
// void clc(int (*pf)(int ,int))
// {
//     int x=0,y=0,z=0;
//     scanf("%d%d",&x,&y);
//     z=pf(x,y);
//    pritnf("%d\n",z);
// }
 
//转移表
//回调函数，回调函数是一个函数指针，指向一个函数，函数的参数是一个函数指针，返回值是void类型
//函数的地址作为参数传递给另一个函数，另一个函数在适当的时候调用这个函数，这个函数就是回调函数

//void qsort(void* base,//指针，指向要排序的数组的第一个元素
//	size_t num,//base指向的数组元素的个数
//	size_t size,//base指向数组中一个元素的字节数
//	int (*comper)(const void*p1, const void*p2)//函数指针，指向一个行数
//	//指向这个函数用来比较baes指向的数组中任意两个数的大小
//);
// cmper函数是比较函数
//要求：函数的返回值体现P1和P2指向的数据大小
//P1指向的数据>P2指向的数据，返回>0的数字，P1排在P2后面
//P1<P2，返回<0的数字，P1排在P2前面
//P1==P2，返回0

//int cmp(const void* p1, const void* p2)
//{
//	if (*(int*)p1 > *(int*)p2)
//		return 1;
//	else if (*(int*)p1 < *(int*)p2)
//		return -1;
//	else
//		return 0;
//}

//int cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void test1()
//{
//	int arr[] = { 9,7,8,6,5,4,3,2,1, };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	print(arr,sz);
//}
//int main()
//{
//	test1();
//	return 0;
//}
//strcmp(字符串A，字符串B)
//比较的是字母顺序，而不是大小
//A》B返回1，A=B返回0，A《B返回-1

//struct tbw
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct tbw a = { "zhangsan",24 };
//	struct tbw* ps = &a;
//	printf("%s %d\n", ps->name, ps->age);
//	printf("%s %d\n", (*ps).name, (*ps).age);
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%zu\n", sizeof(a));//16
//	printf("%zu\n", sizeof(a + 0));//4/8  a是数组名，a+0是数组首元素的地址，sizeof(a+0)是指针变量的大小
//	printf("%zu\n", sizeof(*a));//4  *a是数组首元素的值，sizeof(*a)是数组首元素的大小
//	printf("%zu\n", sizeof(a+1));//4/8  a+1是第二个元素的地址，sizeof(a+1)是指针变量的大小
//	printf("%zu\n", sizeof(a[1]));//4  a[1]是第二个元素的值，sizeof(a[1])是第二个元素的大小
//	printf("%zu\n", sizeof(&a));//4/8  &a是数组的地址，sizeof(&a)是数组指针的大小
//	printf("%zu\n", sizeof(*&a));//16  *&a是数组本身，sizeof(*&a)是数组的大小
//	printf("%zu\n", sizeof(&a+1));//4/8  &a+1是下一个数组的地址，sizeof(&a+1)是指针变量的大小
//	printf("%zu\n", sizeof(&a[0]+1));//4/8  &a[0]+1是第二个元素的地址，sizeof(&a[0]+1)是指针变量的大小
//
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%zu\n", sizeof(arr));//6	
//	printf("%zu\n", sizeof(arr + 0));//4/8  arr是数组名，arr+0是数组首元素的地址，sizeof(arr+0)是指针变量的大小
//	printf("%zu\n", sizeof(*arr));//1  *arr是数组首元素的值，sizeof(*arr)是数组首元素的大小
//	printf("%zu\n", sizeof(arr[1]));//1  arr[1]是第二个元素的值，sizeof(arr[1])是第二个元素的大小
//	printf("%zu\n", sizeof(&arr));//4/8  &arr是数组的地址，sizeof(&arr)是数组指针的大小
//	printf("%zu\n", sizeof(*&arr));//6  *&arr是数组本身，sizeof(*&arr)是数组的大小
//	printf("%zu\n", sizeof(&arr + 1));//4/8  &arr+1是下一个数组的地址，sizeof(&arr+1)是指针变量的大小
//	printf("%zu\n", sizeof(&arr[0] + 1));//4/8  &arr[0]+1是第二个元素的地址，sizeof(&arr[0]+1)是指针变量的大小
//
//	return 0;
//}
