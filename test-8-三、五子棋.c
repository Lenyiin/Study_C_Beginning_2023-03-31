#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>

//P64-P66

//���峣��
#define H  5				//���̺�����
#define Z  5			//����������



//�˵�
//void menu()
//{
//	printf("**************************************************\n");
//	printf("**********                              **********\n");
//	printf("**********       ��ӭ����������Ϸ       **********\n");
//	printf("**********                              **********\n");
//	printf("**********         2����������Ϸ        **********\n");
//	printf("**********                              **********\n");
//	printf("**********         1����������Ϸ        **********\n");
//	printf("**********                              **********\n");
//	printf("**********         0���˳���Ϸ          **********\n");
//	printf("**********                              **********\n");
//	printf("**************************************************\n");
//}

//��ʼ����Ϸ���� - �ÿո�洢
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
//	printf("��Ϸ��ʼ���ɹ���\n\n");
//}



//��ӡ����
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

//�������
//void PlayerMove(char board[H][Z],int h,int z)
//{
//	printf("�������׶Σ���������壬���� enter ��ȷ�ϣ�\n\n");
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
//				printf("��ѡ���λ���Ѿ������ӣ���˼�����������룡\n\n");
//			}
//		}
//		else
//			printf("��ѡ���λ�����󣬲��������ϣ����������룡\n\n");
//	}
//}

//��������
//void ComputerMove(char board[H][Z],int h,int z)
//{
//	printf("��������׶Σ�������������... ...\n\n");
//
//	while (1)
//	{
//		int i = rand()%h;
//		int j = rand()%z;
//
//		//�ж�ռ��
//		if (board[i][j] == ' ')
//		{
//			board[i][j] = '#';
//			break;
//		}
//	}
//}

//�ж�������û����
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

