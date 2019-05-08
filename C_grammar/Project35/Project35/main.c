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
// typedef로 자료형을 재정의하면 짧고 쉬운 이름을 사용할 수 있습니다.

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
	printf("학번 : %d\n", ps->num);
	printf("학점 : %.1lf\n", ps->grade);
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
		printf("이름 입력 : ");
		scanf_s("%s", list[i].name,20);
		printf("품목 선택(1.계란, 2.우유, 3.고기) : ");
		scanf_s("%d", &list[i].kind); // 품목 선택

		switch (list[i].kind)
		{
		case EGG: list[i].amount.ea = 20; break;
		case MILK: list[i].amount.liter = 4.5; break;
		case MEAT: list[i].amount.kg = 0.6; break;
		}
	}


	printf("# 세 번쨰 경품 당첨자...\n");
	print_list(list[2]);
	system("pause");
	return 0;
}


void print_list(Gift a)
{
	printf(" 이름 : %s, 선택 품목 : ", a.name);
	switch (a.kind)
	{
	case EGG:printf("계란 %d개\n", a.amount.ea); break;
	case MILK: printf("우유 %.lf리터\n", a.amount.liter); break;
	case MEAT: printf("고기 %.1lfkg\n", a.amount.kg); break;
	}
}

// 공용체는 멤버들이 저장 공간을 공유하므로 메모리를 절약 할 수 있고, 하나의 데이터를 다양하게 해석할 수 있는 방법을 제공한다.
// 또한 가독성 측면에서 좋다.










