#include <stdio.h>

//int main(void)
//{
//	char str[80];
//	printf("������ ���Ե� ���ڿ� �Է� : ");
//	fgets(str, sizeof(str), stdin);
//	printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);
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

	//printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	//my_strcpy(str, "apple");
	//printf("�ٲ� �� ���ڿ� : %s\n", str);
	//printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));

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