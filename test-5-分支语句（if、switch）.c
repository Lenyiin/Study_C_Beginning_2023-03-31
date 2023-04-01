#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//分支和循环语句
//C语言是结构化的程序设计语言
//顺序结构
//选择结构
//循环结构


//分支语句		if		switch
//循环语句		while	for		do while
//goto

//C语言中，由一个分号隔开的语句就是一条语句。

//C语言是如何表示真和假的呢？		非0就是真，0就是假

//int main()
//{
//	printf("请输入你的年龄：");
//	int age = 0;
//	scanf("%d",&age);
//	printf("age=%d\n",age);
//	if (age > 65)
//		printf("你可以退休了\n");
//	else if (age >= 18)
//		printf("你已经成年了\n");
//	else
//		printf("你还未成年\n");
//
//	//错误示范
//	if (age < 18)
//		printf("错误示范：青年");
//	else if (18 <= age < 26)			//这种写法就会产生错误  因为从前往后运算，18<=age结果为1真，然后1<26，也为1真
//		printf("错误示范：成年\n");
//	else
//		printf("错误示范：老年\n");
//
//	//错误示范的改进
//	if (age < 18)
//		printf("正确示范：青年");
//	else if (age >= 18 && age < 26)			//需要用&&与运算符
//		printf("正确示范：成年");
//	else
//		printf("正确示范：老年");
//
//	return 0;
//}
//代码风格
//高质量的C++编程


//作业		判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	printf("请输入一个数：");
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("你输入的是奇数");
//	else
//		printf("你输入的是偶数");
//
//	return 0;
//}

//作业		输出1-100之间的奇数
//int main()
//{
//	int a;
//	for (a=0;a < 100;a++)
//	{
//		if (a % 2 == 1)
//			printf("%d,", a);
//		
//	}
//
//
//	return 0;
//}


//switch语句

//int main()
//{
//	int day = 0;
//
//	scanf("%d", &day);
//	switch (day)					//必须是整型
//	{
//	case 1:							//必须是整型	字符也行，字符是ASCⅡ值，也是整型
//		printf("星期一\n");
//	case 2:
//		printf("星期二\n");
//	case 3:
//		printf("星期三\n");
//	case 4:
//		printf("星期四\n");
//	case 5:
//		printf("星期五\n");
//	case 6:
//		printf("星期六\n");
//	case 7:
//		printf("星期日\n");			//case几，就从哪个case进去，相当于入口，但是如果不写break，他就会一直执行到最后
//	}
//	//改进
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;						//case决定入口，break决定出口
//	}
//
//	//星期一-星期五 工作日，星期六-星期日 休息日
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:							//如果输入值超出了case匹配范围，就进入了这个默认范围
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}





//循环语句

//while循环
//打印1-10
//int main() 
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	int j = 0;
//	while (j <= 10)
//	{
//		if (j == 5)
//			break;
//		//在while循环中，break用于永久的终止循环
//		printf("%d\n", j);
//		j++;
//	}
//	int k = 0;
//	while (k <= 10)
//	{
//		if (k == 5)
//			continue;
//		//在while循环中，continue跳过本次循环continue后面的代码，直接去判断部分，看是否去进行下次循环
//		printf("%d\n", k);
//		k++;
//	}
//	return 0;
//}

//EOF - end of file - 文件结束标志

//int main()
//{
//	int ch = getchar();			//获取一个字符
//	printf("%c\n", ch);
//	putchar(ch);				//输出一个字符
//	int sh = 0;
//	while ((sh = getchar()) != EOF)				//反复读取作用
//	{
//		putchar(sh);
//		
//	}
//	//ctrl+z就可以停止了
//	return 0;
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);				//password是个数组，数组的数组名本来就是个地址，所以不需要取地址
//	printf("请确认密码（Y/N）：");		//输入密码：aaa111
//	//int ch = getchar();				//还没输入就直接失败了
//
//	//清理缓冲区
//	//getchar();							//处理‘\n’     但是一旦密码里含有空格之类的，比如：aaa 111	就还是会直接确认失败
//	//因此需要一直清理缓冲区，直至缓冲区里没有信息
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')				//清理缓冲区的内容
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;							//初始化很重要，
//	while (i <= 10)						//判断部分
//	{
//		printf("%d\n", i);
//		i++;							//循环调整部分
//	}
//	return 0;
//}




//for 循环

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;					//循环终止
//
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;					//跳过5，而不会像while循环那样死循环
//
//		printf("%d\n", i);
//		//i = 6;						for循环不能在循环内部调整循环变量，防止循环失去控制
//	}
//	return 0;
//}


//建议for语句的循环控制变量的取值采用“前闭后开区间”写法

//int main()
//{
//	int sz[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)			//建议前闭后开区间		for (i = 0; i <= 9; i++)可以但是不推荐
//	{
//		printf("%d\n", sz[i]);
//	}
//	return 0;
//}



//for循环变种
int main()
{
	for (;;)							//for循环三个部分都可以省略
		//判断部分省略，循环恒为真，导致死循环
	{
		printf("hehe\n");
	}
	return 0;
}