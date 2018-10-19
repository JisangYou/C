#include <stdio.h>

void my_gets(char *ps);

int main(void)
{
	/*printf("주소값 : %p\n", "mango");
	printf("첫 번째 문자 : %c\n", *"mango");
	printf("두 번째 문자 : %c\n", *("mango"+1));
	printf("세 번째 문자 : %c\n", "mango"[2]);

	char *dessert = "apple";

	printf("오늘 후식은 %s입니다.\n", dessert);
	dessert = "banana";
	printf("내일 후식은 %s입니다.\n", dessert);*/

	char str[80];
	printf("공백이 포함된 문자열 입력 : ");
	my_gets(str);
	printf("입력한 문자열은 %s입니다.", str);



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