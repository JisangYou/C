// 포인터는 메모리를 사용하는 또 다른 방법이다.
// 주소 연산자로 변수가 할당된 메모리의 위치를 확인한다.
// 포인터로 가리키는 변수를 사용할 때 간접 참조 연산자를 쓴다. 
// 포인터는 변수의 메모리 주소를 저장하는 변수다.
// 주소 연산자, 포인터, 간접 참조 연산자
// 주소는 변수가 할당된 메모리 공간의 시작 주소를 사용합니다. 

#include <stdio.h>

int main(void) {

	//int a;
	//double b;
	//char c;

	//printf("int형 변수의 주소 : %u\n", &a);
	//printf("double형 변수의 주소 : %u\n", &b);
	//printf("char형 변수의 주소 : %u\n", &c);

	//int *pa;
	//pa = &a;
	//*pa = 10;
	//printf("포인터로 a값 출력 : %d\n", *pa);
	//printf("변수명으로 a값 출력 : %d\n", a);
	// 포인터가 가리키는 변수를 사용할 때는 간첩참조 연산자를 사용하며, 사용한 결과는 가리키는 변수와 완전히 같습니다. 

	int a = 10, b = 15, tot;
	double avg;
	int *pa, *pb;
	int *pt = &tot;
	double *pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("두 정수의 값 : %d, %d\n", *pa, *pb);
	printf("두 정수의 합 : %d\n", *pt);
	printf("두 정수의 평균 : %.1lf\n", *pg);

	return 0;

}