#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

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
int main()
{
	for (;;)							//forѭ���������ֶ�����ʡ��
		//�жϲ���ʡ�ԣ�ѭ����Ϊ�棬������ѭ��
	{
		printf("hehe\n");
	}
	return 0;
}