#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P45-P59

//1.������ʲô
//2.�⺯��
//3.�Զ��庯��
//4.��������
//5.��������
//6.������Ƕ�׵��ú���ʽ����
//7.�����������Ͷ���
//8.�����ݹ�




//������ʲô��		ά���ٿƵĶ��壺�Ӻ���
//�ӳ�����һ�����ͳ����е�ĳ���ִ��룬��һ������������ɡ����������ĳ���ض����񣬶���������������룬�߱���ԵĶ����ԡ�
//һ���������������з���ֵ���ṩ�Թ��̵ķ�װ��ϸ�ڵ����ء���Щ����ͨ��������Ϊ����⡣


//C�����к����ķ���
//1.�⺯��
//2.�Զ��庯��

//����strcpy
//int main()
//{
//	char sz1[20] = { 0 };
//	char sz2[] = "hello world!!!";
//	strcpy(sz1, sz2);
//	printf("%s", sz1);					//��ӡsz1����ַ��� %s - ���ַ����ĸ�ʽ��ӡ
//	return 0;
//}

//����memset
//int main()
//{
//	char sz[] = "hello world!!!";
//	memset(sz, 'x', 5);
//	printf("%s\n", sz);
//	return 0;
//}


//IO����		printf	scanf	getchar		putchar
//�ַ�����������	strcmp		strlen
//�ַ���������		toupper
//�ڴ��������		memcpy		memcmp		memset
//ʱ��/���ں���		time
//��ѧ����			sqrt		pow
//�����⺯��




//�Զ��庯��
//�Զ��庯���Ϳ⺯��һ�����к�����������ֵ���ͺͺ���������
//���ǲ�һ��������Щ���������Լ�����ơ��������Աһ���ܴ�ķ��ӿռ䡣


//�Զ��庯��
int get_max(int i, int j)
{
	int z = 0;
	if (i > j)
		z = i;
	else
		z = j;
	return z;		//���ؽϴ�ֵ
}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	printf("�������������֣�����������˭��󣡣���\n");
//	scanf("%d%d", &i, &j);
//	//�����ĵ���
//	max = get_max(i, j);
//	printf("���������������%d��%d�е����ֵ�ǣ�%d\n", i, j, max);
//	return 0;
//}

//�����������͵ĵط�д����void����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//д��������
void exchange1(int i, int j)			//д����				//��ֵ����
{
	//exchange1�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
	//�ı��βΣ��ǲ��ܸı�ʵ��
	int z = 0;
	z = i;
	i = j;
	j = z;

}
void exchange2(int *i, int *j)			//��ʽ����				//��ַ����
{
	int z = 0;
	z = *i;
	*i = *j;
	*j = z;
	//return i, j;
}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	printf("�������������֣������������㽻��˳�򣡣���\n");
//	scanf("%d%d", &i, &j);
//	printf("�������������%d��%d\n", i, j);
//	//�����ĵ���
//	exchange1(i, j);			//��ֵ����
//	exchange2(&i, &j);			//��ַ����						//ʵ�ʲ���
//	
//	printf("�������˳��%d��%d\n", i, j);
//	return 0;
//}

//int main()
//{
//	int a = 10;			//�ĸ��ֽڵĿռ�
//
//	int* pa = &a;		//pa����һ��ָ�����
//	*pa = 20;
//
//	printf("%d\n", a);
//	return 0;
//}


//ʵ�ʲ�������ʵ���������Ĳ�������ʵ�Ρ�ʵ�ο����ǣ����������������ʽ�������ȡ�
//����ʵ���Ǻ������͵������ڽ��к�������ʱ�����Ƕ�������ȷ����ֵ���Ա����Щֵ���͸��βΡ�

//��ʽ��������ָ�������������еı�������Ϊ��ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ�������Խ���ʽ������
//��ʽ�����������������֮����Զ������ˡ������ʽ����ֻ�ں�������Ч��

//��ֵ���ã��������βκ�ʵ�ηֱ�ռ�в�ͬ�ڴ�飬���βε��޸Ĳ���Ӱ��ʵ��
//��ַ���ã��Ѻ����ⲿ�����������ڴ��ַ���ݸ�����������һ�ֵ��ú����ķ�ʽ��
//			���ִ��η�ʽ�����ú����ͺ�����ı����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����



