#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//P60-P63


//�����ص�
//1.һά����Ĵ����ͳ�ʼ��
//2.һά�����ʹ��
//3.һά�������ڴ��еĴ洢
//4.��ά����Ĵ����ͳ�ʼ��
//5.��ά�����ʹ��
//6.��ά�������ڴ��еĴ洢
//7.������Ϊ��������
//8.�����Ӧ��ʵ��1��������
//9.�����Ӧ��ʵ��2��ɨ����Ϸ



//���飺һ����ͬ����Ԫ�صļ���
//type_t arr_name [const_n];			//type_t	��ָ�����Ԫ�����ͣ�	const_n		��һ���������ʽ������ָ������Ĵ�С

//int main()
//{
//	int arr[10];						//��������
//	// char ch[5];
//	int a = 10;									//��ʼ��
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };	//��ȫ��ʼ��
//	int arr2[10] = { 1,2,3,4,5 };				//����ȫ��ʼ����δ��ʼ�����Զ�����0
//	int arr3[] = { 1,2,3,4,5 };					//�Զ�����5���൱��		int arr3[5]={1,2,3,4,5};
//	char ch[5] = { 'a','b','c' };				//ǰ��λ��	a b c ����λ��	��\0�� ��\0��
//	char ch1[5] = "abc";						//����ǣ�a b c \0 0
//	char ch2[] = "abc";							//����ǣ�a b c \0
//
//	//���ֶ����ַ���������
//	char ch3[] = "abc";							//[a b c \0]
//	char ch4[] = { 'a','b','c' };				//[a b c]
//
//	printf("%s\n", ch3);
//	printf("%s\n", ch4);
//	//abc
//	//abc��������������������������������̩, I ?
//
//	//��������в��죬��ӡ�ַ�������Ҳ�в���
//	printf("%d\n", strlen(ch3));
//	printf("%d\n", strlen(ch4));				//һֱҪ�ҵ� '\n'�Ż�ֹͣ
//	return 0;
//}




//һά����Ķ���

//int main()
//{
//	int arr[10] = { 0 };		//��ʼ��
//	arr[4] = 5;					//[] - �±����ò�����
//	printf("%d\n", arr[4]);
//	int sz = sizeof(arr) / sizeof(arr[0]);		//�����ַ�������
//	printf("����ĳ���Ϊ��%d\n", sz);
//	for (int i = 0; i < sz; i++)				//��ӡ����
//	{
//		printf("�����ǣ�%d\n", arr[i]);
//	}
//	return 0;
//}

//�ܽ᣺1��������ʹ���±������ʵģ��±��Ǵ�0��ʼ��
//		2������Ĵ�С����ͨ������õ���

//%p - �ǰ���ַ�ĸ�ʽ��ӡ - ʮ�����ƵĴ�ӡ
//int main()
//{
//	printf("%x\n", 0x12);			//%x	16���ƴ�ӡ
//	printf("%p\n", 0x12);
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//1��һά�������ڴ�����������ŵģ�
//2�����������±����������ַ���ɵ͵��߱仯�ģ�


//��C/C++/JAVA��
//�����ݽṹ��
//������ϵͳ��
//����������硷
//�����ݿ⡷
//����������ԭ��
//����Ƭ����
//��������̡�����������ԡ�




//��ά����Ĵ���

//int main()
//{
//	//����
//	int arr[3][4];				//����һ����ά����
//	char ch[3][10];
//	//��ʼ�� - ������ͬʱ����ֵ
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };		//��ȫ��ʼ��
//	int arr2[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };		//����ȫ��ʼ��		��0���ַ������鲹 '\0'
//	int arr3[3][4] = { {1,2},{3,4},{4,5}};		//����ȫ��ʼ��		��ߵĴ����ŷֱ��ǵ�һ�С��ڶ��С�������
//	int arr4[][4] = { {1,2},{3,4},{4,5}};		//����ȫ��ʼ��		����ʡ���У�����ʡ����
//	//��ά�����ʹ��
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d  ", arr4[i][j]);
//		}
//		printf("\n");
//	}	
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr4[%d][%d]=%p\n",i,j,&arr4[i][j]);
//		}
//	}
//	//ָ����ʶ�ά����
//	int* p = &arr4[0][0];
//	for (i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}
//��ά�������ڴ���Ҳ��������ŵ�



