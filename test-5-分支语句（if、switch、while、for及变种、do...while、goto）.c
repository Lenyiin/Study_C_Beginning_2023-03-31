#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P29-P44
//��֧��ѭ�����
//C�����ǽṹ���ĳ����������
//˳��ṹ
//ѡ��ṹ
//ѭ���ṹ


//��֧���		if		switch
//ѭ�����		while	for		do while
//goto

//C�����У���һ���ֺŸ�����������һ����䡣

//C��������α�ʾ��ͼٵ��أ�		��0�����棬0���Ǽ�

//int main()
//{
//	printf("������������䣺");
//	int age = 0;
//	scanf("%d",&age);
//	printf("age=%d\n",age);
//	if (age > 65)
//		printf("�����������\n");
//	else if (age >= 18)
//		printf("���Ѿ�������\n");
//	else
//		printf("�㻹δ����\n");
//
//	//����ʾ��
//	if (age < 18)
//		printf("����ʾ��������");
//	else if (18 <= age < 26)			//����д���ͻ��������  ��Ϊ��ǰ�������㣬18<=age���Ϊ1�棬Ȼ��1<26��ҲΪ1��
//		printf("����ʾ��������\n");
//	else
//		printf("����ʾ��������\n");
//
//	//����ʾ���ĸĽ�
//	if (age < 18)
//		printf("��ȷʾ��������");
//	else if (age >= 18 && age < 26)			//��Ҫ��&&�������
//		printf("��ȷʾ��������");
//	else
//		printf("��ȷʾ��������");
//
//	return 0;
//}
//������
//��������C++���


//��ҵ		�ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	printf("������һ������");
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("�������������");
//	else
//		printf("���������ż��");
//
//	return 0;
//}

//��ҵ		���1-100֮�������
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


//switch���

//int main()
//{
//	int day = 0;
//
//	scanf("%d", &day);
//	switch (day)					//����������
//	{
//	case 1:							//����������	�ַ�Ҳ�У��ַ���ASC��ֵ��Ҳ������
//		printf("����һ\n");
//	case 2:
//		printf("���ڶ�\n");
//	case 3:
//		printf("������\n");
//	case 4:
//		printf("������\n");
//	case 5:
//		printf("������\n");
//	case 6:
//		printf("������\n");
//	case 7:
//		printf("������\n");			//case�����ʹ��ĸ�case��ȥ���൱����ڣ����������дbreak�����ͻ�һֱִ�е����
//	}
//	//�Ľ�
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;						//case������ڣ�break��������
//	}
//
//	//����һ-������ �����գ�������-������ ��Ϣ��
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:							//�������ֵ������caseƥ�䷶Χ���ͽ��������Ĭ�Ϸ�Χ
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}





//ѭ�����

//whileѭ��
//��ӡ1-10
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
//		//��whileѭ���У�break�������õ���ֹѭ��
//		printf("%d\n", j);
//		j++;
//	}
//	int k = 0;
//	while (k <= 10)
//	{
//		if (k == 5)
//			continue;
//		//��whileѭ���У�continue��������ѭ��continue����Ĵ��룬ֱ��ȥ�жϲ��֣����Ƿ�ȥ�����´�ѭ��
//		printf("%d\n", k);
//		k++;
//	}
//	return 0;
//}

//EOF - end of file - �ļ�������־

//int main()
//{
//	int ch = getchar();			//��ȡһ���ַ�
//	printf("%c\n", ch);
//	putchar(ch);				//���һ���ַ�
//	int sh = 0;
//	while ((sh = getchar()) != EOF)				//������ȡ����
//	{
//		putchar(sh);
//		
//	}
//	//ctrl+z�Ϳ���ֹͣ��
//	return 0;
//}



//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);				//password�Ǹ����飬������������������Ǹ���ַ�����Բ���Ҫȡ��ַ
//	printf("��ȷ�����루Y/N����");		//�������룺aaa111
//	//int ch = getchar();				//��û�����ֱ��ʧ����
//
//	//��������
//	//getchar();							//����\n��     ����һ�������ﺬ�пո�֮��ģ����磺aaa 111	�ͻ��ǻ�ֱ��ȷ��ʧ��
//	//�����Ҫһֱ����������ֱ����������û����Ϣ
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')				//��������������
//	{
//		;
//	}
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;							//��ʼ������Ҫ��
//	while (i <= 10)						//�жϲ���
//	{
//		printf("%d\n", i);
//		i++;							//ѭ����������
//	}
//	return 0;
//}




