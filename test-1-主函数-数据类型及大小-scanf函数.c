#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//视频P1-P7

//1.主函数（main函数）
//c语言是从主函数的第一行开始执行的
//所以c语言得有main主函数-入口
//int是整型
//printf-库函数-在屏幕打印信息的
//printf的使用，也得打招呼（引用头文件stdio.h）


//int main()
//{
//	printf("今天是一个新的开始-2023-03-30\n");
//	return 0;
//}


//一个工程中可以有多个.C文件
//多个.c文件只能有一个main函数






//数据类型
//计算机语言-写程序-解决生活中的问题
//购物商店--15.6--浮点型
//年龄--整型

//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//长整型
//	long a = 1;
//  //长长整型
//  longlong=1；
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//	return 0;
//}

//一键注释ctrl+k，ctrl+c
//一键注释ctrl+k，ctrl+u







//每种类型的数据类型大小？
//int main()
//{
//	printf("%d\n", 100);   //打印一个整数-%d
//	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
//	printf("%d\n", sizeof(char));			 //结果为1
//	printf("%d\n", sizeof(short));			 //结果为2
//	printf("%d\n", sizeof(int));			 //结果为4
//	printf("%d\n", sizeof(long));			 //结果为4
//	printf("%d\n", sizeof(long long));		 //结果为8
//	printf("%d\n", sizeof(float));		   	 //结果为4
//	printf("%d\n", sizeof(double));			 //结果为8
//
//	//byte-字节=8bit
//	//kb-1024byte
//	//mb-1024kb
//	//gb-1024mb
//	//tb-1024gb
//	//pb-1024tb
//
//	return 0;
//}



//类型用来创建变量
//int main()
//{
//	//创建的一个变量
//	//类型   变量名=0；推荐
//	//类型  变量的名字；不推荐
//
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 20;
//	printf("%d\n", age);
//	printf("%lf\n", weight);			//浮点型用	%lf
//
//
//	return 0;
//}

//其中
//%d - 整型
//%f - float
//%lf - double





//全局变量		{}外部定义的
//int a=100
//int main()
//{
//	//局部变量	{}内部定义的
//	int a = 10;
//	printf("%d", a);			//当局部变量和全局变量名字冲突的情况下，局部优先
//
//	return 0;
//}






//写一个代码求两个整数的和
//scanf函数是一个输入函数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//		sum = a + b;
//		printf("sum=%d\n", sum);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1				加入这一行代码，且必须放在第一行，就能使用scanf函数
//scanf_s函数 - VS编译提供的，不是c语言标准规定的



int g_val = 2023;