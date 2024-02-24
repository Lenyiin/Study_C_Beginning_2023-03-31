#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P15-P23

//选择语句

//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？（选择1 or 0）：");
//	scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("坚持，你会有好的offer\n");
//	}
//	else
//	{
//		printf("放弃吧，回家种地去\n");
//	}
//
//	return 0;
//}

// 20000行的代码积累
//int main()
//{
//	int line = 0;
//	printf("刷视频学习\n");
//
//	while (line < 20000)
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//
//	if (line >= 20000)
//	{
//		printf("好 offer\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int input = 0;		//输入的值
//	printf("加入腾讯：>");
//	printf("那要好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("回家种地\n");
//
//	return 0;
//}



//循环语句
//练习 - 30000代码 - 找一个不错的工作


//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}



//函数

//创建函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("输入两个操作数：\n");
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("传统方法两数之和：%d\n",sum);
//
//	//函数的解决方式
//	sum = Add(num1, num2);
//	printf("函数方法两数之和：%d\n", sum);
//	return 0;
//}


//数组			一组相同类型的元素的集合

//int main()
//{
//	int sz[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char zf[5] = { 'a','b','c' };					//不完全初始化，剩余的默认为0；
//	//数组用下标访问
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", sz[i]);
//		i++;
//	}
//
//
//	return 0;
//}



//操作符
//算数操作符：+-*/%
//移位操作符<<   >>
//int main()
//
//{
//	int a = 9 / 2;						//结果是4
//	printf("%d\n", a);
//	float b = 9 / 2;					//结果是4.000000			除号两端都是整数，执行的是整数的除法
//	printf("%f\n", b);
//	float c = 9 / 2.0;					//结果是4.500000			除号两端有一个是小数，执行小数除法
//	printf("%f\n", c);
//	printf("%.1f\n", c);				//结果是4.5
//	int d = 9 % 2;						//取模%
//	printf("%d\n", d);
//	return 0;
//}



//移位

//int main()
//{
//	int a = 2;
//	int b = a << 1;					//<<左移操作符
//	//整型是四个字节长度，所以a=2在电脑里面存的就是		00000000 00000000 00000000 00000010
//	//00000000 00000000 00000000 00000010 向左移动移位就是	0000000 00000000 00000000 000000100			结果就是4
//	printf("%d\n", b);
//	return 0;
//}



//位操作符：&按位与		|按位或		^按位异或
//赋值操作符 =	 +=	 -=  *=  /=  &=  ^=  |=  >>=  <<= 
//int main()
//{
//	int a = 2;
//	int b = 0;
//	a = 6;			//=等号赋值
//	b += 5;			//b=b+5
//	b %= 3;			//b=b%3
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}


//单目操作符
//a+b				+	有两个操作数，双目操作符
//单目操作符有		！	逻辑反操作
//单目操作符有		-	负值	+	正值
//单目操作符有		&	取地址
//单目操作符有		sizeof		操作数的类型长度（以字节为单位）
//单目操作符有		~	对一个数的二进制按位取反
//单目操作符有		--	前置、后置--
//单目操作符有		++	前置、后置++
//单目操作符有		*	间接访问操作符（解引用操作符）
//单目操作符有		（类型）	强制类型转换

//int main()
//{
//	//0 表示假，非0就是真
//	int a = 0;
//	printf("%d\n", !a);			//如果a是假的，可以变为真；是真的，可以变为假。
//
//	//！的应用场景
//	if (a)
//	{
//		//如果a为真，要做的事情
//	}
//	if (!a)
//	{
//		//如果a为假，要做的事情
//	}
//
//	return 0;
//}



//int main()
//{
//	//sizeof是个操作符
//	//计算类型或者变量的大小
//	int a = 4;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(a));			//大小都一样
//	printf("%d\n", sizeof a);			
//	//sizeof后面的（）可以省略，说明sizeof是个操作符不是个函数		函数的括号不能省略
//	//int的括号不能省略
//	int sz[10] = { 0 };
//	printf("%d\n", sizeof(sz));			//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(sz[0]));		//计算的是数组的第一个元素的大小，单位是字节
//	int sz1 = sizeof(sz) / sizeof(sz[0]);		//可以通过这种方式求数组元素个数
//	printf("%d\n", sz1);
//	return 0;
//}


//~按位取反

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);			//对a按位（二进制）取反，和 ！ 不一样		把所有二进制位中的数字，1变成0，0变成1
//	//0的二进制是00000000 00000000 00000000 00000000 取反后 11111111 11111111 11111111 11111111
//	//整数在内存中存储的是补码
//	//一个整数的二进制表示有3种：原码、反码、补码
//	// 负数的计算方式
//	//-1的原码是 10000000 00000000 00000000 00000001（原码）   其中第一位是符号位
//	//-1的反码是 11111111 11111111 11111111 11111110（反码）   其中符号位不变，其他位按位取反
//	//-1的补码是 11111111 11111111 11111111 11111111（补码）   在反码基础上+1，在内存中存储的都是补码
//	//正整数   原码、反码、补码相同
//	//~的按位取反，符号位也取反
//	return 0;
//}


