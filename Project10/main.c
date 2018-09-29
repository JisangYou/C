#include <stdio.h>

void swap(int *pa, int *pb);


int main(void) {
	/*
	int a = 10, b = 20;
	const int *pa = &a;

	printf("변수 a값 : %d\n", *pa);
	pa = &b;
	printf("변수 b값 : %d\n", *pa);
	pa = &a;
	a = 20;
	printf("변수 a값 : %d\n", *pa);

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

// 주소와 포인터는 상수와 변수의 차이가 있다. (주소는 상수, 포인터는 변수)
// 포인터의 크기는 주소의 크기와 같다.
// 포인터는 데이터를 공유하는 효과적인 방법이 될 수 있다. 
/*
주소는 변수에 할당된 메모리 저장 공간의 시작 주소값 자체이고 포인터는 그 값을 저장하는 또다른 메모리 공간
포인터는 가리키는 변수의 형태가 같을 때만 대입해야 합니다.
*/

/*
포인터가 필요한 이유?
메모리에 직접 접근하거나, 동적 할당이 필요한 경우에 포인터가 반드시 필요함.
*/
