#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P29-P44
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
//int main()
//{
//	//变种1
//	for (;;)							//for循环三个部分都可以省略
//		//判断部分省略，循环恒为真，导致死循环
//	{
//		printf("hehe\n");
//	}
//	//变种2
//	
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("我爱C语言！！！\n");
//	}
//
// 
//	return 0;
//}


//省略导致问题
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("我爱C语言！！！%d%d\n",i,j);
//		}
//	}
//
//	return 0;
//}

//如果省略
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		//因为两个for循环的初始化都省略了，特别是这个for循环省略了之后，第二次循环的时候，j=3，导致这个循环不会被执行
//		{
//			printf("我爱C语言！！！%d%d\n", i, j);
//		}
//	}
//
//	return 0;
//}
//不要随便省略
//判断省略恒为真



//do...while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//测试break
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;						//打印到1-4就跳出循环了,但是循环外面的打印呵呵还是会执行
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
// printf("hehe")
//	return 0;
//}

//测试continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;						//打印到1-4后，跳过后面i++，导致程序一直在i=5里循环
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//while			for			do while

//联系

//计算n的阶乘

//int main()
//{
//	int i ;
//	int n = 0;
//	printf("请输入n的值：");
//	scanf("%d", &n);
//	int j = 1;
//	for (i = 1; i <= n; i++)
//		j = j * i;
//	printf("%d\n", j);
//	return 0;
//}


//计算1-10阶乘的和

//int main()
//{
//	int i;
//	
//	int sum = 0;
//	int j = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		j = j * i;
//		sum = sum + j;
//	}
//
//	printf("%d\n", sum);
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n
//折半查找、二分查找

//int main()
//{
//	int sz[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;			//要查找的数字
//	int dx = sizeof(sz) / sizeof(sz[0]);		//数组的元素
//	int left = 0;
//	int right = dx - 1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (sz[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (sz[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}



//将一个字符串从两头往中间生成，其余用#填充
#include<windows.h>
//int main()
//{
//	char arr1[] = "今天是2023年4月2日，今天是学习C语言的第四天，加油！！！";			//长度55
//	char arr2[] = "Today is April 2, 2023, and today is the fourth day of learning C. Go!!!";			//长度72
//	char arr3[] = "                                                                        ";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	printf("这句话是：%s\n这句话长度为：%d\n", arr2,right);
//	while (left <= right)
//	{
//		arr3[left] = arr2[left];
//		arr3[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr3);
//		Sleep(100);					//sleep单位是毫秒，1000毫秒就是一秒，相当于一秒钟打印一个。需要引用头文件windows.h
//		system("cls");					//清空屏幕
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



//输入密码，最多只能输入三次，输入正确则登陆成功，三次都输入错误则退出程序
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	char inputword[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请第%d次输入密码：\n", i+1);
//		scanf("%s", inputword);
//		//if (password == inputword)			//字符串的比较不能使用==，应该使用strcmp，需要引用string.h头文件
//		//if(strcmp(password,inputword)==0)
//		if(strcmp("123456", inputword) == 0)
//		{
//			printf("密码输入正确，登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误，");
//		}
//	}
//	if(i==3)
//	{
//		printf("登陆失败");
//	}
//
//	return 0;
//}





//写一个猜数字游戏
//1.自动产生一个1-100之间的随机数
//2.猜数字
//	a.猜对了，就恭喜你，游戏结束
//	b.猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
//3.游戏可以一直玩，除非退出游戏
#include<stdlib.h>
#include<time.h>

//void menu()
//{
//	printf("******************************************************\n");
//	printf("*****************  1. play  **************************\n");
//	printf("*****************  0. exit  **************************\n");
//	printf("******************************************************\n");
//}
//void game()
//{
//	//猜数字游戏的实现
//	//1.先生成随机数		生成随机数可以用rand函数		需要调用头文件stdlib.h
//	//rand函数返回了一个0-32767之间的数字，
//	int ret=rand()%100+1;						//%100的余数是0-99，然后+1，范围就是1-100
//	//printf("随机数是：%d\n", ret);
//	int j = 0;
//	while (1)
//	{
//		
//		int guess = 0;
//		printf("请第%d次猜数字：\n", j + 1);
//		j++;
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("你猜的太小啦，往大的猜，加油！！！\n");
//		}
//		else if (guess > ret)
//		{
//			printf("你猜的太大啦，往小的猜，加油！！！\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对啦，你好厉害呀！！！\n");
//			break;
//		}
//	}
//}

//int main()
//{
//	int input = 0;
//
//	srand((unsigned int)time(NULL));			//time函数		需要调用头文件time.h
//	do
//	{
//		
//		
//		menu();				//打印菜单
//		printf("玩猜数字游戏吗？玩的话请按1，不玩请按0。\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//printf("猜数字\n");
//			game();
//			break;
//		case 0:
//			printf("好的，正在退出游戏... ...");
//			break;
//		default:
//			printf("选择错误，请重新选择");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


//F10 - 逐过程
//F11 - 逐语句

//作业		写代码将三个数字按照从大到小输出

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d%d%d", &a, &b, &c);
//	//调整顺序
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	//输出 - 从大到小
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}




