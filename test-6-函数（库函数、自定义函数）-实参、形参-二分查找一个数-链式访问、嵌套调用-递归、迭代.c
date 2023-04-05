#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P45-P59

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



//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下 - 告知
//	int add(int, int);
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}

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




//函数的递归
//程序调用自身的编程技巧称为递归。递归作为一种算法在程序设计语言中广泛应用。
//一个过程或函数在其定义或说明中有直接或间接调用自身的一种方法，
//它通常把一个大型复杂度的问题层层转化为一个与原问题相似的规模较小的问题来求解，
//递归策略只需少量的程序就可以描述出解题过程所需要的多次重复计算，大大地减少了程序的代码量。
//递归的主要思考方式在于：把大事化小

//int main()
//{
//	printf("hehe!\n");
//	main();						//自己调用自己		死递归
//	return 0;
//}


//作业		接受一个整型值（无符号），按照顺序打印他的每一位。
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}
//int main()
//{
//	unsigned int num = 0;
//	printf("请输入一串数字：");
//	scanf("%d", &num);
//	//递归，调用自己
//	print(num);					//print函数可以打印参数部分数字的每一位
//	return 0;
//}

//递归存在的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续
//每次递归调用之后，越来越接近这个限制条件

//栈区：局部变量、函数形参
//堆区：动态内存分配、malloc、calloc、realloc
//静态区：全局变量、静态变量


//写递归代码的时候：
//1.不能死递归，都有跳出条件，每次递归逼近跳出条件
//2.递归层次不能太深



//作业     编写函数，不允许创建临时变量，求字符串的长度
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
//int main()
//{
//	char arr[] = "abc";
//	//['a']['b']['c']['\0']
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}



//递归与迭代
//作业		n！
jc(int a)
{
	if (a >1)
	{
		return a * jc(a - 1);
	}
	return 1;
}
//int main()
//{
//	int i = 0;
//	printf("请输入一个数字，我来帮你求阶乘！\n");
//	scanf("%d", &i);
//	printf("%d的阶乘是：%d\n",i, jc(i));
//	return 0;
//}



//作业		第n个斐波那契数列
int count = 0;
//递归可以求解，但是效率太低
int fbnq(int a)
{
	//统计第三个斐波那契数的计算机计算次数
	if (a == 3)
		count++;
	if (a > 2)
	{
		return fbnq(a - 2) + fbnq(a - 1);
	}
	else if (a = 2)
		return 1;
	else
		return 1;
}
//int main()
//{
//	int a = 0;
//	printf("请输入一个数字，我来帮你求斐波那契数列！\n");
//	scanf("%d", &a);
//	printf("%d的斐波那契数列是：%d\n", a, fbnq(a));
//	printf("3计算了：%d次\n", count);
//	return 0;
//}

//上面写法重复计算次数太多，下面是优化之后的写法
//迭代方法
int Fib(int a)
{
	int i = 1;
	int j = 1;
	int z = 1;
	while (a > 2)
	{
		z = i + j;
		i = j;
		j = z;
		a--;
	}
	return z;
}
//int main()
//{
//	int a = 0;
//	printf("请输入一个数字，我来帮你求斐波那契数列！\n");
//	scanf("%d", &a);
//	printf("%d的斐波那契数列是：%d\n", a, Fib(a));
//	//printf("3计算了：%d次\n", count);
//	return 0;
//}


//汉诺塔
//青蛙跳台阶
//自己解决问题的能力



//作业     编程数一下1-100中所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10 == 9))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//计算1/1-1/2+1/3... ...+1/99-1/100的值，打印出结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum =sum+ 1.0 / i ;
//		else
//			sum = sum - 1.0 / i;
//	}
//	printf("%lf", sum);						//双精度浮点型输出用%lf
//	return 0;
//}

//另一种写法
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//			sum = sum + 1.0 / i*flag;
//			flag = -flag;
//	}
//	printf("%lf", sum);						//双精度浮点型输出用%lf
//	return 0;
//}


//作业		求10个整数中的最大值
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];									//这个地方如果初始化为0，当数组全部都是负数的时候，机会出问题
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("这组数组中最大值是：%d\n", max);
//	return 0;
//}


//作业		在屏幕上输出乘法口诀表

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);			//%2d		打印两位，不够空格填充
//		  //printf("%d*%d=%-2d ", j, i, i * j);			//%-2d		左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}




