#include <stdio.h>


// ����ü�� �پ��� �ڷ����� �ϳ��� ���� �� �ִ� ���� �ڷ����̴�. 
// ���� ��Ŀ� ���� �Ҵ�Ǵ� ����� �޶����Ƿ� �е�����Ʈ�� ũ�Ⱑ �޶�����. 
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
//	printf("�й� : %d\n", s1.num);
//	printf("���� : %.1lf\n", s1.grade);
//
//	return 0;
//}





// ����ü�� �μ�ȭ ���Ѽ� ����� �� �ִ�. 
struct vision
{
	double left;
	double right;

};

struct vision exchange(struct vision);

int main(void)
{
	struct vision robot;
	printf(" �÷� �Է� : ");
	scanf_s("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("�ٲ� �÷� : %.1lf", robot.left, robot.right);

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