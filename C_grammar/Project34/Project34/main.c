#include <stdio.h>

// �ڱ� ���� ����ü
/*
struct list
{
	int num;
	struct list *next;

};

int main(void)
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list *head = &a, *current; // ����ü �ڽ��� ����Ű�� ������ ���

	a.next = &b;
	b.next = &c;

	printf("head->num : %d\n", head->num);
	printf("head->next->num : %d\n", head->next->num);

	printf("list all : ");
	current = head;
	while (current != NULL)
	{
		printf("%d ", current->num);
		current = current->next;
	}
	printf("\n");
	system("pause");
	return 0;
}*/

// ����ü
// ����ü�� ��� ����� �ϳ��� ���� ������ ���� ����մϴ�.
// ����ü ������ �ʱ�ȭ�� �߰�ȣ�� ����Ͽ� ù ���� ����� �ʱ�ȭ�մϴ�.
// union student a ={.grade = 3.4};

/*
union student
{
	int num;
	double grade;
};



int main(void)
{
	union student s1 = { 315 };

	printf("�й� : %d\n", s1.num);
	s1.grade = 4.4;
	printf("���� : %.1lf\n", s1.grade);
	printf("�й� : %d\n", s1.num);

	system("pause");
	return 0;
}
*/

enum season { SPRING, SUMMER, FALL, WINTER };

int main(void)
{
	enum season ss;
	char *pc = NULL; // ������ �ʱ�ȭ �� �ݵ�� NULL
	ss = SPRING;
	switch (ss)
	{
	case SPRING:
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("���� ���� Ȱ�� => %s\n", pc);
	system("pause");
	return 0;
}