#include <stdio.h>

//int main(void)
//{
//	FILE *fp;
//	int ch;
//
//	fp = fopen_s(&fp,"a.txt", "r");
//	if (fp == NULL) 
//	{
//		printf("������ ������ �ʾҽ��ϴ�.\n");
//		return 1;
//	}
//
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (ch == EOF)
//		{
//			break;
//		}
//		putchar(ch);
//	}
//	fclose(fp);
//	system("pause");
//	return 0;
//}


// fgetc �Լ��� �ϵ��ũ�� �ִ� ������ �Է��� �������� Ȯ���ϴ� ����� ������ ũ��� ������� �о���� �������� ũ�⸦ ���Ͽ� �Ǵ��Ѵ�.


int main(void)
{
	FILE *fp;
	char str[] = "banana";
	int i;

	fp = fopen_s(&fp,"b.txt", "w");
	if (fp == NULL)
	{
		printf("������ ������ ���߽��ϴ�.\n");
		return 1;
	}

	i = 0;
	while (str[i] != '\0')
	{
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);
	system("pause");
	return 0;
}