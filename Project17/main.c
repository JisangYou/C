#include <stdio.h>

//int main(void)
//{
//	char str[80];
//	printf("공백이 포함된 문자열 입력 : ");
//	fgets(str, sizeof(str), stdin);
//	printf("입력된 문자열은 %s입니다\n", str);
//
//	return 0;
//}

//int main(void)
//{
//	char str[80] = "apple juice";
//	char *ps = "banana";
//
//	puts(str);
//	fputs(ps, stdout);
//	puts("milk");
//
//
//	return 0;
//}


//char *my_strcpy(char *pd, char *ps);

int main(void)
{

	char str[80] = "apple";
	printf("%d\n", sizeof(str));
	printf("%d\n", strlen(str));
	//char str[80] = "strawberry";

	//printf("바꾸기 전 문자열 : %s\n", str);
	//my_strcpy(str, "apple");
	//printf("바꾼 후 문자열 : %s\n", str);
	//printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));

	return 0;
}

//char *my_strcpy(char *pd, char *ps)
//{
//	char *po = pd;
//	while (*ps != '\0')
//	{
//		*pd = *ps;
//		pd++;
//		ps++;
//	}
//	*pd = '\0';
//
//	return po;
//}


int my_strlen(char *ps)
{
	int cnt = 0;
	while (*ps != '\0')
	{
		cnt++;
		ps++;
	}
	return cnt;
}