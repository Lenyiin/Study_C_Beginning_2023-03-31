#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>

//P64-P66

//定义常量
#define H  5				//棋盘横坐标
#define Z  5			//棋盘纵坐标



//菜单
//void menu()
//{
//	printf("**************************************************\n");
//	printf("**********                              **********\n");
//	printf("**********       欢迎来到下棋游戏       **********\n");
//	printf("**********                              **********\n");
//	printf("**********         2、五子棋游戏        **********\n");
//	printf("**********                              **********\n");
//	printf("**********         1、三子棋游戏        **********\n");
//	printf("**********                              **********\n");
//	printf("**********         0、退出游戏          **********\n");
//	printf("**********                              **********\n");
//	printf("**************************************************\n");
//}

//初始化游戏数据 - 用空格存储
//void InitBoard(char board[H][Z], int h, int z)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < h; i++)
//	{
//		for (j = 0; j < z; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//	printf("游戏初始化成功！\n\n");
//}



//打印棋盘
//void DisplayBoard(char board[H][Z], int h, int z)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < h; i++)
//	{
//		for (j = 0; j < z; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < z - 1)
//			{
//				printf("|");
//			}
//		}
//		printf("\n");
//		if (i < h - 1)
//		{
//			for(j=0;j<z;j++)
//			{
//				printf("---");
//				if (j < z - 1)
//				{
//					printf("|");
//				}
//			}
//
//		}
//		printf("\n");
//	}
//}

//玩家下棋
//void PlayerMove(char board[H][Z],int h,int z)
//{
//	printf("玩家下棋阶段，请玩家下棋，并按 enter 键确认！\n\n");
//	while(1)
//	{
//		int i = 0;
//		int j = 0;
//		scanf("%d %d", &i, &j);
//		if (i <= H && i > 0 && j > 0 && j <= Z)
//		{
//			if (board[i - 1][j - 1] == ' ')
//			{
//				board[i - 1][j - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("你选择的位置已经有棋子，请思考后重新输入！\n\n");
//			}
//		}
//		else
//			printf("你选择的位置有误，不在棋盘上，请重新输入！\n\n");
//	}
//}

//电脑下棋
//void ComputerMove(char board[H][Z],int h,int z)
//{
//	printf("对手下棋阶段，对手正在下棋... ...\n\n");
//
//	while (1)
//	{
//		int i = rand()%h;
//		int j = rand()%z;
//
//		//判断占用
//		if (board[i][j] == ' ')
//		{
//			board[i][j] = '#';
//			break;
//		}
//	}
//}

//判断棋盘有没有满
//int IsFull(char board[H][Z], int h, int z)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < h; i++)
//	{
//		for (j = 0; j < z; j++)
//		{
//			if (board[i][j] == ' ')
//				return 0;
//		}
//	}
//	return 1;
//}

