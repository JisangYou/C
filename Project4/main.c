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
	// break를 사용하면 적절한 시점에 블록을 탈출하여 필요한 부분만 선택적으로 실행할 수 있습니다. 
	// switch~case 문은 정수값에 따라 실행 문장을 선택하기에 좋은 구조이며 범위를 검사하기에는 적합하지 않습니다.
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