//for ѭ��

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;					//ѭ����ֹ
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
//			continue;					//����5����������whileѭ��������ѭ��
//
//		printf("%d\n", i);
//		//i = 6;						forѭ��������ѭ���ڲ�����ѭ����������ֹѭ��ʧȥ����
//	}
//	return 0;
//}


//����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��

//int main()
//{
//	int sz[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)			//����ǰ�պ�����		for (i = 0; i <= 9; i++)���Ե��ǲ��Ƽ�
//	{
//		printf("%d\n", sz[i]);
//	}
//	return 0;
//}



//forѭ������
//int main()
//{
//	//����1
//	for (;;)							//forѭ���������ֶ�����ʡ��
//		//�жϲ���ʡ�ԣ�ѭ����Ϊ�棬������ѭ��
//	{
//		printf("hehe\n");
//	}
//	//����2
//	
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("�Ұ�C���ԣ�����\n");
//	}
//
// 
//	return 0;
//}


//ʡ�Ե�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("�Ұ�C���ԣ�����%d%d\n",i,j);
//		}
//	}
//
//	return 0;
//}

//���ʡ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		//��Ϊ����forѭ���ĳ�ʼ����ʡ���ˣ��ر������forѭ��ʡ����֮�󣬵ڶ���ѭ����ʱ��j=3���������ѭ�����ᱻִ��
//		{
//			printf("�Ұ�C���ԣ�����%d%d\n", i, j);
//		}
//	}
//
//	return 0;
//}
//��Ҫ���ʡ��
//�ж�ʡ�Ժ�Ϊ��



//do...whileѭ��
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

//����break
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;						//��ӡ��1-4������ѭ����,����ѭ������Ĵ�ӡ�Ǻǻ��ǻ�ִ��
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
// printf("hehe")
//	return 0;
//}

//����continue
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;						//��ӡ��1-4����������i++�����³���һֱ��i=5��ѭ��
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}


//while			for			do while

//��ϵ

//����n�Ľ׳�

//int main()
//{
//	int i ;
//	int n = 0;
//	printf("������n��ֵ��");
//	scanf("%d", &n);
//	int j = 1;
//	for (i = 1; i <= n; i++)
//		j = j * i;
//	printf("%d\n", j);
//	return 0;
//}


//����1-10�׳˵ĺ�

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


//��һ�����������в��Ҿ����ĳ������n
//�۰���ҡ����ֲ���

//int main()
//{
//	int sz[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;			//Ҫ���ҵ�����
//	int dx = sizeof(sz) / sizeof(sz[0]);		//�����Ԫ��
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
//			printf("�ҵ���,�±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}



//��һ���ַ�������ͷ���м����ɣ�������#���
#include<windows.h>
//int main()
//{
//	char arr1[] = "������2023��4��2�գ�������ѧϰC���Եĵ����죬���ͣ�����";			//����55
//	char arr2[] = "Today is April 2, 2023, and today is the fourth day of learning C. Go!!!";			//����72
//	char arr3[] = "                                                                        ";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	printf("��仰�ǣ�%s\n��仰����Ϊ��%d\n", arr2,right);
//	while (left <= right)
//	{
//		arr3[left] = arr2[left];
//		arr3[right] = arr2[right];
//		left++;
//		right--;
//		printf("%s\n", arr3);
//		Sleep(100);					//sleep��λ�Ǻ��룬1000�������һ�룬�൱��һ���Ӵ�ӡһ������Ҫ����ͷ�ļ�windows.h
//		system("cls");					//�����Ļ
//	}
//	printf("%s\n", arr2);
//	return 0;
//}



