#include<stdio.h>

void func(int(*fp)(int, int));
int sum(int, int);
int mul(int, int);
int max(int, int);

int main(void)
{
	// case 1
	/*int sel;
	printf("1. �� ������ ��\n");
	printf("2. �� ������ rhq\n");
	printf("3. �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� �۾��� �����ϼ��� : ");
	scanf_s("%d", &sel);
	switch (sel)
	{
	case 1: func(sum); break;
	case 2: func(mul); break;
	case 3: func(max); break;
	}*/

	// case 2
	/*int(*fp)(int, int);
	int res;

	fp = sum;
	res = fp(10, 20);
	printf("result : %d\n", res);*/

	// case 3

	int a = 10;
	double b = 3.5;
	void *vp;

	vp = &a;
	printf("a : %d\n", *(int *)vp);

	vp = &b;
	printf("b : %.1lf\n", *(double *)vp);

	return 0;

}

//void func(int(*fp)(int, int))
//{
//
//	int a, b;
//	int res;
//
//	printf("�� ������ ���� �Է��ϼ��� : ");
//	scanf_s("%d%d", &a, &b);
//	res = fp(a, b);
//	printf("������� : %d\n", res);
//}
//
//int sum(int a, int b)
//{
//	return (a + b);
//}
//int mul(int a, int b)
//{
//	return (a * b);
//}
//int max(int a, int b)
//{
//	if (a > b) return a;
//	return b;
//}
//int sum(int a, int b)
//{
//	return(a + b);
//}