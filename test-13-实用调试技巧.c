#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P88-P97


//实用调试技巧
//1.什么是bug
//2.调试是什么？有多重要？
//3.debug和release的介绍
//4.windows环境调试介绍
//5.一些调试的实例
//6.如何写出（易于调试）的代码
//7.编程常见的错误


//Debug通常称为调试版本，它包含调试信息，并且不作任何优化，便于程序员调试程序
//Release称为发布版本，它往往是进行了各类优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好地使用。
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}
//断点
//常用的几个快捷键
//F5	启动调试，经常用来直接调到下一个断点处
//F9	创建断点和取消断点。可以在程序任意位置设置断点。这样就可以使得程序在想要的位置随意停止执行，继而一步步执行下去。
//F10	逐过程，通常用来处理一个过程，一个过程可以是一次函数调用，或者是一条语句。
//F11	逐语句，就是每次都执行一条语句，但是这个快捷键可以使我们的执行逻辑进入函数内部（这是最常使用的）。
//CTRL + F5		开始执行不调试，如果你想让程序直接运行起来而不调试就可以直接使用。
//Fn -	辅助功能键


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*for (i = 0; i <= 15; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}*/
//	printf("%p %p\n", &i, arr);
//	return 0;
//}
//i和arr是局部变量，局部变量是放在栈区上的
//栈区内存的使用习惯是：先使用高地址空间，再使用低地址空间		vs2022不太一样
//书		c陷阱与缺陷


//优秀的代码
//1.代码运行正常
//2.bug很少
//3.效率高
//4.可读性高
//5.可维护性高
//6.注释清晰
//7.文档齐全
//常见的coding技巧
//1.使用assert
//2.尽量使用const
//3.养成良好的编码风格
//4.添加必要的注释
//5.避免编码的陷阱


//模拟实现strcpy
//strcpy - 字符串拷贝
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//void my_strcpy1(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;			//hello的拷贝
//	}
//	*dest = *src;					//\0的拷贝
//}
//
//#include<assert.h>
// 把src指向的内容拷贝放进dest指向的空间中
// 从本质上讲，希望dest指向的内容被修改，src指向的内容不应该被修改
//void my_strcpy2(char* dest, const char* src)
//{
//	assert(src != NULL);			//断言
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	//my_strcpy(arr1, arr2);
//	my_strcpy2(arr1, arr2);
//	//strcpy(arr1,arr2);			//1.目标空间的起始地址 ，2.源空间的起始地址
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	/*int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);*/
//
//	//const 修饰变量，这个变量就成为常变量，不能被修改，但本质上还是变量
//	const int num = 10;
//	//num = 20;
//	/*const int* p = &num;
//	//const 修饰指针变量的时候
//	//const 如果放在*的左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的
//	//		但是指针变量本身是可以修改的
//	//*p = 20;
//	int n = 100;
//	p = &n;			//指针变量本身是可以修改的
//	printf("%d\n", num);*/
//
//	int* const p = &num;			//如果const放在*的右边，修饰的是指针变量p，表示指针变量不能被改变
//									//但是指针指向的内容，可以被改变
//	int m = 100;
//	p = &m;							//err
//	*p = 20;						//true
//	return 0;
//}

//int const* const* const p;		//第一个const修饰**p；第二个const修饰*p；第三个const修饰p


//模拟实现strlen
#include<string.h>
//健壮性
//鲁棒性
//size_t	unsigned int
//size_t my_strlen2(const char* arr)
//{
//	assert(arr != NULL);		//assert(arr)	这两个一个意思
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "hello";
//	
//	printf("%d\n", strlen(arr));		//strlen是求字符串长度
//	int ret = my_strlen2(arr);
//	printf("%d\n", ret);
//	return 0;
//}



//常见的错误分类
//1.编译型错误
//2.链接型错误
//3.运行时错误


//作业	一个数字有几个1
//当输入负数，就会出错
//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
////改进
//int Numberof11(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
////另一种方法
int Numberof12(int n)
{
	int count = 0;
	int i = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
//int main()
//{
//	int n = -15;
//	//int ret = Numberof1(n);
//	int ret = Numberof11(n);
//	printf("%d\n", ret);
//	ret = Numberof12(n);
//	printf("%d\n", ret);
//	return 0;
//}


//写一个代码判断一个数字是不是2的n次方			k&(k-1)==0


//作业   输入两个数字，测试两个数字的二进制位不同的个数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))				//一对一对硬比较
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//另一种方法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//	int ret = m ^ n;						//按位异或，相同为0，相异为1
//	//统计一下ret的2进制中有几个1，就说明m和n的二进制位中有几位不同
//	count = Numberof12(ret);
//	printf("%d\n", count);
//	return 0;
//}

//作业  不创建临时变量，交换两个变量
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d\n%d\n", a, b);
//	return 0;
//}


//oj		online judge

//作业 最小公倍数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &i, &j);
//	int min = i > j ? i : j;
//	//方法1
//	while (1)
//	{
//		if (min % i == 0 && min % j == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min++;
//	}
//	//方法2
//	for (int a = 1;; a++)
//	{
//		if (i * a % j == 0)
//		{
//			printf("%d\n", i * a);
//			break;
//		}
//	}
//	return 0;
//}


//作业  
reverse(char* left, char* right)
{
	while(left<right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);						//scanf()函数只能录入空格前面的字符，所以使用gets函数
	//三步反转法
	//1.字符串整体反转
	//2.每个单词逆序
	//3.

	int len = strlen(arr);
	reverse(arr, arr + len - 1);		//整体逆序
	printf("%s\n", arr);

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}

	printf("%s\n", arr);

	return 0;
}