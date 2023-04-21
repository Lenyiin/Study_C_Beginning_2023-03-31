#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//P67-P70

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10		//����һ����Ϸ�����м�����

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char mine[ROWS][COLS], int row, int col);

//�Ų���
void FindMine(char mine[ROWS][ROWS], char show[ROWS][COLS], int row, int col);

//ͳ�����׵㸽���м�����
int get_mine_count(char mine[ROWS][COLS], int i, int j);


//��ʼ������
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

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------------   ɨ����Ϸ   ----------------\n");
	//��ӡ�к�
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

	//��ӡ����
	for (i = 1; i <= row; i++)
	{
		//��ӡ�к�
		printf("%2d |", i);

		//��ӡ����
		for (j = 1; j <= col; j++)
		{
			printf("%2c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------------   ɨ����Ϸ   ----------------\n");
}

//������
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//���� 10 ����
	int count = EASY_COUNT;
	while (count)
	{
		//����������±�
		int i = rand() % row + 1;
		int j = rand() % row + 1;
		if (mine[i][j] == '0')
		{
			mine[i][j] = '1';
			count--;
		}
	}
	printf("\n���Ѳ�����ɣ�\n\n");
}

//�Ų���
void FindMine(char mine[ROWS][ROWS], char show[ROWS][COLS], int row, int col)
{
	//1�������Ų������
	//2��������괦�ǲ�����
	//	��1�� ����		- ���ź�ը����
	//	��2�� ������	- ͳ��������Χ�м��� - �洢�Ų��׵���Ϣ�� show ���飬��Ϸ����

	int i = 0;
	int j = 0;
	int win = 0;
	printf("�밴������������Ҫ�Ų��׵����꣬�� enter ��ȷ�ϣ�\n");
	while (win < row * col - EASY_COUNT)
	{
		scanf("%d %d", &i, &j);			//x��y����Ϊ 1-9

		//�ж�����ĺϷ���
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			if (mine[i][j] == '1')
			{
				printf("���ź�����ȵ��ױ�ը���ˣ�������Ϸ��������ӭ�´μ�����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//�����׵�����£�ͳ�� [i,j] ������Χ�м�����
				int count = get_mine_count(mine, i, j);
				show[i][j] = count + '0';			//count �����ͱ����� show ���ַ������飬�����Ҫ +��0�� ת��һ��
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("����������겻�������ϣ�����ϸ���ã��������룺\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("\n��ϲ�㣬���׳ɹ���������Ϸ������\n\n");
		DisplayBoard(mine, ROW, COL);
	}
}

//ͳ�����׵㸽���м�����
//static int get_mine_count(char mine[ROWS][COLS], int i, int j)		//�����static ���������ֻ�������.C�ļ���ʹ��
//static��������
//1�����ξֲ�����
//2������ȫ�ֱ���
//3�����κ���
int get_mine_count(char mine[ROWS][COLS], int i, int j)
{
	return mine[i - 1][j] + mine[i - 1][j - 1] + mine[i][j - 1] + mine[i + 1][j - 1]
		+ mine[i + 1][j] + mine[i + 1][j + 1] + mine[i][j + 1] + mine[i - 1][j + 1] - 8 * '0';
}


//test.c	ɨ����Ϸ�Ĳ���
//game.c	��Ϸ��ʵ��
//game.h	��Ϸ�ĺ���������

//��Ϸ�˵�
void menu()
{
	printf("**********************************************\n");
	printf("***********                       ************\n");
	printf("***********      1����ʼ��Ϸ      ************\n");
	printf("***********                       ************\n");
	printf("***********      0���˳���Ϸ      ************\n");
	printf("***********                       ************\n");
	printf("**********************************************\n\n");
}

//��Ϸʵ��
void game_mine_sweeping()
{
	//ɨ����Ϸ����Ҫ�Ȳ����ף����Ų���
	//д�������飬һ�������Ų�������Ϣ��һ���������Ų�����Ϣ
	//��Ϊ���̵��ĸ���û�취������Χ�˸����ӣ������Ҫ�Ŵ�����
	//�����Ҫʵ��9*9�����̣�����Ĵ�С��Ƴ�11*11�ȽϺ�

	//���̴���
	char mine[ROWS][COLS] = { 0 };			//��Ų��úõ��׵���Ϣ		char mine[11][11];����ֱ���޶����룬���ڲ������޸Ĵ���
	char show[ROWS][COLS] = { 0 };			//����Ų�����׵���Ϣ		char show[11][11];

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');				//Ϊ��ʵ����ͬ������ʼ����ͬ�������飬ֱ�ӽ���ʼ�����ݴ���ȥ�Ƚ�ʡ��
	InitBoard(show, ROWS, COLS, '*');
	printf("��ʼ���ɹ���\n");

	//��ӡһ������
	//DisplayBoard(mine, ROW, COL);			//һ���׵���Ϣ����ʾ��������
	//DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);			//һ���׵���Ϣ����ʾ��������
	DisplayBoard(show, ROW, COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);
}

//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do							//do...whileѭ�������ȿ�ʼ���жϣ�������Ϊһֱ��ʼ��ѡ��
//	{
//		//��Ϸ�˵�
//		menu();					//���ȿ�ʼ��Ϸ�˵�
//		//ѡ���Ƿ���Ϸ
//		printf("��ѡ�񣬲��� enter ��ȷ�ϣ�\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("ɨ����Ϸ�������������Ժ�... ...\n\n");
//			game_mine_sweeping();
//			break;
//		case 0:
//			printf("�����˳���Ϸ�����Ժ�... ...\n");
//			break;
//		default:
//			printf("�������������ȷ�Ϻ��������룺\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//�����Ż���
//1����������ף���Χû���� - չ��һƬ
//2�������