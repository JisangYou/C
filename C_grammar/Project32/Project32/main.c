#include<stdio.h>



struct score
{
	int kor;
	int eng;
	int mat;
};

int main(void)
{
	struct score yuni = { 90,80,70 };	// ����ü ���� ����� �ʱ�ȭ
	struct score *ps = &yuni;			// ����ü �����Ϳ� �ּ� ����

	printf("���� : %d\n", (*ps).kor); // ����ü �����ͷ� ��� ����
	printf("���� : %d\n", ps->eng);		// -> ������ ���
	printf("���� : %d\n", ps->mat);
	printf("test : %d\n", yuni.kor);
	printf("test2 : %d\n", *ps);

	system("pause");
	return 0;
	// return 0, return ; �� �ش� �Լ��� ���������� ������ �ü������ ����� ���� ��ȯ�ϰ� 
	// ���� ���� ���� �ش� �Լ��� ����ڴٴ� ���̴�.
	// return -1, 1 �� �ٸ� ���� �� �� ������ �Ϲ������� 0���� �����ϸ� �ش��Լ��� ���������� ���´ٴ� �ǹ��̵�.
	// �ü���� ������ 0�� true�� ����

}

// (*ps).eng -> ps -> eng



/*
struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};


int main(void) {

	struct address list[5] = {
		{"ȫ�浿",23,"111-1111","�︪�� ����"},
		{"�̼���",35,"222-2222","���� ��õ��"},
		{"�庸��",19,"333-3333","�ϵ� û����"},
		{"������",15,"444-4444","�泲 õ��"},
		{"���߱�",45,"555-5555","Ȳ�ص� ����"}
	};
	int i;
	for (i = 0; i < 5; i++) 
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr); // �� �迭�� ����� ��� ���
	}
	system("pause");
	return 0;
}
*/