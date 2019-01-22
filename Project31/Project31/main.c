#include <stdio.h>


// 구조체는 다양한 자료형을 하나로 묶을 수 있는 복합 자료형이다. 
// 선언 방식에 따라 할당되는 방식이 달라지므로 패딩바이트의 크기가 달라진다. 
//struct student
//{
//	int num;
//	double grade;
//};
//
//int main(void)
//{
//	struct student s1;
//	s1.num = 2;
//	s1.grade = 2.7;
//	printf("학번 : %d\n", s1.num);
//	printf("학점 : %.1lf\n", s1.grade);
//
//	return 0;
//}





// 구조체를 인수화 시켜서 사용할 수 있다. 
struct vision
{
	double left;
	double right;

};

struct vision exchange(struct vision);

int main(void)
{
	struct vision robot;
	printf(" 시력 입력 : ");
	scanf_s("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("바뀐 시력 : %.1lf", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}