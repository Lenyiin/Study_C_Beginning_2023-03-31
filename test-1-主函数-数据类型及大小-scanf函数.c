#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ƵP1-P7

//1.��������main������
//c�����Ǵ��������ĵ�һ�п�ʼִ�е�
//����c���Ե���main������-���
//int������
//printf-�⺯��-����Ļ��ӡ��Ϣ��
//printf��ʹ�ã�Ҳ�ô��к�������ͷ�ļ�stdio.h��


//int main()
//{
//	printf("������һ���µĿ�ʼ-2023-03-30\n");
//	return 0;
//}


//һ�������п����ж��.C�ļ�
//���.c�ļ�ֻ����һ��main����






//��������
//���������-д����-��������е�����
//�����̵�--15.6--������
//����--����

//int main()
//{
//	//�ַ�����
//	char ch = 'a';
//	//����
//	int age = 20;
//	//������
//	short num = 10;
//	//������
//	long a = 1;
//  //��������
//  longlong=1��
//	//�����ȸ�����
//	float weight = 55.5;
//	//˫���ȸ�����
//	double d = 0.0;
//	return 0;
//}

//һ��ע��ctrl+k��ctrl+c
//һ��ע��ctrl+k��ctrl+u







//ÿ�����͵��������ʹ�С��
//int main()
//{
//	printf("%d\n", 100);   //��ӡһ������-%d
//	//sizeof - �ؼ��� - ������ - �������ͻ��߱�����ռ�ռ�Ĵ�С
//	printf("%d\n", sizeof(char));			 //���Ϊ1
//	printf("%d\n", sizeof(short));			 //���Ϊ2
//	printf("%d\n", sizeof(int));			 //���Ϊ4
//	printf("%d\n", sizeof(long));			 //���Ϊ4
//	printf("%d\n", sizeof(long long));		 //���Ϊ8
//	printf("%d\n", sizeof(float));		   	 //���Ϊ4
//	printf("%d\n", sizeof(double));			 //���Ϊ8
//
//	//byte-�ֽ�=8bit
//	//kb-1024byte
//	//mb-1024kb
//	//gb-1024mb
//	//tb-1024gb
//	//pb-1024tb
//
//	return 0;
//}



//����������������
//int main()
//{
//	//������һ������
//	//����   ������=0���Ƽ�
//	//����  ���������֣����Ƽ�
//
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 20;
//	printf("%d\n", age);
//	printf("%lf\n", weight);			//��������	%lf
//
//
//	return 0;
//}

//����
//%d - ����
//%f - float
//%lf - double





//ȫ�ֱ���		{}�ⲿ�����
//int a=100
//int main()
//{
//	//�ֲ�����	{}�ڲ������
//	int a = 10;
//	printf("%d", a);			//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//
//	return 0;
//}






//дһ�����������������ĺ�
//scanf������һ�����뺯��

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//		sum = a + b;
//		printf("sum=%d\n", sum);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1				������һ�д��룬�ұ�����ڵ�һ�У�����ʹ��scanf����
//scanf_s���� - VS�����ṩ�ģ�����c���Ա�׼�涨��



int g_val = 2023;