//��ҵ		д��������ӡ100-200֮�������
#include<math.h>
int is_prime(int a)
{
	int b = 0;
	int c = 1;
	for (b = 2; b <= sqrt(a); b++)
	{
		if (a % b == 0)
		{
			c = 0;
			break;
			//return 0;
		}
	}
	return c;
}
int is_leap_year(int a)
{
	if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
		return 1;
	return 0;
}
//���ַ��������
int is_leap_year1(int a)
{
	return ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0));
}

//int main()
//{
//	//100-200֮�������
//	int i = 0;
//	int count1 = 0;
//	int count2 = 0;
//	for (i = 101; i <= 200; i +=2 )
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d\n", i);
//			count1++; 
//			
//		}
//	}
//	printf("%d\n\n", count1);
//	//1000-2000��֮�������
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count2++;
//		}
//	}
//	printf("\n\n%d\n", count2);
//
//	return 0;
//}
//һ�����������д���ͣ�Ĭ�Ϸ���int����



//��ҵ  �ú���ʵ�ֶ��ֲ�����һ����
int binary_search(int arr[], int a, int b)
{
	int left = 0;
	int right = b-1;
	while(left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > a)
		{
			right = mid - 1;
		}
		else if (arr[mid] < a)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;				//����Ҫ�ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����ҵ���λ�õ��±�
//	//�Ҳ����ͷ���-1
//	//����arr���Σ�ʵ�ʴ��ݵĲ������鱾����������ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, key, sz);
//
//	if (-1 == ret)
//	{
//		printf("���޴���������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ���������±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//����arr���Σ�ʵ�ʴ��ݵĲ������鱾����������ȥ��������Ԫ�صĵ�ַ


//��ҵ   дһ��������ÿ����һ������������ͻὫnum��ֵ����1.

void Add1(int *a)
{
	(*a)++;
}
//int main()
//{
//	int num = 0;
//	Add1(&num);
//	printf("��%d�ε���\n", num);	
//	Add1(&num);
//	printf("��%d�ε���\n", num);
//	Add1(&num);
//	printf("��%d�ε���\n", num);
//	return 0;
//}


//������Ƕ�׵��ú���ʽ����
//��������Ƕ�׵��ã�����Ƕ�׶���


//��ʽ����
#include<string.h>
//int main()
//{
//	int len = strlen("abc");
//	printf("%d\n", len);
//	
//	printf("%d\n", strlen("abc"));			//��ʽ����
//
//	char arr1[20] = { 0 };
//	char arr2[] = "bit";
//
//	printf("%s\n", strcpy(arr1, arr2));		//��ʽ����
//	printf("%d", printf("%d", printf("%d", 43)));			//printf���ص��Ǵ�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ�� - ��֪
//	int add(int, int);
//	int c = add(a, b);
//	printf("%d", c);
//	return 0;
//}

//�����Ķ���
int add(int x, int y)
{
	return x + y;
}

//�����������Ͷ���
//������������	1.���߱�������һ��������ʲô��������ʲô������������ʲô�����Ǿ����ǲ��Ǵ��ڣ��޹ؽ�Ҫ��
//				2.����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ�á�
//				3.����������һ��Ҫ����ͷ�ļ��еġ�
//�����Ķ��壺	�����Ķ�����ָ�����ľ���ʵ�֣����������Ĺ���ʵ�֡�

//���뾲̬��	#pragma comment(lib,"sub.lib")




//�����ĵݹ�
//�����������ı�̼��ɳ�Ϊ�ݹ顣�ݹ���Ϊһ���㷨�ڳ�����������й㷺Ӧ�á�
//һ�����̻������䶨���˵������ֱ�ӻ��ӵ��������һ�ַ�����
//��ͨ����һ�����͸��Ӷȵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������⣬
//�ݹ����ֻ�������ĳ���Ϳ��������������������Ҫ�Ķ���ظ����㣬���ؼ����˳���Ĵ�������
//�ݹ����Ҫ˼����ʽ���ڣ��Ѵ��»�С

//int main()
//{
//	printf("hehe!\n");
//	main();						//�Լ������Լ�		���ݹ�
//	return 0;
//}


//��ҵ		����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}
//int main()
//{
//	unsigned int num = 0;
//	printf("������һ�����֣�");
//	scanf("%d", &num);
//	//�ݹ飬�����Լ�
//	print(num);					//print�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
//}

//�ݹ���ڵ�������Ҫ����
//���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

//ջ�����ֲ������������β�
//��������̬�ڴ���䡢malloc��calloc��realloc
//��̬����ȫ�ֱ�������̬����


//д�ݹ�����ʱ��
//1.�������ݹ飬��������������ÿ�εݹ�ƽ���������
//2.�ݹ��β���̫��



//��ҵ     ��д����������������ʱ���������ַ����ĳ���
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
//int main()
//{
//	char arr[] = "abc";
//	//['a']['b']['c']['\0']
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}



