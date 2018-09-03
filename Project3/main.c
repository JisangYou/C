#include<stdio.h>

int main(void) {
	int a, b;
	int sum, sub, mul, inv;
	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a의 값 : %d, b의 값 : %d\n", a, b);
	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);
	printf("a의 음수연산 : %d\n", inv);


	// cpu의 메모리를 레지스터라고하며, 여기에 연산할 데이터와 연산 후의 결과를 임시 저장
	// 메모리에 비해 빠릅니다. 


	int aa = 10, bb = 10;
	++aa;
	--bb;
	printf("aa : %d\n", aa);
	printf("bb : %d\n", bb);

	// a = 5 는 a에 5를 대입하는 것, a==5는 a와 5가 같은지를 확인하는 것

	int aaa = 10, bbb = 20;
	int res = 2;
	aaa+= 20;
	res *= bbb + 10;
	printf("aaa = %d, bbb = %d\n", aaa, bbb);
	printf("res = %d\n", res);

	return 0;
}