// ++		--
//int main()
//{
//	int a = 10;
//	int b = ++a;				//前置++		先++后使用			先10+1=11，后赋值给b
//	printf("%d\n", b);
//	printf("%d\n", a);			//结果就是11 11
//	int c = 10;
//	int d = c++;				//后置++		先使用后++			先把10赋值给d，再来10+1=11
//	printf("%d\n", d);
//	printf("%d\n", c);			//结果就是10 11
//	return 0;
//}



//强制类型转换
//int main()
//{
//	int a = (int)3.14;					//强制类型转换
//	printf("%d\n", a);
//	return 0;
//}



//关系操作符
//< > >=  <=	!=用于测试“不相等”		==用于测试“相等”
//逻辑与&&		||逻辑或

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int d = 0;
//	int c = a && b;				//两个同时为真，才为真
//	int e = a && d;				//只要有一个为假，就是假的
//	int f = a ||d;				//只要有一个为真，就是真的
//	int h = 0;
//	int g = h || d;				//两个同时为假，才是假的
//	printf("%d\n", c);
//	printf("%d\n", e);
//	printf("%d\n", f);
//	printf("%d\n", g);
//	if (a && b)
//	{
//
//	}
//
//	return 0;
//}




//条件操作符（三目操作符）
//exp1?exp2:exp3
//如果exp1成立，exp2计算，整个表达式的结构是：exp2的结果
//如果exp1不成立，exp2不计算，exp3计算，整个表达式的结构是：exp3的结果

//int main()
//{
//	//之前方法
//	int a = 0;
//	int b = 3;
//	int max1 = 0;
//	if (a > b)
//		max1 = a;
//	else
//		max1 = b;
//	printf("max1=%d\n", max1);
//	//三木操作符的办法
//	int max2 = a > b ? a : b;
//	printf("max2=%d\n", max2);
//	return 0;
//}


//逗号表达式：逗号隔开的一段表达式

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	int d = (a = b + 2, c = a - 1, b = c + 2);		//这个表达式会从左往右计算，计算结果为最后一个表达式
//	printf("d=%d\n", d);							//d=6
//	return 0;
//}


//下标引用操作符 []			函数调用操作符 ()		结构成员操作符 ->     .

//int main()
//{
//	int sz[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sz[5]);					//[5] 调用下标5的操作符
//	printf("%d\n", 100);					//调用函数的时候，函数后面的（）就是函数调用操作符
//	return 0;
//}



//常见关键字
//C语言提供的关键字
//1.C语言提供的，不能自己创建关键字
//2.关键字不能做变量名
//auto		是自动的 - 每个局部变量都是auto修饰的
//break		case		char		const		continue		default			do		double		else		enum枚举
//extern	用来声明外部符号的
//float		for			goto		if		int		long		register寄存器		short	signed有符号的	unsigned无符号的
//sizeof	static静态的		struct		switch		typedef		union联合体（共用体）		void无、空		volatile	while
//define	include		不是关键字，是预处理指令



//int main()
//{
//	{
//		int a = 10;		//自动创建，自动销毁的 - 自动变量
//		//auto 省略掉了
//		//auto 新的c语言语法中也有其他的用法 - 暂不考虑
//	}
//	return 0;
//}

//int main()
//{
//	//大量、频繁被使用的数据，想放在寄存器中，提升效率
//	//现在编译器非常聪明，会自己把频繁使用的放进去，所以register意义不是特别大
//	register int a = 100;		//建议a的值存放在寄存器中，
//	return 0;
//}



//typedef类型定义   类型重定义

typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;				//重定义后，这两条实现一样的效果
//	return 0;
//}




//static		静态的
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
//void test1(){
//	int a = 1;							//a是局部变量，进入这个函数创建，出这个函数就会被销毁
//	a++;
//	printf("a=%d ", a);}
//
//void test2(){
//	//static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型）
//	static int b = 1;					//创建之后，不会被销毁，生命周期边长
//	b++;
//	printf("b=%d ", b);}
//
//extern声明外部符号的
//extern int g_val;
//int main()
//{
//	int i = 0;
//	while (i < 10){
//		test1();
//		i++;}
//	printf("\n");
//	i = 0;
//	while (i < 10){
//		test2();
//		i++;}
//	printf("\n");
//	return 0;
//}

//栈区：局部变量、函数的参数
//堆区：动态内存分配的
//静态区：全局变量，static修饰的静态变量

//全局变量在整个工程中都可以使用
//static修饰全局变量，使得全局变量只能在自己的所在的源文件（.c）内可以
//全局变量，在其他源文件内部可以被使用，是因为全局变量具有外部链接属性
//但是被static修饰之后，就变成了内部链接属性，其他源文件就不能链接到这个静态的全局变量了


//extern int Add1(int, int);			//函数也是全局的，可以整个工程使用
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add1(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//static修饰函数，使得函数只能在自己的所在的源文件（.c）内可以
//本质上：static是将函数的外部链接属性变成了内部链接属性！（和static修饰全局变量一样）



