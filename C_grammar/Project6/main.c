#include <stdio.h>

int get_pos(void);
void print_char(char ch, int cnt);
void fruit(int n);

int main(void) {
	//
	// int res;
	// res = get_pos();
	// printf("��ȯ�� : %d\n", res);
	//
	// print_char('@', 5);
	fruit(1);
	return 0;
}
// �Ű������� ���� �Լ�.
int get_pos(void) {

	int pos;

	printf("��� �Է� : ");
	scanf("%d", &pos);

	while (pos < 0) {
		printf("������ �ԷµǾ����ϴ�.\n");
		printf("��� �Է� :");
		scanf("%d", &pos);
	}
	return pos;
}
// ��ȯ���� ���� �Լ�
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

// ���ȣ�� �Լ��� ���� ȣ���� ���� �ƴ϶� �� ���� ȣ���ߴ� ������ ���ư�.



