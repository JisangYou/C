#include <stdio.h>
#include "headTest.h"

int main() {
	int num1;
	int num2;
	int num3;

	// 변수에 값을 할당
	num1 = 10;
	num2 = 20;
	num3 = 30;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%s %s\n", "hello", "1234");

	int size;
	size = sizeof num1;
	printf("num1의 크기: %d\n", size);
	printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
		sizeof(char),        // 1: sizeof로 char 자료형의 크기를 구함
		sizeof(short),       // 2: sizeof로 short 자료형의 크기를 구함
		sizeof(int),         // 4: sizeof로 int 자료형의 크기를 구함
		sizeof(long),        // 4: sizeof로 long 자료형의 크기를 구함
		sizeof(long long)    // 8: sizeof로 long long 자료형의 크기를 구함
	);

	//char c1 = 'a';
	//char c2 = 'b';
	//printf("%c, %d\n", c1, c1);

	char c1 = 0x61;    // a의 ASCII 코드값 0x61 할당
	char c2 = 0x62;    // b의 ASCII 코드값 0x62 할당

	// char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정수 값이 출력됨
	// %x로 출력하면 16진수로 출력됨
	printf("%c, %d, 0x%x\n", c1, c1, c1);    // a, 97, 0x61
	printf("%c, %d, 0x%x\n", c2, c2, c2);    // b, 98, 0x62

	// 참고 
	// %x, %X: 16진수(hexadecimal)에서 hex의 x를 사용합니다.

	int result = func(3, 4);
	printf("%d\n", result);

	return 0;
}