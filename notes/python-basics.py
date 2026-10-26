'''
n=int(input())
i=1
k=0
while i<=n:
    k+=i
    i+=1
print(k)
'''
'''
for i in range(3,10):    #3~9
    print(i)
'''
"""
s="tainboewn"
for c in s:
    print(c)
"""
#range(m,n,s):   从m数到n，不包含n，没次的间隔是s
'''
name=input()
age=int(input())
habby=input()
s="name is %s,age is %d,habby is %s"%(name,age,habby)
s2=f"name is {name},age is {age},habby is {habby}"
print(s2)
print(s[0:5])
print(s[:5])
print(s[5:])
s="caonima"
print(s[::-1])#从右到左打印
gra;    s[start:end:step]从start到end，每step个元素出来一个元素
负号表示倒序
list=["zq","fvv","tbw"]
print(list[0:2])

#append()追加
#insert()插入
arr=[]
arr.append('zq')
arr.append("tbw")
arr.insert(1,'fvv')
print(arr)

#pop()删除，删除索引，返回被删除的元素
ret=arr.pop(1)
#remove()删除某个元素
arr.remove("zq")
print(arr)

#修改
arr[2]="zc"
print(arr)
'''
'''
arr=['zq','zc','tb','zt']
for i  in range(len(arr)):
    x=arr[i]
    if x.startswith('z'):
        new='l'+x[1]
        arr[i]=new
print(arr)    
'''
'''
arr=[14,55,6,66]
arr.sort()
arr.sort(reverse=True)#reverse翻转
print(arr)
'''
'''
#split字符串切割，用什么切，就会损失什么
a='python_java_c_c#'
lst=a.split("_java_")
print(lst)
'''
'''
#replace(old,new)字符串替换
s='zhang qiang'
s1=s.replace('zhang','tain')
print(s1)
'''
'''
#strip()去掉字符串左右两端的空字符（空格，\t,\n）
s='  tain  bo   '
s1=s.strip()
print(s1)
print(s)
'''
'''
#lower()变小写字母,upper()变大写字母
s='tainbowen'
s1=s.upper()
print(s1)
s2=s1.lower()
print(s2)
'''
#find()查找，返回—1表示没有，其他数字表示出现的位置
#等效为print('字符串' in s) ture为有 false没有
#startswith（）判断是否为什么开头
#endswith()结尾
#isdigit()判断是不是由整数组成
#len()计算长度
#join()连接
'''
arr=['a','b','c']
s='_'.join(arr)
print(s)
'''
'''
arr=['abc','def',['cao','sb',['md','dd']]]
print(arr[2][2][1])
arr[2][2][1]=arr[2][2][1].upper()
print(arr[2][2][1])
'''
'''
arr=['zq','zc','tb','zt']
for i in range(len(arr)):
    if arr[i].startswith('z'):
        arr[i].remove()
print(arr)
'''   