//�������룬���ֻ���������Σ�������ȷ���½�ɹ������ζ�����������˳�����
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	char inputword[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���%d���������룺\n", i+1);
//		scanf("%s", inputword);
//		//if (password == inputword)			//�ַ����ıȽϲ���ʹ��==��Ӧ��ʹ��strcmp����Ҫ����string.hͷ�ļ�
//		//if(strcmp(password,inputword)==0)
//		if(strcmp("123456", inputword) == 0)
//		{
//			printf("����������ȷ����½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�����������");
//		}
//	}
//	if(i==3)
//	{
//		printf("��½ʧ��");
//	}
//
//	return 0;
//}





//дһ����������Ϸ
//1.�Զ�����һ��1-100֮��������
//2.������
//	a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
//	b.�´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
//3.��Ϸ����һֱ�棬�����˳���Ϸ
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
//	//��������Ϸ��ʵ��
//	//1.�����������		���������������rand����		��Ҫ����ͷ�ļ�stdlib.h
//	//rand����������һ��0-32767֮������֣�
//	int ret=rand()%100+1;						//%100��������0-99��Ȼ��+1����Χ����1-100
//	//printf("������ǣ�%d\n", ret);
//	int j = 0;
//	while (1)
//	{
//		
//		int guess = 0;
//		printf("���%d�β����֣�\n", j + 1);
//		j++;
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��µ�̫С��������Ĳ£����ͣ�����\n");
//		}
//		else if (guess > ret)
//		{
//			printf("��µ�̫��������С�Ĳ£����ͣ�����\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶������������ѽ������\n");
//			break;
//		}
//	}
//}

//int main()
//{
//	int input = 0;
//
//	srand((unsigned int)time(NULL));			//time����		��Ҫ����ͷ�ļ�time.h
//	do
//	{
//		
//		
//		menu();				//��ӡ�˵�
//		printf("���������Ϸ����Ļ��밴1�������밴0��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//printf("������\n");
//			game();
//			break;
//		case 0:
//			printf("�õģ������˳���Ϸ... ...");
//			break;
//		default:
//			printf("ѡ�����������ѡ��");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


//F10 - �����
//F11 - �����

//��ҵ		д���뽫�������ְ��մӴ�С���

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d%d%d", &a, &b, &c);
//	//����˳��
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
//	//��� - �Ӵ�С
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}




//��ҵ		�����������������Լ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int max = 0;
//	printf("�������������֣������������������ֵ����Լ���Ƕ��١�\n");
//	scanf("%d%d", &i, &j);
//	
//	for (k = 1; k <= i && k <= j; k++)
//	{
//		if ((i % k == 0) && (j % k == 0))
//		{
//			max = k;
//		}
//	}
//	printf("%d��%d�����Լ��Ϊ%d\n", i, j, max);
//	//շת�����
//	int t = 0;
//	while (t = i % j)
//	{
//		i = j;
//		j = t;
//	}
//
//	printf("շת�������%d��%d�����Լ��Ϊ%d\n", i, j, max);
//	return 0;
//}

//��С������=i*j/���Լ��


//��ҵ    ��ӡ1000-2000��֮�������
//int main()
//{
//	int i = 1000;
//	int y = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
//		//1. ��4���������ǲ��ܱ�100����������
//		//2. �ܱ�400������������
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
//		//��һ�ַ���
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



//��ҵ      ��ӡ100~200������
//���� - ����
//ֻ�ܱ�1��������������

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//2->i-1֮�������ȥ�Գ�i�����ܲ�������
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
//			printf("%d ", i);			//����
//		}
//	}
//	return 0;
//}

//��һ�δ����Ż�
#include<math.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//m=a*b
//	//a��b��������һ��������<=��ƽ��m��
//	//16=2*8=4*4
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)			//sqrt - �ǿ�ƽ���ĺ���			��Ҫ����ͷ�ļ�math.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;			//��������
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

//�����Ż�
//int main()
//{
//	int count = 0;
//	int i = 0;
//	//m=a*b
//	//a��b��������һ��������<=��ƽ��m��
//	//16=2*8=4*4
//	for (i = 101; i <= 200; i+=2)				//ż��һ������������ֱ���ų���
//	{
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)			//sqrt - �ǿ�ƽ���ĺ���			��Ҫ����ͷ�ļ�math.h
//		{
//			if (i % j == 0)
//			{
//				flag = 0;			//��������
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



//goto���
//C�����ṩ�˿����������õ�goto���ͱ����ת�ı�־

//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("haha\n");
//
//	goto flag;				//����������ѭ��
//	return 0;
//}


//�ػ�����
//ֻҪ�������������Ծ���һ�����ڹػ���������룺�Ұ��㣬��ȡ���ػ���

//�ػ�ָ�shutdown -s -t 60			//shutdown �ػ�		-s ���ùػ�		-t ���õ���ʱ�ػ�		60 60���ػ�
//ȡ���ػ�ָ�shutdown -a

//int main()
//{
//	//�ػ�
//	//C�����ṩ��һ��������system���� - ִ��ϵͳ�����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");			//ͷ�ļ�stdlib.h
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺�Ұ��㣬��ȡ���ػ�\n");
//	scanf("%s", input);				//�������������Ǹ���ַ���������ﲻ��Ҫȡ��ַ
//	if (strcmp(input, "�Ұ���")==0)
//	{
//		system("shutdown -a");
//		printf("ָ������ɹ�����ȡ���ػ�");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//goto��������Ƕ�׺����к���
//goto���ֻ����һ��������Χ���������ܿ纯����
//void test()
//{
//flag:
//	printf("test\h");
//}
//
//int main()
//{
//	goto flag;				goto�������ܿ纯��ʹ��
//	return 0;
//}


