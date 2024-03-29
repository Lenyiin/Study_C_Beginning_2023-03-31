#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//P60-P63


//本章重点
//1.一维数组的创建和初始化
//2.一维数组的使用
//3.一维数组在内存中的存储
//4.二维数组的创建和初始化
//5.二维数组的使用
//6.二维数组在内存中的存储
//7.数组作为函数参数
//8.数组的应用实例1：三子棋
//9.数组的应用实例2：扫雷游戏



//数组：一组相同类型元素的集合
//type_t arr_name [const_n];			//type_t	是指数组的元素类型；	const_n		是一个常量表达式，用来指定数组的大小

//int main()
//{
//	int arr[10];						//创建数组
//	// char ch[5];
//	int a = 10;									//初始化
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };	//完全初始化
//	int arr2[10] = { 1,2,3,4,5 };				//不完全初始化，未初始化的自动补充0
//	int arr3[] = { 1,2,3,4,5 };					//自动补充5，相当于		int arr3[5]={1,2,3,4,5};
//	char ch[5] = { 'a','b','c' };				//前三位放	a b c 后两位放	’\0‘ ’\0‘
//	char ch1[5] = "abc";						//结果是：a b c \0 0
//	char ch2[] = "abc";							//结果是：a b c \0
//
//	//两种定义字符串的区别
//	char ch3[] = "abc";							//[a b c \0]
//	char ch4[] = { 'a','b','c' };				//[a b c]
//
//	printf("%s\n", ch3);
//	printf("%s\n", ch4);
//	//abc
//	//abc烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫烫泰, I ?
//
//	//不仅结果有差异，打印字符串长度也有差异
//	printf("%d\n", strlen(ch3));
//	printf("%d\n", strlen(ch4));				//一直要找到 '\n'才会停止
//	return 0;
//}




//一维数组的定义

//int main()
//{
//	int arr[10] = { 0 };		//初始化
//	arr[4] = 5;					//[] - 下标引用操作符
//	printf("%d\n", arr[4]);
//	int sz = sizeof(arr) / sizeof(arr[0]);		//计算字符串长度
//	printf("数组的长度为：%d\n", sz);
//	for (int i = 0; i < sz; i++)				//打印数组
//	{
//		printf("数组是：%d\n", arr[i]);
//	}
//	return 0;
//}

//总结：1、数组是使用下标来访问的，下标是从0开始。
//		2、数组的大小可以通过计算得到。

//%p - 是按地址的格式打印 - 十六进制的打印
//int main()
//{
//	printf("%x\n", 0x12);			//%x	16进制打印
//	printf("%p\n", 0x12);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//1、一维数组在内存中是连续存放的！
//2、随着数组下标的增长，地址是由低到高变化的！


//《C/C++/JAVA》
//《数据结构》
//《操作系统》
//《计算机网络》
//《数据库》
//《计算机组成原理》
//《单片机》
//《软件工程》、《软件测试》




//二维数组的创建

//int main()
//{
//	//创建
//	int arr[3][4];				//创建一个二维数组
//	char ch[3][10];
//	//初始化 - 创建的同时给赋值
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };		//完全初始化
//	int arr2[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };		//不完全初始化		补0，字符型数组补 '\0'
//	int arr3[3][4] = { {1,2},{3,4},{4,5}};		//不完全初始化		里边的大括号分别是第一行、第二行、第三行
//	int arr4[][4] = { {1,2},{3,4},{4,5}};		//不完全初始化		可以省略行，不能省略列
//	//二维数组的使用
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d  ", arr4[i][j]);
//		}
//		printf("\n");
//	}	
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr4[%d][%d]=%p\n",i,j,&arr4[i][j]);
//		}
//	}
//	//指针访问二维数组
//	int* p = &arr4[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//二维数组在内存中也是连续存放的



//数组作为函数参数
//往往我们在写代码的时候，会将数组作为参数传个函数，比如：我要实现一个冒泡排序，函数将一个整型数组排序。
//// 冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	//冒泡排序的思想：两两相邻的元素进行比较，并且可能的话需要交换
//	//int sz = sizeof(arr) / sizeof(arr[0]);				//不能在函数里面求数组大小，因为函数传进来的是地址，应在外面求好送进来
//	//确定个数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//排序为升序 - 冒泡排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);						//数组在传参的时候是传首地址
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//数组传参传的是首元素地址
//但是，有两个意外
//1、sizeof（数组名） - 数组名表示整个数组 - 计算的是整个数组的大小，单位是字节
//2、&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);			//1 - &arr取出的是数组的地址
//	printf("%p\n", &arr+1);			//1 - 举例		加1  加的是40
//
//	printf("%p\n", arr);			//2 - 是数组的地址
//	printf("%p\n", arr+1);			//2 - 举例		加1  加的是4
//	printf("%p\n", &arr[0]);		//3
//
//
//	int sz = sizeof(arr);			//数组名表示整个数组
//	printf("%d\n", sz);
//	//这两个输出一样
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);			//数组名是首元素地址
//	return 0;
//}



//冒泡排序的优化
//void bubble_sort(int arr[], int sz)
//{
//	//冒泡排序的思想：两两相邻的元素进行比较，并且可能的话需要交换
//	//int sz = sizeof(arr) / sizeof(arr[0]);				//不能在函数里面求数组大小，因为函数传进来的是地址，应在外面求好送进来
//	//确定个数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序的过程
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//交换
//				int a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//				flag = 0;
//			}
//		}
//		if (flag == 1)						//如果一次都没交换，说明已经排好了，不需要再循环了
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//排序为升序 - 冒泡排序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);						//数组在传参的时候是传首地址
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//
//	printf("%d\n", sizeof(arr));						// 48
//	printf("%d\n", sizeof(arr[0]));						// 16
//	printf("%d\n", sizeof(arr[0][0]));					// 4
//
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));		// 3	计算有几行
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));	// 4	计算有几列
//
//	printf("%p\n", arr);								// 二维数组的数组名也表示数组首元素的地址
//	printf("%p\n", arr[0]);								// 第一行的地址
//	printf("%p\n", &arr[0][0]);							// 第一个元素的地址
//	printf("%p\n", arr[1]);
//	printf("%p\n", arr[2]);
//
//	return 0;
//}

// 1
//int main()
//{
//	char arr[] = "abcde";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	// int right = sz - 2;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//	printf("%s", arr);
//
//	return 0;
//}

// 2
//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	
//	reverse(arr);
//
//	printf("%s", arr);
//
//	return 0;
//}

// 3
//// 递归
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int DigitSum(unsigned int num)
//{
//	int sum = 0;
//	while (num / 10)
//	{
//		sum += num % 10;
//		num /= 10;
//	}
//	sum += num;
//
//	return sum;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//
//	return 0;
//}

//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//
//	return 0;
//}

//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return Pow(n, k - 1) * n;
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}


//int main()
//{
//	char str[] = "hello world!";
//	printf("%d %d\n", sizeof(str), strlen(str));	// 13 12
//
//	return 0;
//}