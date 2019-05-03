#include <stdio.h>

// 자기 참조 구현체
/*
struct list
{
	int num;
	struct list *next;

};

int main(void)
{
	struct list a = { 10,0 }, b = { 20,0 }, c = { 30,0 };
	struct list *head = &a, *current; // 구조체 자신을 가리키는 포인터 멤버

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

// 공용체
// 공용체는 모든 멤버가 하나의 저장 공간을 같이 사용합니다.
// 공용체 변수의 초기화는 중괄호를 사용하여 첫 번쨰 멤버만 초기화합니다.
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

	printf("학번 : %d\n", s1.num);
	s1.grade = 4.4;
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);

	system("pause");
	return 0;
}
*/

enum season { SPRING, SUMMER, FALL, WINTER };

int main(void)
{
	enum season ss;
	char *pc = NULL; // 포인터 초기화 시 반드시 NULL
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
	printf("나의 레저 활동 => %s\n", pc);
	system("pause");
	return 0;
}