#include <stdio.h>

// 함수는 선언, 정의, 호출이 있다.

int add(int x, int y); // 함수 선언
// 함수의 선언을 하는 이유는 함수를 호출하기 전에 미리 반환형을 컴파일러에 알릴 필요가 있기 때문에 미리 해주는 게 좋다.
// 함수의 호출형식에 문제가 없는지 검사하는 용도.


int main(void)
{
	/*
	for (int i = 2; i <= 9; i++)
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i*j);
		}
	*/
	//break문은 자신을 포함하는 반복문 하나만 벗어납니다.
	//while 문 안에서는 반복문 블록 전체를 벗어난다.

	int a = 10, b = 20;
	int res;

	res = add(a, b); // 함수 호출
	printf("result : %d\n", res);


	return 0;
}

// 함수 정의
int add(int x, int y) {

	int temp;
	temp = x + y;

	return temp;
}