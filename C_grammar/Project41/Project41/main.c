#include <stdio.h>

// 하나의 파일은 독립적으로 컴파일과 디버깅이 가느애야한다.
// 분할 컴파일된 개체파일은 링크되어 하나의 프로그램이 된다.
// 파일간에 전역변수를 공유할 때는 extern을 쓰고 공유를 제한 할때는  static을 쓴다.

void input_data(int *, int *);
double average(int, int);

int main(void)
{
	int a, b;
	double avg;

	input_data(&a, &b);
	avg = average(a, b);
	printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);

	return 0;
}

#include <stdio.h>

void input_data(int *pa, int *pb)
{
	printf("두 정수 입력:");
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