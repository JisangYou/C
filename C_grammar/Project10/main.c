#include <stdio.h>

void swap(int *pa, int *pb);


int main(void) {
	/*
	int a = 10, b = 20;
	const int *pa = &a;

	printf("���� a�� : %d\n", *pa);
	pa = &b;
	printf("���� b�� : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("���� a�� : %d\n", *pa);

	int a = 10;
	int *p = &a;
	double *pd;

	pd = p;
	printf("%lf\n", *pd);

	int a = 3;
	int *pd = &a;
	int *pi;
	pi = (int *)pd;
	printf("pi %d\n", *pi);8
	*/

	int a = 10, b = 20;
	swap(&a, &b);
	printf("a:%d, b:%d\n", a, b);

	return 0;
}

void swap(int *pa, int *pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

// �ּҿ� �����ʹ� ����� ������ ���̰� �ִ�. (�ּҴ� ���, �����ʹ� ����)
// �������� ũ��� �ּ��� ũ��� ����.
// �����ʹ� �����͸� �����ϴ� ȿ������ ����� �� �� �ִ�. 
/*
�ּҴ� ������ �Ҵ�� �޸� ���� ������ ���� �ּҰ� ��ü�̰� �����ʹ� �� ���� �����ϴ� �Ǵٸ� �޸� ����
�����ʹ� ����Ű�� ������ ���°� ���� ���� �����ؾ� �մϴ�.
*/

/*
�����Ͱ� �ʿ��� ����?
�޸𸮿� ���� �����ϰų�, ���� �Ҵ��� �ʿ��� ��쿡 �����Ͱ� �ݵ�� �ʿ���.
*/