//�ݹ������
//��ҵ		n��
jc(int a)
{
	if (a >1)
	{
		return a * jc(a - 1);
	}
	return 1;
}
//int main()
//{
//	int i = 0;
//	printf("������һ�����֣�����������׳ˣ�\n");
//	scanf("%d", &i);
//	printf("%d�Ľ׳��ǣ�%d\n",i, jc(i));
//	return 0;
//}



//��ҵ		��n��쳲���������
int count = 0;
//�ݹ������⣬����Ч��̫��
int fbnq(int a)
{
	//ͳ�Ƶ�����쳲��������ļ�����������
	if (a == 3)
		count++;
	if (a > 2)
	{
		return fbnq(a - 2) + fbnq(a - 1);
	}
	else if (a = 2)
		return 1;
	else
		return 1;
}
//int main()
//{
//	int a = 0;
//	printf("������һ�����֣�����������쳲��������У�\n");
//	scanf("%d", &a);
//	printf("%d��쳲����������ǣ�%d\n", a, fbnq(a));
//	printf("3�����ˣ�%d��\n", count);
//	return 0;
//}

//����д���ظ��������̫�࣬�������Ż�֮���д��
//��������
int Fib(int a)
{
	int i = 1;
	int j = 1;
	int z = 1;
	while (a > 2)
	{
		z = i + j;
		i = j;
		j = z;
		a--;
	}
	return z;
}
//int main()
//{
//	int a = 0;
//	printf("������һ�����֣�����������쳲��������У�\n");
//	scanf("%d", &a);
//	printf("%d��쳲����������ǣ�%d\n", a, Fib(a));
//	//printf("3�����ˣ�%d��\n", count);
//	return 0;
//}


//��ŵ��
//������̨��
//�Լ�������������



//��ҵ     �����һ��1-100�����������г��ֶ��ٸ�����9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10 == 9) || (i / 10 == 9))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}


//����1/1-1/2+1/3... ...+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum =sum+ 1.0 / i ;
//		else
//			sum = sum - 1.0 / i;
//	}
//	printf("%lf", sum);						//˫���ȸ����������%lf
//	return 0;
//}

//��һ��д��
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//			sum = sum + 1.0 / i*flag;
//			flag = -flag;
//	}
//	printf("%lf", sum);						//˫���ȸ����������%lf
//	return 0;
//}


//��ҵ		��10�������е����ֵ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];									//����ط������ʼ��Ϊ0��������ȫ�����Ǹ�����ʱ�򣬻��������
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("�������������ֵ�ǣ�%d\n", max);
//	return 0;
//}


//��ҵ		����Ļ������˷��ھ���

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);			//%2d		��ӡ��λ�������ո����
//		  //printf("%d*%d=%-2d ", j, i, i * j);			//%-2d		�����
//		}
//		printf("\n");
//	}
//	return 0;
//}




//��ҵ			��������ͬʱ��������ֵ�����ǿ���ͨ���������ָ�뷵��

