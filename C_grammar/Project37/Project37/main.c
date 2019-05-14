#include <stdio.h>

//int main(void)
//{
//	FILE *fp;
//	int ch;
//
//	fp = fopen_s(&fp,"a.txt", "r");
//	if (fp == NULL) 
//	{
//		printf("파일이 열리지 않았습니다.\n");
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


// fgetc 함수가 하드디스크에 있느 파일의 입력이 끝났음을 확인하는 방법은 파일의 크기와 현재까지 읽어들인 데이터의 크기를 비교하여 판단한다.


int main(void)
{
	FILE *fp;
	char str[] = "banana";
	int i;

	fp = fopen_s(&fp,"b.txt", "w");
	if (fp == NULL)
	{
		printf("파일을 만들지 못했습니다.\n");
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