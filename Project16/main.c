#include <stdio.h>

void my_gets(char *ps);

int main(void)
{
	/*printf("�ּҰ� : %p\n", "mango");
	printf("ù ��° ���� : %c\n", *"mango");
	printf("�� ��° ���� : %c\n", *("mango"+1));
	printf("�� ��° ���� : %c\n", "mango"[2]);

	char *dessert = "apple";

	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
	dessert = "banana";
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);*/

	char str[80];
	printf("������ ���Ե� ���ڿ� �Է� : ");
	my_gets(str);
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);



	return 0;

}

void my_gets(char *ps)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		*ps = ch;
		ps++;
	}
	*ps = '\0';
}