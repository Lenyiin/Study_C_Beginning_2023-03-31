#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P88-P97


//ʵ�õ��Լ���
//1.ʲô��bug
//2.������ʲô���ж���Ҫ��
//3.debug��release�Ľ���
//4.windows�������Խ���
//5.һЩ���Ե�ʵ��
//6.���д�������ڵ��ԣ��Ĵ���
//7.��̳����Ĵ���


//Debugͨ����Ϊ���԰汾��������������Ϣ�����Ҳ����κ��Ż������ڳ���Ա���Գ���
//Release��Ϊ�����汾���������ǽ����˸����Ż���ʹ�ó����ڴ����С�������ٶ��϶������ŵģ��Ա��û��ܺõ�ʹ�á�
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}
//�ϵ�
//���õļ�����ݼ�
//F5	�������ԣ���������ֱ�ӵ�����һ���ϵ㴦
//F9	�����ϵ��ȡ���ϵ㡣�����ڳ�������λ�����öϵ㡣�����Ϳ���ʹ�ó�������Ҫ��λ������ִֹͣ�У��̶�һ����ִ����ȥ��
//F10	����̣�ͨ����������һ�����̣�һ�����̿�����һ�κ������ã�������һ����䡣
//F11	����䣬����ÿ�ζ�ִ��һ����䣬���������ݼ�����ʹ���ǵ�ִ���߼����뺯���ڲ��������ʹ�õģ���
//CTRL + F5		��ʼִ�в����ԣ���������ó���ֱ�����������������ԾͿ���ֱ��ʹ�á�
//Fn -	�������ܼ�


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*for (i = 0; i <= 15; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}*/
//	printf("%p %p\n", &i, arr);
//	return 0;
//}
//i��arr�Ǿֲ��������ֲ������Ƿ���ջ���ϵ�
//ջ���ڴ��ʹ��ϰ���ǣ���ʹ�øߵ�ַ�ռ䣬��ʹ�õ͵�ַ�ռ�		vs2022��̫һ��
//��		c������ȱ��


//����Ĵ���
//1.������������
//2.bug����
//3.Ч�ʸ�
//4.�ɶ��Ը�
//5.��ά���Ը�
//6.ע������
//7.�ĵ���ȫ
//������coding����
//1.ʹ��assert
//2.����ʹ��const
//3.�������õı�����
//4.��ӱ�Ҫ��ע��
//5.������������


//ģ��ʵ��strcpy
//strcpy - �ַ�������
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//void my_strcpy1(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;			//hello�Ŀ���
//	}
//	*dest = *src;					//\0�Ŀ���
//}
//
//#include<assert.h>
// ��srcָ������ݿ����Ž�destָ��Ŀռ���
// �ӱ����Ͻ���ϣ��destָ������ݱ��޸ģ�srcָ������ݲ�Ӧ�ñ��޸�
//void my_strcpy2(char* dest, const char* src)
//{
//	assert(src != NULL);			//����
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	//my_strcpy(arr1, arr2);
//	my_strcpy2(arr1, arr2);
//	//strcpy(arr1,arr2);			//1.Ŀ��ռ����ʼ��ַ ��2.Դ�ռ����ʼ��ַ
//	printf("%s\n", arr1);
//	return 0;
//}


//int main()
//{
//	/*int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);*/
//
//	//const ���α�������������ͳ�Ϊ�����������ܱ��޸ģ��������ϻ��Ǳ���
//	const int num = 10;
//	//num = 20;
//	/*const int* p = &num;
//	//const ����ָ�������ʱ��
//	//const �������*����ߣ����ε���*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	//		����ָ����������ǿ����޸ĵ�
//	//*p = 20;
//	int n = 100;
//	p = &n;			//ָ����������ǿ����޸ĵ�
//	printf("%d\n", num);*/
//
//	int* const p = &num;			//���const����*���ұߣ����ε���ָ�����p����ʾָ��������ܱ��ı�
//									//����ָ��ָ������ݣ����Ա��ı�
//	int m = 100;
//	p = &m;							//err
//	*p = 20;						//true
//	return 0;
//}

//int const* const* const p;		//��һ��const����**p���ڶ���const����*p��������const����p


//ģ��ʵ��strlen
#include<string.h>
//��׳��
//³����
//size_t	unsigned int
//size_t my_strlen2(const char* arr)
//{
//	assert(arr != NULL);		//assert(arr)	������һ����˼
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//int main()
//{
//	char arr[] = "hello";
//	
//	printf("%d\n", strlen(arr));		//strlen�����ַ�������
//	int ret = my_strlen2(arr);
//	printf("%d\n", ret);
//	return 0;
//}



//�����Ĵ������
//1.�����ʹ���
//2.�����ʹ���
//3.����ʱ����


//��ҵ	һ�������м���1
//�����븺�����ͻ����
//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
////�Ľ�
//int Numberof11(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
////��һ�ַ���
int Numberof12(int n)
{
	int count = 0;
	int i = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
//int main()
//{
//	int n = -15;
//	//int ret = Numberof1(n);
//	int ret = Numberof11(n);
//	printf("%d\n", ret);
//	ret = Numberof12(n);
//	printf("%d\n", ret);
//	return 0;
//}


//дһ�������ж�һ�������ǲ���2��n�η�			k&(k-1)==0


//��ҵ   �����������֣������������ֵĶ�����λ��ͬ�ĸ���
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))				//һ��һ��Ӳ�Ƚ�
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//��һ�ַ���
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	int count = 0;
//	int ret = m ^ n;						//��λ�����ͬΪ0������Ϊ1
//	//ͳ��һ��ret��2�������м���1����˵��m��n�Ķ�����λ���м�λ��ͬ
//	count = Numberof12(ret);
//	printf("%d\n", count);
//	return 0;
//}

//��ҵ  ��������ʱ������������������
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("%d\n%d\n", a, b);
//	return 0;
//}


//oj		online judge

//��ҵ ��С������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	scanf("%d %d", &i, &j);
//	int min = i > j ? i : j;
//	//����1
//	while (1)
//	{
//		if (min % i == 0 && min % j == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min++;
//	}
//	//����2
//	for (int a = 1;; a++)
//	{
//		if (i * a % j == 0)
//		{
//			printf("%d\n", i * a);
//			break;
//		}
//	}
//	return 0;
//}


//��ҵ  
reverse(char* left, char* right)
{
	while(left<right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets(arr);						//scanf()����ֻ��¼��ո�ǰ����ַ�������ʹ��gets����
	//������ת��
	//1.�ַ������巴ת
	//2.ÿ����������
	//3.

	int len = strlen(arr);
	reverse(arr, arr + len - 1);		//��������
	printf("%s\n", arr);

	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}

	printf("%s\n", arr);

	return 0;
}