#include <stdio.h>

//void assign(void);
//
//
//// ���������� �������� �Լ� ������ �����ϰ� ������ ���� ������ Ȯ���ϸ�
//// 1. �޸𸮸� ȿ�������� ���, 2. ����뿡 ����
//// ���� ������ Ư���� ������ �ʱ�ȭ ���� �ʾƵ� 0���� �ڵ� �ʱ�ȭ
//int main(void)
//{
//	
//	// ================================================================
//	auto int a = 0;
//	assign();
//	printf("main �Լ� a : %d\n", a);
//	// ================================================================
//
//	register int i;
//	//�������� ������  CPU �ȿ� �ִ� ��������� �������͸� ����մϴ�.
//	auto int sum = 0;
//
//	for (i = 1; i <= 10000; i++) 
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//
//
//	return 0;
//}
//
//void assign(void)
//{
//	auto int a;
//	a = 10;
//	printf("assign �Լ� a : %d\n", a);
//}


void auto_func(void);
void static_func(void);
int main(void)
{
	int i;

	printf("auto ���� ������ ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}


	printf("static ���� ������ ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}
	return 0;

}

void auto_func(void)
{
	auto int a = 0;
	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;
	a++;
	printf("%d\n", a);
}