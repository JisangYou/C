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

	printf("a�� �� : %d, b�� �� : %d\n", a, b);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", sub);
	printf("���� : %d\n", mul);
	printf("a�� �������� : %d\n", inv);


	// cpu�� �޸𸮸� �������Ͷ���ϸ�, ���⿡ ������ �����Ϳ� ���� ���� ����� �ӽ� ����
	// �޸𸮿� ���� �����ϴ�. 


	int aa = 10, bb = 10;
	++aa;
	--bb;
	printf("aa : %d\n", aa);
	printf("bb : %d\n", bb);

	// a = 5 �� a�� 5�� �����ϴ� ��, a==5�� a�� 5�� �������� Ȯ���ϴ� ��

	int aaa = 10, bbb = 20;
	int res = 2;
	aaa+= 20;
	res *= bbb + 10;
	printf("aaa = %d, bbb = %d\n", aaa, bbb);
	printf("res = %d\n", res);

	return 0;
}