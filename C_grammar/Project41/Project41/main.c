#include <stdio.h>

// �ϳ��� ������ ���������� �����ϰ� ������� �����־��Ѵ�.
// ���� �����ϵ� ��ü������ ��ũ�Ǿ� �ϳ��� ���α׷��� �ȴ�.
// ���ϰ��� ���������� ������ ���� extern�� ���� ������ ���� �Ҷ���  static�� ����.

void input_data(int *, int *);
double average(int, int);

int main(void)
{
	int a, b;
	double avg;

	input_data(&a, &b);
	avg = average(a, b);
	printf("%d�� %d�� ��� : %.1lf\n", a, b, avg);

	return 0;
}

#include <stdio.h>

void input_data(int *pa, int *pb)
{
	printf("�� ���� �Է�:");
	scanf_s("%d%d", pa, pb);
}

double average(int a, int b)
{
	int tot;
	double avg;

	tot = a + b;

	avg = tot / 2.0;
	return avg;
}