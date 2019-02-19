#include <stdio.h>
// #include <stdlib.h> // 디버그 파일안에 실행 파일을 실행시키는 것을 확인하기위해...

int main(void)
{

	printf("Be happy!");
	// system("pause");// 시스템 명령으로 제어합니다. 
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d과 %d의 합은 %d입니다. \n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);
	// 정수는 10,8,16 진수로 표현될 수 있습니다. 그러나 C언어는 2진수 상수를 사용하지 않습니다. 

	printf("%.1lf\n", 1e6);
	printf("%.7lf\n", 3.14e-5);
	// 위는 소수점(실수)을 표현하는 예시입니다.

	//변수는 데이터를 넣는 저장 공간이다.

	int a;
	int b, c;
	double da;
	char ch;

	// l-value : 저장공간을 사용하는 변수 
	// r-value : 값으로 사용하는 변수

	a = 10;
	b = a;
	c = a + 20;
	da = 3.5;
	ch = 'A';

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);


	// 변수를 선언하면 처음에는 쓰레기값이 저장되어 있으며
	// 초기화는 쓰레기값을 제거하기 위해 최초로 값을 대입하는 것입니다.
	int aa;
	int bb = 20;
	int cc;

	aa = 10;
	printf("aa:%d\n", aa);
	printf("bb:%d\n", bb);
	printf("cc:%d\n", cc);

	// 정수형을 양수 전용으로 쓰고 싶을 때는 unsigned를 사용합니다.
	unsigned int aaa;
	aaa = 4294967295;
	printf("%d\n", aaa);
	aaa = -1;
	printf("%u\n", aaa);

	return 0;
}