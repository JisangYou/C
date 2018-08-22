#include <stdio.h>
#include "headTest.h"

int main() {
	int num1;
	int num2;
	int num3;

	// ������ ���� �Ҵ�
	num1 = 10;
	num2 = 20;
	num3 = 30;

	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("%d\n", num3);
	printf("%s %s\n", "hello", "1234");

	int size;
	size = sizeof num1;
	printf("num1�� ũ��: %d\n", size);
	printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
		sizeof(char),        // 1: sizeof�� char �ڷ����� ũ�⸦ ����
		sizeof(short),       // 2: sizeof�� short �ڷ����� ũ�⸦ ����
		sizeof(int),         // 4: sizeof�� int �ڷ����� ũ�⸦ ����
		sizeof(long),        // 4: sizeof�� long �ڷ����� ũ�⸦ ����
		sizeof(long long)    // 8: sizeof�� long long �ڷ����� ũ�⸦ ����
	);

	//char c1 = 'a';
	//char c2 = 'b';
	//printf("%c, %d\n", c1, c1);

	char c1 = 0x61;    // a�� ASCII �ڵ尪 0x61 �Ҵ�
	char c2 = 0x62;    // b�� ASCII �ڵ尪 0x62 �Ҵ�

	// char�� %c�� ����ϸ� ���ڰ� ��µǰ�, %d�� ����ϸ� ���� ���� ��µ�
	// %x�� ����ϸ� 16������ ��µ�
	printf("%c, %d, 0x%x\n", c1, c1, c1);    // a, 97, 0x61
	printf("%c, %d, 0x%x\n", c2, c2, c2);    // b, 98, 0x62

	// ���� 
	// %x, %X: 16����(hexadecimal)���� hex�� x�� ����մϴ�.

	int result = func(3, 4);
	printf("%d\n", result);

	return 0;
}