#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P87-P87


//结构体
//1.结构体类型的声明
//2.结构体初始化
//3.结构体成员的访问
//4.结构体传参

//结构体：结构是一些值的集合，这些值称为成员变量。结构的每个成员可以是不同类型的变量
//数组：一组相同类型的元素

////创建一个类型
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu				//struct 结构体关键字		Stu 结构体名字
//{
//	//成员变量
//	struct B sb;		//结构体的成员可以是另外的结构体
//	char name[20];		//名字
//	int age;			//年龄
//	char id[20];		//学号
//}s1,s2;					//s1和s2也是结构体变量
////s1，s2是使用 struct Stu 结构体类型创建的两个变量  全局结构体变量
//
//int main()
//{
//	//创建一个对象
//	struct Stu s = { {'w',20,3.14},"张三",30,"20230423" };	//创建一个对象，名字是s，并进行初始化
//	//s是局部变量
//
//	//结构体访问
//	//.  ->
//	printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);
//
//	struct Stu* ps = &s;			//结构类型指针
//	printf("%c\n", (*ps).sb.c);		//.访问的方式
//	printf("%c\n", ps->sb.c);		//->访问的方式		sb不是指针，所以不能用->，只能用.
//	return 0;
//}
////结构体成员类型：结构体的成员可以是标量、数组、指针、甚至是其他结构体


////结构体传参
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	struct Stu s1 = { {'w',20,3.14},"张三",30,"20230423" };
//	print1(s1);		//传值调用			空间和时间都会产生巨大浪费
//	print2(&s1);	//传址调用
//	//如果选择一种，优选择2。
//	return 0;
//}
//函数传参的时候，参数是需要压栈的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降


//栈：是一种数据结构，先进的后出，后进的先出。
//int Add2(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add2(a, b);				//从右向左传参，先传b，再传a
//	printf("%d\n", c);
//	return 0;
//}
//每个函数调用，都会在内存的栈区上开辟一块空间
//函数栈帧的创建和销毁

//int count_num_of_1_1(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	return count;
//}
//
//int count_num_of_1_2(int num)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_num_of_1_3(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	// int n = count_num_of_1_1(num);
//	// int n = count_num_of_1_2(num);
//	int n = count_num_of_1_3(num);
//	printf("%d\n", n);
//
//	return 0;
//}

//int count_diff_bit_1(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if(((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//
//	return count;
//}
//
//int count_diff_bit_2(int m, int n)
//{
//	int count = 0;
//	// ^ 异或操作符
//	// 相同为0，相异为1
//	int ret = m ^ n;
//	// 统计一下ret中二进制位有几个1
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	// int ret = count_diff_bit_1(m, n);
//	int ret = count_diff_bit_2(m, n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//
//	// 获取奇数位的数字
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	// 获取偶数位的数字
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}



//// 全局变量，静态变量都是放在静态区
//// 全局变量，静态变量不初始化的时候，默认会被初始化为0
//// 局部变量，是放在栈区，不初始化，默认值是随机值
//int i;						// 没有初始化，默认值是0
//int main()
//{
//	i--;					// -1
//	// sizeof 这个操作符计算返回的结果是 size_t 类型的，是无符号整型的。
//	// 有符号和无符号比较的时候，会发生算数转换，有符号会转换成无符号。		-1 会转换成一个非常大的数
//	if(i>sizeof(i))			// -1 > 4
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//int is_leap_year(int y)
//{
//	return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
//}

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if((m == 2) && (is_leap_year(y) == 1))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//
//	return 0;
//}