//三子棋--结果判断
//char IsWin(char board[H][Z], int h, int z)
//{
//	//玩家赢了 - *
//	//电脑赢了 - #
//	//平局     - Q
//	//游戏继续 - C
//	int i = 0;
//	int j = 0;
//	//for (i = 0; i < h - 2; i++)
//	//{
//	//	for (j = 0; j < z - 2; j++)
//	//	{
//	//		//判断行
//	//		if (board[i][j] == board[i][j + 1] && board[i][j + 2] == board[i][j + 1] && board[i][j] != ' ')
//	//			return board[i][j];
//	//		//判断列
//	//		if (board[i][j] == board[i+1][j] && board[i+1][j] == board[i+2][j] && board[i][j] != ' ')
//	//			return board[i][j];
//	//		//判断对角线	正
//	//		if (board[i][j] == board[i + 1][j + 1] && board[i + 2][j + 2] == board[i + 1][j + 1] && board[i][j] != ' ')
//	//			return board[i][j];
//	//	}
//	//}
//	
//
//	//判断行
//	for (i = 0; i < h ; i++)
//	{
//		for (j = 0; j < z - 2; j++)
//		{
//			if (board[i][j] == board[i][j + 1] && board[i][j + 2] == board[i][j + 1] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//判断列
//	for (i = 0; i < h - 2; i++)
//	{
//		for (j = 0; j < z; j++)
//		{
//			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//判断对角线	正
//	for (i = 0; i < h - 2; i++)
//	{
//		for (j = 0; j < z - 2; j++)
//		{
//			if (board[i][j] == board[i + 1][j + 1] && board[i + 2][j + 2] == board[i + 1][j + 1] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//判断对角线	反
//	for (i = 0; i < h - 2; i++)
//	{
//		for (j = 2; j < z; j++)
//		{
//			if (board[i][j] == board[i+1][j-1] && board[i][j] == board[i+2][j-2] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//平局
//	//如果棋盘满了，返回1，没满返回0；
//	int tmp = IsFull(board, h, z);
//	if (tmp == 1)
//		return 'Q';
//	else
//		return 'C';
//}
//
////五子棋--结果判断
//char IsWin_5(char board[H][Z], int h, int z)
//{
//	//玩家赢了 - *
//	//电脑赢了 - #
//	//平局     - Q
//	//游戏继续 - C
//	int i = 0;
//	int j = 0;
//
//	//判断行
//	for (i = 0; i < h; i++)
//	{
//		for (j = 0; j < z - 4; j++)
//		{
//			if (board[i][j] == board[i][j + 1] && board[i][j + 2] == board[i][j + 1] && board[i][j + 2] == board[i][j + 3] && board[i][j + 2] == board[i][j + 4] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//判断列
//	for (i = 0; i < h - 4; i++)
//	{
//		for (j = 0; j < z; j++)
//		{
//			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i + 3][j] == board[i + 2][j] && board[i + 4][j] == board[i + 2][j] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//判断对角线	正
//	for (i = 0; i < h - 4; i++)
//	{
//		for (j = 0; j < z - 4; j++)
//		{
//			if (board[i][j] == board[i + 1][j + 1] && board[i + 2][j + 2] == board[i + 1][j + 1] && board[i + 3][j + 3] == board[i + 1][j + 1] && board[i + 4][j + 4] == board[i + 1][j + 1] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//判断对角线	反
//	for (i = 0; i < h - 4; i++)
//	{
//		for (j = 4; j < z; j++)
//		{
//			if (board[i][j] == board[i + 1][j - 1] && board[i][j] == board[i + 2][j - 2] && board[i][j] == board[i + 3][j - 3] && board[i][j] == board[i + 4][j - 4] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//平局
//	//如果棋盘满了，返回1，没满返回0；
//	int tmp = IsFull(board, h, z);
//	if (tmp == 1)
//		return 'Q';
//	else
//		return 'C';
//}
//
//
////三子棋游戏
//void game_five_in_a_row()
//{
//	//创建数组存储游戏数据
//	char board[H][Z];
//	//初始化游戏数据
//	InitBoard(board, H, Z);
//	//打印棋盘
//	DisplayBoard(board, H, Z);
//
//	//游戏判定
//	char ret = 0;		//接收游戏状态
//	while (1)
//	{
//		//玩家走
//		PlayerMove(board, H, Z);
//		//打印棋盘
//		DisplayBoard(board, H, Z);
//		//判断结果
//		ret = IsWin(board, H, Z);
//		if (ret != 'C')
//			break;
//
//		//电脑走
//		ComputerMove(board, H, Z);
//		//打印棋盘
//		DisplayBoard(board, H, Z);
//		//判断结果
//		ret = IsWin(board, H, Z);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//	{
//		printf("\n恭喜玩家获胜！！！\n");
//
//	}
//	else if (ret == '#')
//	{
//		printf("\n恭喜电脑获胜！！！\n");
//	}
//	else
//	{
//		printf("\n这局是平局！！！\n");
//	}
//	printf("\n获胜棋盘为：\n");
//	DisplayBoard(board, H, Z);
//}
////五子棋游戏
//void game_five_in_a_row_5()
//{
//	//创建数组存储游戏数据
//	char board[H][Z];
//	//初始化游戏数据
//	InitBoard(board, H, Z);
//	//打印棋盘
//	DisplayBoard(board, H, Z);
//
//	//游戏判定
//	char ret = 0;		//接收游戏状态
//	while (1)
//	{
//		//玩家走
//		PlayerMove(board, H, Z);
//		//打印棋盘
//		DisplayBoard(board, H, Z);
//		//判断结果
//		ret = IsWin_5(board, H, Z);
//		if (ret != 'C')
//			break;
//
//		//电脑走
//		ComputerMove(board, H, Z);
//		//打印棋盘
//		DisplayBoard(board, H, Z);
//		//判断结果
//		ret = IsWin_5(board, H, Z);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//	{
//		printf("\n恭喜玩家获胜！！！\n");
//
//	}
//	else if (ret == '#')
//	{
//		printf("\n恭喜电脑获胜！！！\n");
//	}
//	else
//	{
//		printf("\n这局是平局！！！\n");
//	}
//	printf("\n获胜棋盘为：\n");
//	DisplayBoard(board, H, Z);
//}

//三子棋or五子棋
//int in_a_row()
//{
//	while(1)
//	{
//		int a = 0;
//		printf("请问你想玩三子棋还是想玩五子棋？\n");
//		printf("按键 3 或者 5 进行选择：\n");
//		scanf("%d", &a);
//		if (a == 3 || a == 5)
//			return a;
//		else
//			printf("你的输入有误，请重写输入！\n");
//	}
//}

//主程序 - 游戏启动
//int main()
//{
//	//进入游戏
//	int input = 0;
//	//设计电脑下棋随机值
//	srand((unsigned int)time(NULL));
//	//int g=in_a_row();
//	do
//	{
//		//打印菜单
//		menu();
//		printf("\n请输入游戏指令，按 enter 确认！\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 2:
//			printf("成功登陆游戏！\n");
//			//五子棋游戏
//			game_five_in_a_row_5();
//			break;
//		case 1:
//			printf("成功登陆游戏！\n");
//			//三子棋游戏
//			game_five_in_a_row();
//			break;
//		case 0:
//			printf("正在退出游戏，请稍后... ...\n");
//			break;
//		default:
//			printf("您输入的指令有误，请重新输入：\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
