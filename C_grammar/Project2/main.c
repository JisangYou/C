#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[20] = "strawberry";
	printf("���� : %s\n", fruit);
	printf("����´ : %s %s\n", fruit, "jam");
	printf("�����ϴ� ���� : %s\n", fruit);

	// fruit = "banana"; -> �̷��Դ� �ȵ�.

	strcpy(fruit, "banana");
	// char �迭�� ���ڿ��� �����ϴ� ������ ������ �ϸ� %s�� ����մϴ�.
	printf("%s\n", fruit);

	int income = 0; //�����(�޸� ������ Ȯ���ϵ��� �����ϴ� ��ӵ� �ܾ�) �ĺ���
	double tax;
	const double tax_rate = 0.12;
	// ������ ������ �� �׾տ� const�� ���̸� �ʱ�ȭ�� ���� �ٲܼ� �����ϴ�.

	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.\n", tax);

	int a;
	scanf("%d", &a);
	// &�� ������ �ּҸ� ���ϴ� ������
	printf("�Էµ� �� : %d\n", a);

	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�\n", age, height);

	//char name[20] -> �迭ũ�Ⱑ 20����Ʈ, �ִ� 19���� ���ڿ��� �Է��� �� �ֽ��ϴ�.
	// null ���ڸ� ������ 1 ����Ʈ�� ������ �ξ�� �մϴ�.

	return 0;
}