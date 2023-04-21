#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//P67-P70

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10		//定义一把游戏里面有几个雷

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);

//排查雷
void FindMine(char mine[ROWS][ROWS], char show[ROWS][COLS], int row, int col);

//统计排雷点附近有几个雷
int get_mine_count(char mine[ROWS][COLS], int i, int j);


//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------------   扫雷游戏   ----------------\n");
	//打印列号
	printf("    ");
	for (i = 1; i <= col; i++)
	{
		printf("%2d ", i);
	}
	printf("\n");
	printf("    ");
	for (i = 1; i <= col; i++)
	{
		printf("---");
	}
	printf("\n");

	//打印棋盘
	for (i = 1; i <= row; i++)
	{
		//打印行号
		printf("%2d |", i);

		//打印棋盘
		for (j = 1; j <= col; j++)
		{
			printf("%2c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------------   扫雷游戏   ----------------\n");
}

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置 10 个雷
	int count = EASY_COUNT;
	while (count)
	{
		//生成随机的下标
		int i = rand() % row + 1;
		int j = rand() % row + 1;
		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count--;
		}
	}
	printf("\n雷已布置完成！\n\n");
}

//排查雷
void FindMine(char mine[ROWS][ROWS], char show[ROWS][COLS], int row, int col)
{
	//1、输入排查的坐标
	//2、检查坐标处是不是雷
	//	（1） 是雷		- 很遗憾炸死了
	//	（2） 不是雷	- 统计坐标周围有几类 - 存储排查雷的信息到 show 数组，游戏继续

	int i = 0;
	int j = 0;
	int win = 0;
	printf("请按照坐标输入想要排查雷的坐标，按 enter 键确认！\n");
	while (win < row * col - EASY_COUNT)
	{
		scanf("%d %d", &i, &j);			//x、y坐标为 1-9

		//判断坐标的合法性
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (mine[i][j] == '1')
			{
				printf("很遗憾，你踩到雷被炸死了，本局游戏结束，欢迎下次继续！\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//不是雷的情况下，统计 [i,j] 坐标周围有几个雷
				int count = get_mine_count(mine, i, j);
				show[i][j] = count + '0';			//count 是整型变量， show 是字符型数组，因此需要 +‘0’ 转换一下
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("你输入的坐标不在棋盘上，请仔细斟酌，重新输入：\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("\n恭喜你，排雷成功，本局游戏结束！\n\n");
		DisplayBoard(mine, ROW, COL);
	}
}

//统计排雷点附近有几个雷
//static int get_mine_count(char mine[ROWS][COLS], int i, int j)		//如果加static 这个函数就只能在这个.C文件下使用
//static三个作用
//1、修饰局部变量
//2、修饰全局变量
//3、修饰函数
int get_mine_count(char mine[ROWS][COLS], int i, int j)
{
	return mine[i - 1][j] + mine[i - 1][j - 1] + mine[i][j - 1] + mine[i + 1][j - 1]
		+ mine[i + 1][j] + mine[i + 1][j + 1] + mine[i][j + 1] + mine[i - 1][j + 1] - 8 * '0';
}


//test.c	扫雷游戏的测试
//game.c	游戏的实现
//game.h	游戏的函数的声明

//游戏菜单
void menu()
{
	printf("**********************************************\n");
	printf("***********                       ************\n");
	printf("***********      1、开始游戏      ************\n");
	printf("***********                       ************\n");
	printf("***********      0、退出游戏      ************\n");
	printf("***********                       ************\n");
	printf("**********************************************\n\n");
}

//游戏实现
void game_mine_sweeping()
{
	//扫雷游戏：需要先布置雷，再排查雷
	//写两个数组，一个数组存放布置雷信息，一个数组存放排查雷信息
	//因为棋盘的四个边没办法计算周围八个格子，因此需要放大棋盘
	//如果想要实现9*9的棋盘，数组的大小设计成11*11比较好

	//棋盘创建
	char mine[ROWS][COLS] = { 0 };			//存放布置好的雷的信息		char mine[11][11];这种直接限定代码，后期不方便修改代码
	char show[ROWS][COLS] = { 0 };			//存放排查出的雷的信息		char show[11][11];

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');				//为了实现相同函数初始化不同类型数组，直接将初始化内容传过去比较省事
	InitBoard(show, ROWS, COLS, '*');
	printf("初始化成功！\n");

	//打印一下棋盘
	//DisplayBoard(mine, ROW, COL);			//一般雷的信息不显示，测试用
	//DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);			//一般雷的信息不显示，测试用
	DisplayBoard(show, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);
}

//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do							//do...while循环可以先开始再判断，可以作为一直开始的选项
//	{
//		//游戏菜单
//		menu();					//首先开始游戏菜单
//		//选择是否游戏
//		printf("请选择，并按 enter 键确认！\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("扫雷游戏正在启动，请稍后... ...\n\n");
//			game_mine_sweeping();
//			break;
//		case 0:
//			printf("正在退出游戏，请稍后... ...\n");
//			break;
//		default:
//			printf("你的输入有误，请确认后重新输入：\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//可以优化的
//1、如果不是雷，周围没有雷 - 展开一片
//2、标记雷