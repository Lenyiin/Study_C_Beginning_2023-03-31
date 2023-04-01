#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//视频P8-P14

//必须实践
//必须画图，内存布局
//必须调试



//数组里面找最大值
//int main()
//{
//	//数组
//	int sz[10] = { 0 };
//	//输入
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &sz[i]);
//	}
//	//找最大值
//	int max = sz[0];		//假设数组的第一个元素就是最大值
//	//拿剩下的元素和max比较，如果找到了比max大的值，就更新max
//	for (i = 1; i < 10; i++)
//	{
//		if (sz[i] > max)
//		{
//			max = sz[i];
//		}
//	}
//	//输出
//	printf("max = %d\n", max);
//
//	return 0;
//}



//数组求和
//int main()
//{
//	int sz[10] = { 0 };
//	//输入
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &sz[i]);
//	}
//	//求和
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum = sz[i] + sum;
//	}
//	//求和
//	printf("sum=%d\n", sum);
//	//求平均值
//	int avg = sum / 10;
//	printf("avg=%d\n", avg);
//
//	return 0;
//}



//刷题网站	入门	牛客网		PTA
//进阶刷题			牛客网		力扣


//
//int main()
//{
//	int sz[] = { 0,1,2,3,4,5,6,7,8,9,10,111 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", sz[i]);
//	}
//
//	//指针方法
//	int* p = sz;
//	int j = 0;
//	for (j = 0; j < 10; j++)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}



//变量的作用域和生命周期，哪里能用哪里就是作用域
//局部变量的作用域；就是变量所在的局部范围
//全局变量的作用域：整个工程



//声明一下变量;声明后，就可以跨文件使用
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段

//局部变量的生命周期:进入作用域生命周期开始，出作用域生命周期结束。
//全局变量的生命周期：整个程序的生命周期。

//int main()
//{
//	{
//		int a = 10;
//		printf("%d", a);
//	}
//	printf("%d", a);		//报错未定义
//	return 0;
//}




//常量

//#define MAX 10000;
//int main()
//{
//	//1.字面常量
//	3.14;
//	10;
//	"a";
//	"abcdef";
//
//	//2.const修饰的常变量
//	//int num = 10;				//变量
//	//num = 20;
//	//printf("%d\n", num);		//可变
//
//	//const int num1 = 10;		//此时num1是常变量，具有常属性（不能被改变的属性）
//	//num1 = 20;
//	//printf("%d\n", num1);		//可变
//
//	//int sz[10] = { 0 };			//10个元素
//	//int n = 10;
//	//int sz2[n] = { 0 };			//n是变量，这里是不行的
//
//	//int sz[10] = { 0 };			//10个元素
//	//const int n = 10;
//	//int sz2[n] = { 0 };			//n是常变量，这里还是不行的
//
//
//	//3.#define	定义的标识符常量
//	//MAX = 20000;					//err
//	//int n = MAX;
//	//printf("n=%d\n", n);
//
//
//	
//
//	return 0;
//}



//4.枚举常量
	//可以一一列举的常量

	//性别
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	MALE=3,								//这个地方不算改，这个叫赋初值
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	//MALE = 3;							//不能改
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}



//字符串就是一串字符，用双引号括起来的一串字符
#include<string.h>			//strlen函数的头文件
//int main()
//{
//	"abcdef";
//	"hello Ian";
//
//	//字符数组，数组是一组相同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//	char sz[]= "hello Ian";
//
//	char sz1[] = "abc";
//	char sz2[] = { 'a','b','c',};
//	//char sz2[] = { 'a','b','c','\0'};	//末尾需要加\0不然不会结束，会输出乱码
//	printf("%s\n", sz1);				//得使用%s
//	printf("%s\n", sz2);
//
//	//求一下字符串的长度
//	int len=strlen("abc");		//string lenth
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(sz1));
//	printf("%d\n", strlen(sz2));			//随机值
//	//\0作为字符串的结束标志转义字符，但是在计算长度的时候不会被计算在内
//
//
//	return 0;
//}




//转义字符	转变了原来的意思
//int main()
//{
//	printf("c:\test\test.c");			//c:      est     est.c			这是因为\t是转义字符
//	printf("c:\\test\\test.c");			//\\就不会转义，表示反斜杠
//	printf("ab\ncd");					//\n		换行
//	printf("\n%c\n", '\'');				//\'		输出	'	的转义字符
//	//printf在打印数据的时候，可以制定打印格式
//	printf("%d", 100);					//%d		打印一个整型
//	printf("%c", 'a');					//%d		打印一个字符
//	printf("%s", "abc");				//%d		打印一个字符串
//	//printf("\a\a\a");					//\a	蜂鸣器
//	printf("\n");
//	printf("%c\n", '\130');				//8进制的130是88，X的ASCⅡ码值是88			\ddd	其中ddd表示1~3个八进制的数字
//	printf("%c\n", '\x30');				//16进制的30是48，0的ASCⅡ码值是48			\xdd	其中dd表示2个16进制的数字
//	printf("%d\n", strlen("c:\test\328\test.c"));		//结果是14个字符“\t”转义字符算一个，“\32”算一个，“8”算一个
//	return 0;
//}


//注释：是用来解释复杂代码的

//int main()
//{
//	//int a = 10;			//C++的注释风格
//	/*
//	int b=0;
//	*/						//C语言的注释风格		现在很少用
//
//	return 0;
//}


static int Add1(int x, int y)
{
	return x + y;
}
