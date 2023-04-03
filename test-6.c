#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P45-

//1.函数是什么
//2.库函数
//3.自定义函数
//4.函数参数
//5.函数调用
//6.函数的嵌套调用和链式访问
//7.函数的声明和定义
//8.函数递归




//函数是什么？		维基百科的定义：子函数
//子程序：是一个大型程序中的某部分代码，由一个或多个语句块组成。它负责完成某项特定任务，而且相较于其他代码，具备相对的独立性。
//一般会有输入参数并有返回值，提供对过程的封装和细节的隐藏。这些代码通常被集成为软件库。


//C语言中函数的分类
//1.库函数
//2.自定义函数

//测试strcpy
//int main()
//{
//	char sz1[20] = { 0 };
//	char sz2[] = "hello world!!!";
//	strcpy(sz1, sz2);
//	printf("%s", sz1);					//打印sz1这个字符串 %s - 以字符串的格式打印
//	return 0;
//}

//测试memset
//int main()
//{
//	char sz[] = "hello world!!!";
//	memset(sz, 'x', 5);
//	printf("%s\n", sz);
//	return 0;
//}


//IO函数		printf	scanf	getchar		putchar
//字符串操作函数	strcmp		strlen
//字符操作函数		toupper
//内存操作函数		memcpy		memcmp		memset
//时间/日期函数		time
//数学函数			sqrt		pow
//其他库函数




//自定义函数
//自定义函数和库函数一样，有函数名，返回值类型和函数参数。
//但是不一样的是这些都是我们自己来设计。这给程序员一个很大的发挥空间。


//自定义函数
int get_max(int i, int j)
{
	int z = 0;
	if (i > j)
		z = i;
	else
		z = j;
	return z;		//返回较大值
}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	printf("请输入两个数字，我来告诉你谁最大！！！\n");
//	scanf("%d%d", &i, &j);
//	//函数的调用
//	max = get_max(i, j);
//	printf("你输入的两个数字%d和%d中的最大值是：%d\n", i, j, max);
//	return 0;
//}

//函数返回类型的地方写出：void，表示这个函数不返回任何值，也不需要返回
//写出问题了
void exchange1(int i, int j)			//写错了				//传值调用
{
	//exchange1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
	//改变形参，是不能改变实参
	int z = 0;
	z = i;
	i = j;
	j = z;

}
void exchange2(int *i, int *j)			//形式参数				//传址调用
{
	int z = 0;
	z = *i;
	*i = *j;
	*j = z;
	//return i, j;
}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	printf("请输入两个数字，我来我来帮你交换顺序！！！\n");
//	scanf("%d%d", &i, &j);
//	printf("你输入的数字是%d和%d\n", i, j);
//	//函数的调用
//	exchange1(i, j);			//传值调用
//	exchange2(&i, &j);			//传址调用						//实际参数
//	
//	printf("交换后的顺序%d和%d\n", i, j);
//	return 0;
//}

//int main()
//{
//	int a = 10;			//四个字节的空间
//
//	int* pa = &a;		//pa就是一个指针变量
//	*pa = 20;
//
//	printf("%d\n", a);
//	return 0;
//}


//实际参数：真实传给函数的参数，叫实参。实参可以是：常量、变量、表达式、函数等。
//无论实参是何种类型的量，在进行函数调用时，他们都必须有确定的值，以便把这些值传送给形参。

//形式参数：是指函数名后括号中的变量，因为形式参数只有在函数被调用的过程中才实例化（分配内存单元），所以叫形式参数。
//形式参数当函数调用完成之后就自动销毁了。因此形式参数只在函数中有效。

//传值调用：函数的形参和实参分别占有不同内存块，对形参的修改不会影响实参
//传址调用：把函数外部创建变量的内存地址传递给函数参数的一种调用函数的方式。
//			这种传参方式可以让函数和函数外的变量建立起正真的联系，也就是函数内部可以直接操作函数外部的变量。



//作业		写个函数打印100-200之间的素数
#include<math.h>
int is_prime(int a)
{
	int b = 0;
	int c = 1;
	for (b = 2; b <= sqrt(a); b++)
	{
		if (a % b == 0)
		{
			c = 0;
			break;
			//return 0;
		}
	}
	return c;
}
int is_leap_year(int a)
{
	if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
		return 1;
	return 0;
}
//这种方法更简洁
int is_leap_year1(int a)
{
	return ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0));
}

//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 101; i <= 200; i +=2 )
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//			count1++; 
//			
//		}
//	}
//	printf("%d\n\n", count1);
//	//1000-2000年之间的闰年
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count2++;
//		}
//	}
//	printf("\n\n%d\n", count2);
//
//	return 0;
//}
//一个函数如果不写类型，默认返回int类型



//作业  用函数实现二分查找找一个数
int binary_search(int arr[], int a, int b)
{
	int left = 0;
	int right = b-1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > a)
		{
			right = mid - 1;
		}
		else if (arr[mid] < a)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;				//设置要找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到的位置的下标
//	//找不到就返回-1
//	//数组arr传参，实际传递的不是数组本身，仅仅传过去了数组首元素的地址
//	int ret = binary_search(arr, key, sz);
//
//	if (-1 == ret)
//	{
//		printf("查无此数！！！\n");
//	}
//	else
//	{
//		printf("找到了，这个数的下标是：%d\n", ret);
//	}
//	return 0;
//}
//数组arr传参，实际传递的不是数组本身，仅仅传过去了数组首元素的地址


//作业   写一个函数，每调用一次这个函数，就会将num的值增加1.

void Add1(int *a)
{
	(*a)++;
}
//int main()
//{
//	int num = 0;
//	Add1(&num);
//	printf("第%d次调用\n", num);	
//	Add1(&num);
//	printf("第%d次调用\n", num);
//	Add1(&num);
//	printf("第%d次调用\n", num);
//	return 0;
//}


//函数的嵌套调用和链式访问
//函数可以嵌套调用，不能嵌套定义


//链式访问
#include<string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	
//	printf("%d\n", strlen("abc"));			//链式访问
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//
//	printf("%s\n", strcpy(arr1, arr2));		//链式访问
//	printf("%d", printf("%d", printf("%d", 43)));			//printf返回的是打印在屏幕上字符的个数
//	return 0;
//}



int main()
{
	int a = 10;
	int b = 20;
	//函数声明一下 - 告知
	int add(int, int);
	int c = add(a, b);
	printf("%d", c);
	return 0;
}

//函数的定义
int add(int x, int y)
{
	return x + y;
}

//函数的声明和定义
//函数的声明：	1.告诉编译器有一个函数叫什么、参数是什么，返回类型是什么。但是具体是不是存在，无关紧要。
//				2.函数的声明一般出现在函数的使用之前。要满足先声明后使用。
//				3.函数的声明一般要放在头文件中的。
//函数的定义：	函数的定义是指函数的具体实现，交代函数的功能实现。

//导入静态库	#pragma comment(lib,"sub.lib")