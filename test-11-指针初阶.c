#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//P82-P86

//本章重点
//指针是什么
//指针和指针类型
//野指针
//指针运算
//指针和数组
//二级指针
//指针数组


//指针是什么
//在计算机科学中，指针是编程语言中的一个对象，利用地址，它的值直接指向存在电脑存储器中另一个地方的值。
//由于通过地址能找到所需的变量单元，可以说，地址指向该变量单元。因此，将地址形象化的称为指针。意思是通过它能找到以他为地址的内存单元。
//一个内存单元一个字节
//int main()
//{
//	int a = 10;		//a占4个字节
//	int* pa = &a;	//拿到的是a的4个字节中第一个字节的地址
//	//这里我们对变量a，取出他的地址，可以使用&操作符
//	//将a的地址存放在p变量中，p就是一个指针变量
//
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}

//总结：指针是用来存放地址的，地址是唯一标示一块地址空间的
//指针的大小在32位平台是4字节，在64位平台是8字节


//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//	//大小都一样
//
//	
//	return 0;
//}

//int main()
//{
//	//指针类型的意义
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//
//	a = 0x11223344;
//	char* pc = &a;				//类型发生了变化，权限就发生了变化
//	*pc = 0;
//	printf("%d\n", a);
//}

//int main()
//{
//	char* pc = NULL;
//	short* ps = NULL;
//	int* pi = NULL;
//	double* pd = NULL;
//
//	// sizeof 返回的值的类型是无符号整型 unsigned int
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//	printf("%zu\n", sizeof(pi));
//	printf("%zu\n", sizeof(pd));
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	char* pc = arr;
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);			//整型指针+1，加了个4
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);			//char类型指针+1，加了个1
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//指针类型的意义
//1.指针类型决定了：指针解引用的权限有多大
//2.指针类型决定了，指针走一步，能走多远（步长）,和指向的类型无关



//野指针
//概念：野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//1.指针未初始化
//2.越界访问
//3.指针指向的空间释放
//int main()
//{
//	//这里的p就是一个野指针
//	//1.指针未初始化
//	//int* p;		//是一个局部的指针变量，局部变量不初始化的话，默认是随机值
//	//*p = 20;	//非法访问内存了
//
//	//2.越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//3.指针指向的空间释放
//int* test1()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test1();
//	*p = 20;
//	return 0;
//}

//如何避免野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放，即及时NULL
//4.指针使用之前检查有效性
//int main()
//{
//	//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL
//	int* p = NULL;
//	//明确知道初始化的值
//	int a = 10;
//	int* ptr = &a;
//
//	//c语言本身是不会检查数据的越界行为的
//
//	if (p != NULL)
//		*p = 20;
//	return 0;
//}



//指针运算
//指针+-整数
//指针-指针
//指针的关系运算
//int main()
//{
//	//指针+-整数
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//
//	//指针-指针
//	printf("%d\n", &arr[9] - &arr[0]);			//指针-指针，得到的是两个指针之间的元素个数
//
//	char c[5];
//	printf("%d\n", &arr[9] - &c[0]);			//指针和指针相减的前提是两个指针指向同一块空间
//	return 0;
//}

////计数器
//int my_strlen2(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////指针-指针
//int my_strlen3(char * str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	int len = my_strlen2("abc");
//	printf("%d\n", len);
//	int len1= my_strlen3("abc");
//	printf("%d\n", len1);
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int* i = arr[5];
//	for (i = &arr[5]; i > &arr[0];)
//	{
//		*--i = 0;
//	}
//
//	for (i = &arr[5 - 1]; i >= &arr[0]; i--)
//	{
//		*i = 0;
//	}
//	return 0;
//}
//虽然上面两种写法都能通过编译，但是第二种我们应当避免这样写
//标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。


//指针和数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);				//数组名是数组首元素的地址
//	printf("%p\n", &arr[0]);
//
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p < == > %p\n", &arr[i], p + i);
//	}
//
//	printf("%d\n", 2[arr]);			//[]是一个操作符	2和arr是两个操作数
//	printf("%d\n", arr[2]);			//a+b=b+a
//	//arr[2] --> *(arr+2)
//	printf("%d\n", p[2]);			//相当于p+2		p[2] --> *(p+2)
//
//	//arr[2] <==> *(arr+2) <==> *(p+2) <==> *(2+p) <==> *(2+arr) <==> 2[arr]
//	//2[arr] <==> *(2+arr)
//	return 0;
//}


//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;		// pa是指针变量，一级指针
//
//	/ /ppa就是一个二级指针
//	int** ppa = &pa;	// pa也是个变量，&pa取出pa在内存中起始地址
//	int*** pppa = &ppa;	// 三级指针
//
//	// *ppa==pa		*pa=a		==>		* *ppa=a
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;		// pa是指针变量，一级指针
//	*pa = 20;
//	printf("%d\n", a);	// 20
//
//	int** ppa = &pa;	// ppa是二级指针变量
//	**ppa = 30;
//	printf("%d\n", a);	// 30
//	// *ppa==pa		*pa=a		==>		* *ppa=a
//
//	return 0;
//}


//指针数组 - 数组
//int main()
//{
//	int arr[10] = { 0 };		//整型数组 - 存放整型的数组就是整型数组
//	char ch[5];					//字符数组 - 存放的是字符
//
//	int* parr[5];				//整型指针的数组
//	char* pch[5];
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	// arr 是一个数组，存放的是 int 类型的数组
//	int arr[] = { a,b,c };
//
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	// parr 是指针数组，存放的是 int* 类型的数组
//	int* parr[] = { &a,&b,&c };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4]= {1,2,3,4,2,3,4,5,3,4,5,6};
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 3,4,5,6 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			// printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}