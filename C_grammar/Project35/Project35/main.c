#include <stdio.h>

/*
typedef struct student
{
	int num;
	double grade;
}Student;

//struct student
//{
//	int num;
//	double grade;
//};
//typedef struct student Student;
// typedef�� �ڷ����� �������ϸ� ª�� ���� �̸��� ����� �� �ֽ��ϴ�.

void print_data(Student *ps);

int main(void)
{
	Student s1 = { 315,4.2 };
	print_data(&s1);

	system("pause");
	return 0;
}

void print_data(Student *ps)
{
	printf("�й� : %d\n", ps->num);
	printf("���� : %.1lf\n", ps->grade);
}

*/



typedef union
{
	int ea;
	double kg;
	double liter;
}Unit;

typedef struct
{
	char name[20];
	enum {EGG=1, MILK,MEAT} kind;
	Unit amount;
}Gift;

void print_list(Gift a);

int main(void) 
{
	Gift list[5];
	int i;

	for (i = 0; i < 5; i++) 
	{
		printf("�̸� �Է� : ");
		scanf_s("%s", list[i].name,20);
		printf("ǰ�� ����(1.���, 2.����, 3.���) : ");
		scanf_s("%d", &list[i].kind); // ǰ�� ����

		switch (list[i].kind)
		{
		case EGG: list[i].amount.ea = 20; break;
		case MILK: list[i].amount.liter = 4.5; break;
		case MEAT: list[i].amount.kg = 0.6; break;
		}
	}


	printf("# �� ���� ��ǰ ��÷��...\n");
	print_list(list[2]);
	system("pause");
	return 0;
}


void print_list(Gift a)
{
	printf(" �̸� : %s, ���� ǰ�� : ", a.name);
	switch (a.kind)
	{
	case EGG:printf("��� %d��\n", a.amount.ea); break;
	case MILK: printf("���� %.lf����\n", a.amount.liter); break;
	case MEAT: printf("��� %.1lfkg\n", a.amount.kg); break;
	}
}

// ����ü�� ������� ���� ������ �����ϹǷ� �޸𸮸� ���� �� �� �ְ�, �ϳ��� �����͸� �پ��ϰ� �ؼ��� �� �ִ� ����� �����Ѵ�.
// ���� ������ ���鿡�� ����.










