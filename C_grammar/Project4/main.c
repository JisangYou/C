#include <stdio.h>

int main(void) {
	int a = 20;
	int b = 0;
	if (a > 10) {
		b = a;
	}
	printf("a :%d, b: %d\n", a, b);

	int rank = 2, m = 0;

	switch (rank) {
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default: m = 10;
		break;
	}
	// break�� ����ϸ� ������ ������ ����� Ż���Ͽ� �ʿ��� �κи� ���������� ������ �� �ֽ��ϴ�. 
	// switch~case ���� �������� ���� ���� ������ �����ϱ⿡ ���� �����̸� ������ �˻��ϱ⿡�� �������� �ʽ��ϴ�.
	printf("m : %d\n", m);
	int k = 1;
	while (k < 10) {
		k = k * 2;
		printf("k : %d\n", k);
	}
	printf("k : %d\n", k);

	for (int i = 0; i < 10; i++) {
		printf("Be happy!\n");
	}

	int j = 0;
	while (j < 10) {
		printf("Be happy!\n");
		j++;
	}



	return 0;
}