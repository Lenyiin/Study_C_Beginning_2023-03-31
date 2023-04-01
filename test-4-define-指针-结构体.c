#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P24-P



//define是一个预处理指令
//1.define定义符号

#define MAX 1000			//define定义常量

//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}


//2.define定义宏
//#define ADD(X,Y) X+Y						//定义有点问题
//#define ADD1(X,Y) ((X)+(Y))					//这种定义才可以，用括号括起来当成一个整体
//int main()
//{
//	printf("%d\n", ADD(2,3));
//	printf("%d\n", 4*ADD(2,3));				//4*2+3=11			第一种定义宏的错误示范
//	printf("%d\n", 4*ADD1(2,3));			//4*（2+3）=20		第二种定义宏的正确示范
//	return 0;
//}



//指针
//内存：内存是电脑上特别重要的存储器，计算机中所有程序的运行都是在内存中进行的。
//所以为了有效的使用内场，就把内存划分为一个个小的内存单元，每个内存单元的大小是1个字节。
//为了能够有效的访问到内存的每个单元，就给内存单元进行了编号，这些编号被称为该内存单元的地质

//1.内存是怎么编号的？
//32位 - 32跟地址线 - 物理线 - 通电 - 1/0
//64位
//电信号转换成数字信息：1和0组成的二进制序列
//00000000 00000000 00000000 00000000
//...
//01111111 11111111 11111111 11111111
//10000000 00000000 00000000 00000000
//...
//11111111 11111111 11111111 11111111			一共有2^32个内存单元

//2.一个这样的内存单元是多大的空间
//如果一个内存单元是一个比特：2^32bit=536870912byte=524288kb=512MB=0.5G			这样太细太浪费了
//最终：一个内存单元是一个字节：2^32byte=2^22kb=2^12MB=2^2G=4G


//int main()
//{
//	int a = 10;					//a在内存中要分配空间  -  4个
//	printf("%p\n", &a);			//%p专门用来打印地址的
//	int* pa = &a;				//pa是用来存放地址的，在C语言中pa叫指针变量
//	//*说明pa是指针变量
//	//int说明pa执行的对象是int类型的
//	char ch = 'w';
//	char* pc = &ch;				//pc执行的对象是char类型
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;			//将a的地址给pa
//	*pa = 20;				// *解引用操作	*pa就是通过pa里边的地址，找到a
//	printf("%d\n", a);
//	return 0;
//}

//指针就是地址


//指针变量有多大
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	//指针的大小都是相同的
//	//指针是用来存放地址的，指针需要多大空间，取决于地址的存储需要多大空间
//
//	return 0;
//}
//指针大小在32位平台是4个字节，64位平台是8个字节。



//结构体：结构体使得C语言有能力描述复杂类型
//结构体可以让c语言创建新的类型出来
//创建一个学生

struct Stu
{
	char name[20];			//成员变量
	int age;
	double score;
};
//创建一个书的类型
struct Book
{
	char name[20];
	float price;
	char id[30];
};

//int main()
//{
//	struct Stu s = {"张三",20,85.5};		//结构体的创建和初始化
//	printf("第一次打印：\n%s\n%d\n%lf\n", s.name, s.age, s.score);			//结构体变量.成员变量
//	struct Stu* ps = &s;
//	printf("第二次打印：\n%s\n%d\n%lf\n", (*ps).name, (*ps).age, (*ps).score);			//通过指针
//	printf("第三次打印：\n%s\n%d\n%lf\n", ps->name, ps->age, ps->score);				//通过->	结构体指针->成员变量名
//	return 0;
//}

//一般不建议把函数的名字写成全大写


//作业

//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", sum(a));
//	}
//}
//第一次循环，i=0，a=2，c=1，b=5，sum（a=2）=8
//第二次循环，i=1，a=2，c=1，b=7，sum（a=2）=10
//第三次循环，i=2，a=2，c=1，b=9，sum（a=2）=12
//第四次循环，i=3，a=2，c=1，b=11，sum（a=2）=14
//第五次循环，i=4，a=2，c=1，b=13，sum（a=2）=16