//1.ͨ�����鷵��ֵ
//void test1(int arr[])
//{
//	arr[0] = 10;
//	arr[1] = 20;
//}
////2.ͨ��ָ�뷵��ֵ
//void test2(int* p1, int* p2)
//{
//	*p1 = 10;
//	*p2 = 20;
//
//}
////3.ͨ��ȫ�ֱ���
//int x = 0;
//int y = 0;
//void test3()
//{
//	x = 10;
//	y = 20;
//}
//
//int main()
//{
//	//1.ͨ�����鷵��ֵ
//	printf("1.ͨ�����鷵��ֵ\n");
//	int arr[10] = { 0 };
//	test1(arr);
//	int i = 0;
//	for(i=0;i<10;i++)
//			printf("%d\n", arr[i]);
//
//
//
//	//2.ͨ�����鷵��ֵ
//	printf("2.ͨ��ָ�뷵��ֵ\n");
//	int a = 0;
//	int b = 0;
//	test2(&a, &b);
//	printf("a=%d	b=%d\n",a,b);
//
//
//	//3.ʹ��ȫ�ֱ���		��Ϊȫ�ֱ��������к����ж�����ʹ�ã�����һ�㲻����ʹ��
//	test3();
//	printf("x=%d	y=%d\n", x, y);
//	return 0;
//}


//��ҵ			���ű��ʽ����������μ��㣬���Ҵ�������һ�����ʽ���
//				exec((v1,v2),(v3,v4),v5,v6);
//ִ�н������	exec(v2,v4,v5,v6);



//��ҵ    �ú���ʵ��һ���˷��ھ���,����9�Ļ���ʵ��9*9�˷��ھ�������12�Ļ���ʵ��12*12�˷��ھ���
void print_table(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d  ", j, i, i * j);
		}
		printf("\n");
	}
}
//int main()
//{
//	int n;
//	printf("�����ӡ���׵ĳ˷��ھ���\n");
//	scanf("%d", &n);
//	//����
//	print_table(n);
//	//�����������Ƿǳ��ؼ��ģ�������������ֺ����Ĺ���
//	
//	return 0;
//}
int my_strlen1(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void reverse_string(char* str)
{
	int left = 0;
	int right = my_strlen1(str) - 1;
	while(left<right)
	{
		char tmp = str[left];					//�ұ߻�����д��	*��str+left)	�൱��		str(left)
		str[left] = str[right];					//*��str+left��=*��str+right��
		str[right] = tmp;						//*��str+right��=tmp
		left++;
		right--;
	}
}

//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);			//������arr������arr��Ԫ�صĵ�ַ
//
//	printf("%s\n", arr);			//fedcba
//	return 0;
//}
//�ݹ�ʵ��
void reverse_string1(char* str)
{
	char tmp = *str;
	int len = my_strlen1(str);
	*str = *(str + len - 1);
	*(str + len - 1) = '\0';
	if (my_strlen(str + 1) > 1)
	{
		reverse_string1(str + 1);
	}
	*(str + len -1) = tmp;
}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string1(arr);			//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);
//	return 0;
//}



//дһ���ݹ麯��������һ���Ǹ����������������������֮��
//int DigitSum(int a)
//{
//	int b = 0;
//	if (a/10!=0)
//	{
//		b= a%10 + DigitSum(a / 10);
//	}
//	else
//	{
//		b = a;
//		return b;
//	}
//}
//̫�����ˣ��Ľ�
int DigitSum(int a)
{

	if (a >9)
	{
		return a % 10 + DigitSum(a / 10);
	}
	else
	{
		return a;
	}
}
//int main()
//{
//	int i = 0;
//	printf("������һ�����֣�������������������֮�ͣ�\n");
//	scanf("%d", &i);
//	int sum = DigitSum(i);
//	printf("�������%d����֮��Ϊ��%d\n", i,sum);
//	return 0;
//}


//��ҵ    ʵ��n��k�η�

//int Pow(int n,int k)
//{
//	if (k == 0)
//		return 1;
//	if (k > 0)
//		return n * Pow(n,k - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("����������������������ʵ��n��k�η�\n");
//	scanf("%d %d", &n, &k);
//	printf("%d��%d�η��ǣ�%d\n", n, k, Pow(n, k));
//	return 0;
//}
//��������Ĵ�����һ�����⣬kΪ�����ͻ���������ǸĽ�����

double Pow(int n, int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
		return n * Pow(n, k - 1);
	else
		return 1.0 / Pow(n, -k);
}

//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("����������������������ʵ��n��k�η�\n");
//	scanf("%d %d", &n, &k);
//	printf("%d��%d�η��ǣ�%lf\n", n, k, Pow(n, k));
//	return 0;
//}