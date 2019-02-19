#include <stdio.h>

int get_pos(void);
void print_char(char ch, int cnt);
void fruit(int n);

int main(void) {
	//
	// int res;
	// res = get_pos();
	// printf("반환값 : %d\n", res);
	//
	// print_char('@', 5);
	fruit(1);
	return 0;
}
// 매개변수가 없는 함수.
int get_pos(void) {

	int pos;

	printf("양수 입력 : ");
	scanf("%d", &pos);

	while (pos < 0) {
		printf("음수가 입력되었습니다.\n");
		printf("양수 입력 :");
		scanf("%d", &pos);
	}
	return pos;
}
// 반환값이 없는 함수
void print_char(char ch, int cnt) {
	int i;
	for (i = 0; i < cnt; i++) {
		printf("%c", ch);
	}
}

void fruit(int n) {
	printf("apple\n");
	if (n == 3)return;
	fruit(n + 1);
	printf("jam\n");
}

// 재귀호출 함수는 최초 호출한 곳이 아니라 이 전에 호출했던 곳으로 돌아감.



