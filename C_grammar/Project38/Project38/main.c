#include <stdio.h>

//int main(void)
//{
//	// 운영체제는 프로그램을 실행할 떄 기본적으로 3개의 스트림 파일을 만듭니다. 
//
//	// 스트림 파일명
//	// stdin 표준 입력 스트림
//	// stdout 표준 출력 스트림
//	// stderr 표준 에러 스트림
//
//	int ch;
//
//	while (1)
//	{
//		ch = fgetc(stdin);
//		if (ch == EOF)
//		{
//			break;
//		}
//		fputc(ch, stdout);
//	}
//	system("pause");
//	return 0;
//}


// 파일은 데이터의 기록 방식에 따라 텍스트 파일과 바이너리 파일로 나누어진다.
// 텍스트 파일은 데이터를 아스키 코드값에 따라 저장한 것이며 그 이외의 방식으로 저장된 파일은 바이너리 파일


int main(void) 
{
	FILE *fp;
	int ary[10] = { 13,10,13,13,10,26,13,10,13,10 };
	int i, res;

	fp = fopen_s(&fp,"a.txt", "wb");
	for (i = 0; i < 10; i++)
	{
		fputc_s(ary[i], fp);
	}
	fclose(fp);

	fp = fopen_s(&fp,"a.txt", "rt");
	while (1) 
	{
		res = fgetc(fp);
		if (res == EOF) break;
		printf("%4d", res);
	}
	fclose(fp);
	system("pause");
	return 0;

}