//������--����ж�
//char IsWin(char board[H][Z], int h, int z)
//{
//	//���Ӯ�� - *
//	//����Ӯ�� - #
//	//ƽ��     - Q
//	//��Ϸ���� - C
//	int i = 0;
//	int j = 0;
//	//for (i = 0; i < h - 2; i++)
//	//{
//	//	for (j = 0; j < z - 2; j++)
//	//	{
//	//		//�ж���
//	//		if (board[i][j] == board[i][j + 1] && board[i][j + 2] == board[i][j + 1] && board[i][j] != ' ')
//	//			return board[i][j];
//	//		//�ж���
//	//		if (board[i][j] == board[i+1][j] && board[i+1][j] == board[i+2][j] && board[i][j] != ' ')
//	//			return board[i][j];
//	//		//�ж϶Խ���	��
//	//		if (board[i][j] == board[i + 1][j + 1] && board[i + 2][j + 2] == board[i + 1][j + 1] && board[i][j] != ' ')
//	//			return board[i][j];
//	//	}
//	//}
//	
//
//	//�ж���
//	for (i = 0; i < h ; i++)
//	{
//		for (j = 0; j < z - 2; j++)
//		{
//			if (board[i][j] == board[i][j + 1] && board[i][j + 2] == board[i][j + 1] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//�ж���
//	for (i = 0; i < h - 2; i++)
//	{
//		for (j = 0; j < z; j++)
//		{
//			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//�ж϶Խ���	��
//	for (i = 0; i < h - 2; i++)
//	{
//		for (j = 0; j < z - 2; j++)
//		{
//			if (board[i][j] == board[i + 1][j + 1] && board[i + 2][j + 2] == board[i + 1][j + 1] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//�ж϶Խ���	��
//	for (i = 0; i < h - 2; i++)
//	{
//		for (j = 2; j < z; j++)
//		{
//			if (board[i][j] == board[i+1][j-1] && board[i][j] == board[i+2][j-2] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//ƽ��
//	//����������ˣ�����1��û������0��
//	int tmp = IsFull(board, h, z);
//	if (tmp == 1)
//		return 'Q';
//	else
//		return 'C';
//}
//
////������--����ж�
//char IsWin_5(char board[H][Z], int h, int z)
//{
//	//���Ӯ�� - *
//	//����Ӯ�� - #
//	//ƽ��     - Q
//	//��Ϸ���� - C
//	int i = 0;
//	int j = 0;
//
//	//�ж���
//	for (i = 0; i < h; i++)
//	{
//		for (j = 0; j < z - 4; j++)
//		{
//			if (board[i][j] == board[i][j + 1] && board[i][j + 2] == board[i][j + 1] && board[i][j + 2] == board[i][j + 3] && board[i][j + 2] == board[i][j + 4] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//�ж���
//	for (i = 0; i < h - 4; i++)
//	{
//		for (j = 0; j < z; j++)
//		{
//			if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i + 3][j] == board[i + 2][j] && board[i + 4][j] == board[i + 2][j] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//�ж϶Խ���	��
//	for (i = 0; i < h - 4; i++)
//	{
//		for (j = 0; j < z - 4; j++)
//		{
//			if (board[i][j] == board[i + 1][j + 1] && board[i + 2][j + 2] == board[i + 1][j + 1] && board[i + 3][j + 3] == board[i + 1][j + 1] && board[i + 4][j + 4] == board[i + 1][j + 1] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//�ж϶Խ���	��
//	for (i = 0; i < h - 4; i++)
//	{
//		for (j = 4; j < z; j++)
//		{
//			if (board[i][j] == board[i + 1][j - 1] && board[i][j] == board[i + 2][j - 2] && board[i][j] == board[i + 3][j - 3] && board[i][j] == board[i + 4][j - 4] && board[i][j] != ' ')
//				return board[i][j];
//		}
//	}
//	//ƽ��
//	//����������ˣ�����1��û������0��
//	int tmp = IsFull(board, h, z);
//	if (tmp == 1)
//		return 'Q';
//	else
//		return 'C';
//}
//
//
////��������Ϸ
//void game_five_in_a_row()
//{
//	//��������洢��Ϸ����
//	char board[H][Z];
//	//��ʼ����Ϸ����
//	InitBoard(board, H, Z);
//	//��ӡ����
//	DisplayBoard(board, H, Z);
//
//	//��Ϸ�ж�
//	char ret = 0;		//������Ϸ״̬
//	while (1)
//	{
//		//�����
//		PlayerMove(board, H, Z);
//		//��ӡ����
//		DisplayBoard(board, H, Z);
//		//�жϽ��
//		ret = IsWin(board, H, Z);
//		if (ret != 'C')
//			break;
//
//		//������
//		ComputerMove(board, H, Z);
//		//��ӡ����
//		DisplayBoard(board, H, Z);
//		//�жϽ��
//		ret = IsWin(board, H, Z);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//	{
//		printf("\n��ϲ��һ�ʤ������\n");
//
//	}
//	else if (ret == '#')
//	{
//		printf("\n��ϲ���Ի�ʤ������\n");
//	}
//	else
//	{
//		printf("\n�����ƽ�֣�����\n");
//	}
//	printf("\n��ʤ����Ϊ��\n");
//	DisplayBoard(board, H, Z);
//}
////��������Ϸ
//void game_five_in_a_row_5()
//{
//	//��������洢��Ϸ����
//	char board[H][Z];
//	//��ʼ����Ϸ����
//	InitBoard(board, H, Z);
//	//��ӡ����
//	DisplayBoard(board, H, Z);
//
//	//��Ϸ�ж�
//	char ret = 0;		//������Ϸ״̬
//	while (1)
//	{
//		//�����
//		PlayerMove(board, H, Z);
//		//��ӡ����
//		DisplayBoard(board, H, Z);
//		//�жϽ��
//		ret = IsWin_5(board, H, Z);
//		if (ret != 'C')
//			break;
//
//		//������
//		ComputerMove(board, H, Z);
//		//��ӡ����
//		DisplayBoard(board, H, Z);
//		//�жϽ��
//		ret = IsWin_5(board, H, Z);
//		if (ret != 'C')
//			break;
//	}
//	if (ret == '*')
//	{
//		printf("\n��ϲ��һ�ʤ������\n");
//
//	}
//	else if (ret == '#')
//	{
//		printf("\n��ϲ���Ի�ʤ������\n");
//	}
//	else
//	{
//		printf("\n�����ƽ�֣�����\n");
//	}
//	printf("\n��ʤ����Ϊ��\n");
//	DisplayBoard(board, H, Z);
//}

//������or������
//int in_a_row()
//{
//	while(1)
//	{
//		int a = 0;
//		printf("���������������廹�����������壿\n");
//		printf("���� 3 ���� 5 ����ѡ��\n");
//		scanf("%d", &a);
//		if (a == 3 || a == 5)
//			return a;
//		else
//			printf("���������������д���룡\n");
//	}
//}

//������ - ��Ϸ����
//int main()
//{
//	//������Ϸ
//	int input = 0;
//	//��Ƶ����������ֵ
//	srand((unsigned int)time(NULL));
//	//int g=in_a_row();
//	do
//	{
//		//��ӡ�˵�
//		menu();
//		printf("\n��������Ϸָ��� enter ȷ�ϣ�\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 2:
//			printf("�ɹ���½��Ϸ��\n");
//			//��������Ϸ
//			game_five_in_a_row_5();
//			break;
//		case 1:
//			printf("�ɹ���½��Ϸ��\n");
//			//��������Ϸ
//			game_five_in_a_row();
//			break;
//		case 0:
//			printf("�����˳���Ϸ�����Ժ�... ...\n");
//			break;
//		default:
//			printf("�������ָ���������������룺\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
