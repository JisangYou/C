#include <stdio.h>

// �Լ��� ����, ����, ȣ���� �ִ�.

int add(int x, int y); // �Լ� ����
// �Լ��� ������ �ϴ� ������ �Լ��� ȣ���ϱ� ���� �̸� ��ȯ���� �����Ϸ��� �˸� �ʿ䰡 �ֱ� ������ �̸� ���ִ� �� ����.
// �Լ��� ȣ�����Ŀ� ������ ������ �˻��ϴ� �뵵.


int main(void)
{
	/*
	for (int i = 2; i <= 9; i++)
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i*j);
		}
	*/
	//break���� �ڽ��� �����ϴ� �ݺ��� �ϳ��� ����ϴ�.
	//while �� �ȿ����� �ݺ��� ��� ��ü�� �����.

	int a = 10, b = 20;
	int res;

	res = add(a, b); // �Լ� ȣ��
	printf("result : %d\n", res);


	return 0;
}

// �Լ� ����
int add(int x, int y) {

	int temp;
	temp = x + y;

	return temp;
}