//作业			函数不能同时返回两个值，但是可以通过数组或者指针返回

//1.通过数组返回值
//void test1(int arr[])
//{
//	arr[0] = 10;
//	arr[1] = 20;
//}
////2.通过指针返回值
//void test2(int* p1, int* p2)
//{
//	*p1 = 10;
//	*p2 = 20;
//
//}
////3.通过全局变量
//int x = 0;
//int y = 0;
//void test3()
//{
//	x = 10;
//	y = 20;
//}
//
//int main()
//{
//	//1.通过数组返回值
//	printf("1.通过数组返回值\n");
//	int arr[10] = { 0 };
//	test1(arr);
//	int i = 0;
//	for(i=0;i<10;i++)
//			printf("%d\n", arr[i]);
//
//
//
//	//2.通过数组返回值
//	printf("2.通过指针返回值\n");
//	int a = 0;
//	int b = 0;
//	test2(&a, &b);
//	printf("a=%d	b=%d\n",a,b);
//
//
//	//3.使用全局变量		因为全局变量在所有函数中都可以使用，所以一般不建议使用
//	test3();
//	printf("x=%d	y=%d\n", x, y);
//	return 0;
//}


//作业			逗号表达式会从左到右依次计算，并且传送最右一个表达式结果
//				exec((v1,v2),(v3,v4),v5,v6);
//执行结果就是	exec(v2,v4,v5,v6);



//作业    用函数实现一个乘法口诀表,输入9的话，实现9*9乘法口诀表，输入12的话，实现12*12乘法口诀表
void print_table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", j, i, i * j);
		}
		printf("\n");
	}
}
//int main()
//{
//	int n;
//	printf("你想打印几阶的乘法口诀表？\n");
//	scanf("%d", &n);
//	//函数
//	print_table(n);
//	//函数的起名是非常关键的，名字最好能体现函数的功能
//	
//	return 0;
//}
int my_strlen1(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	int left = 0;
	int right = my_strlen1(str) - 1;
	while(left<right)
	{
		char tmp = str[left];					//右边还可以写成	*（str+left)	相当于		str(left)
		str[left] = str[right];					//*（str+left）=*（str+right）
		str[right] = tmp;						//*（str+right）=tmp
		left++;
		right--;
	}
}

//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);			//数组名arr是数组arr首元素的地址
//
//	printf("%s\n", arr);			//fedcba
//	return 0;
//}
//递归实现
void reverse_string1(char* str)
{
	char tmp = *str;
	int len = my_strlen1(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) > 1)
	{
		reverse_string1(str + 1);
	}
	*(str + len -1) = tmp;
}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string1(arr);			//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);
//	return 0;
//}



//写一个递归函数，输入一个非负整数，返回组成他的数字之和
//int DigitSum(int a)
//{
//	int b = 0;
//	if (a/10!=0)
//	{
//		b= a%10 + DigitSum(a / 10);
//	}
//	else
//	{
//		b = a;
//		return b;
//	}
//}
//太复杂了，改进
int DigitSum(int a)
{

	if (a >9)
	{
		return a % 10 + DigitSum(a / 10);
	}
	else
	{
		return a;
	}
}
//int main()
//{
//	int i = 0;
//	printf("请输入一个数字，我来告诉你他的数字之和！\n");
//	scanf("%d", &i);
//	int sum = DigitSum(i);
//	printf("你输入的%d数字之和为：%d\n", i,sum);
//	return 0;
//}


//作业    实现n的k次方

//int Pow(int n,int k)
//{
//	if (k == 0)
//		return 1;
//	if (k > 0)
//		return n * Pow(n,k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入两个数，我来帮你实现n的k次方\n");
//	scanf("%d %d", &n, &k);
//	printf("%d的%d次方是：%d\n", n, k, Pow(n, k));
//	return 0;
//}
//但是上面的代码有一点问题，k为负数就会出错。下面是改进代码

double Pow(int n, int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return n * Pow(n, k - 1);
	else
		return 1.0 / Pow(n, -k);
}

//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入两个数，我来帮你实现n的k次方\n");
//	scanf("%d %d", &n, &k);
//	printf("%d的%d次方是：%lf\n", n, k, Pow(n, k));
//	return 0;
//}