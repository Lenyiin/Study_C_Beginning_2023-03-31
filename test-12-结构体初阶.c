#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//P87-P87


//�ṹ��
//1.�ṹ�����͵�����
//2.�ṹ���ʼ��
//3.�ṹ���Ա�ķ���
//4.�ṹ�崫��

//�ṹ�壺�ṹ��һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա�������ṹ��ÿ����Ա�����ǲ�ͬ���͵ı���
//���飺һ����ͬ���͵�Ԫ��

////����һ������
//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//struct Stu				//struct �ṹ��ؼ���		Stu �ṹ������
//{
//	//��Ա����
//	struct B sb;		//�ṹ��ĳ�Ա����������Ľṹ��
//	char name[20];		//����
//	int age;			//����
//	char id[20];		//ѧ��
//}s1,s2;					//s1��s2Ҳ�ǽṹ�����
////s1��s2��ʹ�� struct Stu �ṹ�����ʹ�������������  ȫ�ֽṹ�����
//
//int main()
//{
//	//����һ������
//	struct Stu s = { {'w',20,3.14},"����",30,"20230423" };	//����һ������������s�������г�ʼ��
//	//s�Ǿֲ�����
//
//	//�ṹ�����
//	//.  ->
//	printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);
//
//	struct Stu* ps = &s;			//�ṹ����ָ��
//	printf("%c\n", (*ps).sb.c);		//.���ʵķ�ʽ
//	printf("%c\n", ps->sb.c);		//->���ʵķ�ʽ		sb����ָ�룬���Բ�����->��ֻ����.
//	return 0;
//}
////�ṹ���Ա���ͣ��ṹ��ĳ�Ա�����Ǳ��������顢ָ�롢�����������ṹ��


////�ṹ�崫��
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//}
//void print2(struct Stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	struct Stu s1 = { {'w',20,3.14},"����",30,"20230423" };
//	print1(s1);		//��ֵ����			�ռ��ʱ�䶼������޴��˷�
//	print2(&s1);	//��ַ����
//	//���ѡ��һ�֣���ѡ��2��
//	return 0;
//}
//�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½�


//ջ����һ�����ݽṹ���Ƚ��ĺ����������ȳ���
//int Add2(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	c = Add2(a, b);				//�������󴫲Σ��ȴ�b���ٴ�a
//	printf("%d\n", c);
//	return 0;
//}
//ÿ���������ã��������ڴ��ջ���Ͽ���һ��ռ�
//����ջ֡�Ĵ���������

//int count_num_of_1_1(unsigned int num)
//{
//	int count = 0;
//	while (num)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	return count;
//}
//
//int count_num_of_1_2(int num)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (num & (1 << i))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//int count_num_of_1_3(int num)
//{
//	int count = 0;
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	// int n = count_num_of_1_1(num);
//	// int n = count_num_of_1_2(num);
//	int n = count_num_of_1_3(num);
//	printf("%d\n", n);
//
//	return 0;
//}

//int count_diff_bit_1(int m, int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if(((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//
//	return count;
//}
//
//int count_diff_bit_2(int m, int n)
//{
//	int count = 0;
//	// ^ ��������
//	// ��ͬΪ0������Ϊ1
//	int ret = m ^ n;
//	// ͳ��һ��ret�ж�����λ�м���1
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	// int ret = count_diff_bit_1(m, n);
//	int ret = count_diff_bit_2(m, n);
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//
//	// ��ȡ����λ������
//	for(i=30; i>=0; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	// ��ȡż��λ������
//	for(i=31; i>=1; i-=2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//
//	return 0;
//}



//// ȫ�ֱ�������̬�������Ƿ��ھ�̬��
//// ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ0
//// �ֲ��������Ƿ���ջ��������ʼ����Ĭ��ֵ�����ֵ
//int i;						// û�г�ʼ����Ĭ��ֵ��0
//int main()
//{
//	i--;					// -1
//	// sizeof ������������㷵�صĽ���� size_t ���͵ģ����޷������͵ġ�
//	// �з��ź��޷��űȽϵ�ʱ�򣬻ᷢ������ת�����з��Ż�ת�����޷��š�		-1 ��ת����һ���ǳ������
//	if(i>sizeof(i))			// -1 > 4
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//
//	return 0;
//}

//int is_leap_year(int y)
//{
//	return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
//}

//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		int d = days[m];
//		if((m == 2) && (is_leap_year(y) == 1))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//
//	return 0;
//}