//������Ϊ��������
//����������д�����ʱ�򣬻Ὣ������Ϊ�����������������磺��Ҫʵ��һ��ð�����򣬺�����һ��������������
//// ð������
//void bubble_sort(int arr[],int sz)
//{
//	//ð�������˼�룺�������ڵ�Ԫ�ؽ��бȽϣ����ҿ��ܵĻ���Ҫ����
//	//int sz = sizeof(arr) / sizeof(arr[0]);				//�����ں��������������С����Ϊ�������������ǵ�ַ��Ӧ����������ͽ���
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//����Ϊ���� - ð������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);						//�����ڴ��ε�ʱ���Ǵ��׵�ַ
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//���鴫�δ�������Ԫ�ص�ַ
//���ǣ�����������
//1��sizeof���������� - ��������ʾ�������� - ���������������Ĵ�С����λ���ֽ�
//2��&������ - ��������ʾ�������� - ȡ��������������ĵ�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", &arr);			//1 - &arrȡ����������ĵ�ַ
//	printf("%p\n", &arr+1);			//1 - ����		��1  �ӵ���40
//
//	printf("%p\n", arr);			//2 - ������ĵ�ַ
//	printf("%p\n", arr+1);			//2 - ����		��1  �ӵ���4
//	printf("%p\n", &arr[0]);		//3
//
//
//	int sz = sizeof(arr);			//��������ʾ��������
//	printf("%d\n", sz);
//	//���������һ��
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);			//����������Ԫ�ص�ַ
//	return 0;
//}



//ð��������Ż�
//void bubble_sort(int arr[], int sz)
//{
//	//ð�������˼�룺�������ڵ�Ԫ�ؽ��бȽϣ����ҿ��ܵĻ���Ҫ����
//	//int sz = sizeof(arr) / sizeof(arr[0]);				//�����ں��������������С����Ϊ�������������ǵ�ַ��Ӧ����������ͽ���
//	//ȷ������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		int j = 0;
//		int flag = 1;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//				flag = 0;
//			}
//		}
//		if (flag == 1)						//���һ�ζ�û������˵���Ѿ��ź��ˣ�����Ҫ��ѭ����
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//����Ϊ���� - ð������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);						//�����ڴ��ε�ʱ���Ǵ��׵�ַ
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//
//	printf("%d\n", sizeof(arr));						// 48
//	printf("%d\n", sizeof(arr[0]));						// 16
//	printf("%d\n", sizeof(arr[0][0]));					// 4
//
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));		// 3	�����м���
//	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));	// 4	�����м���
//
//	printf("%p\n", arr);								// ��ά�����������Ҳ��ʾ������Ԫ�صĵ�ַ
//	printf("%p\n", arr[0]);								// ��һ�еĵ�ַ
//	printf("%p\n", &arr[0][0]);							// ��һ��Ԫ�صĵ�ַ
//	printf("%p\n", arr[1]);
//	printf("%p\n", arr[2]);
//
//	return 0;
//}

// 1
//int main()
//{
//	char arr[] = "abcde";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	// int right = sz - 2;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//
//	printf("%s", arr);
//
//	return 0;
//}

// 2
//void reverse(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	
//	reverse(arr);
//
//	printf("%s", arr);
//
//	return 0;
//}

// 3
//// �ݹ�
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse(char* str)
//{
//	char tmp = *str;
//	int len = my_strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (my_strlen(str + 1) >= 2)
//		reverse(str + 1);
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int DigitSum(unsigned int num)
//{
//	int sum = 0;
//	while (num / 10)
//	{
//		sum += num % 10;
//		num /= 10;
//	}
//	sum += num;
//
//	return sum;
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//
//	return 0;
//}

//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//	{
//		return DigitSum(num / 10) + num % 10;
//	}
//	else
//	{
//		return num;
//	}
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//
//	return 0;
//}

//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return Pow(n, k - 1) * n;
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / Pow(n, -k);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("%lf\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, (3, 4), 5 };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}


//int main()
//{
//	char str[] = "hello world!";
//	printf("%d %d\n", sizeof(str), strlen(str));	// 13 12
//
//	return 0;
//}