//作业		给定两个数，求最大公约数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int max = 0;
//	printf("请输入两个数字，我来告诉你两个数字的最大公约数是多少。\n");
//	scanf("%d%d", &i, &j);
//	
//	for (k = 1; k <= i && k <= j; k++)
//	{
//		if ((i % k == 0) && (j % k == 0))
//		{
//			max = k;
//		}
//	}
//	printf("%d和%d的最大公约数为%d\n", i, j, max);
//	//辗转相除法
//	int t = 0;
//	while (t = i % j)
//	{
//		i = j;
//		j = t;
//	}
//
//	printf("辗转相除法：%d和%d的最大公约数为%d\n", i, j, max);
//	return 0;
//}

//最小公倍数=i*j/最大公约数


//作业    打印1000-2000年之间的闰年
//int main()
//{
//	int i = 1000;
//	int y = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//1. 被4整除，但是不能被100整除是闰年
//		//2. 能被400整除的是闰年
//		if (y % 4 == 0)
//		{
//			if (y % 100 != 0)
//			{
//				printf("%d ", y);
//				count1++;
//			}
//		}
//		if (y % 400 == 0)
//		{
//			printf("%d ", y);
//			count1++;
//		}
//	}
//	printf("\n");
//	for(i=1000;i<=2000;i++)
//	{
//		//另一种方法
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count2++;
//		}
//	}
//	printf("\ncount1=%d\n", count1);
//	printf("\ncount2=%d\n", count2);
//	return 0;
//}



//作业      打印100~200的素数
//素数 - 质数
//只能被1或者它本身整除

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1之间的数字去试除i，看能不能整除
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//
//				break;
//			}
//		}
//		if(i==j)
//		{
//			printf("%d ", i);			//素数
//		}
//	}
//	return 0;
//}

//上一段代码优化
#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//m=a*b
//	//a和b中至少有一个数字是<=开平方m的
//	//16=2*8=4*4
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)			//sqrt - 是开平方的函数			需要调用头文件math.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;			//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}

//继续优化
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//m=a*b
//	//a和b中至少有一个数字是<=开平方m的
//	//16=2*8=4*4
//	for (i = 101; i <= 200; i+=2)				//偶数一定不是质数，直接排除开
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)			//sqrt - 是开平方的函数			需要调用头文件math.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;			//不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//
//	return 0;
//}



//goto语句
//C语言提供了可以随意滥用的goto语句和标记跳转的标志

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;				//乱跳导致死循环
//	return 0;
//}


//关机程序
//只要运行起来，电脑就在一分钟内关机，如果输入：我爱你，就取消关机！

//关机指令：shutdown -s -t 60			//shutdown 关机		-s 设置关机		-t 设置倒计时关机		60 60秒后关机
//取消关机指令：shutdown -a

//int main()
//{
//	//关机
//	//C语言提供了一个函数：system（） - 执行系统命令的
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");			//头文件stdlib.h
//again:
//	printf("请注意，你的电脑在一分钟内关机，如果输入：我爱你，就取消关机\n");
//	scanf("%s", input);				//数组名本来就是个地址，所以这里不需要取地址
//	if (strcmp(input, "我爱你")==0)
//	{
//		system("shutdown -a");
//		printf("指令输入成功，已取消关机");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//goto语句在深度嵌套函数中好用
//goto语句只能在一个函数范围内跳，不能跨函数跳
//void test()
//{
//flag:
//	printf("test\h");
//}
//
//int main()
//{
//	goto flag;				goto函数不能跨函数使用
//	return 0;
//}


