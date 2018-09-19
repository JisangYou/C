#include <stdio.h>
#include <string.h>


int main(void) 
{
/*
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);*/

	//char str[80] = { 'a','p', 'p', 'l', 'e', 'j', 'a', 'm' };
	//char str[80] = "applejam";

	//char str[5];

	//str[0] = '0';
	//str[1] = 'K';
	//printf("%s\n", str);

	/*char str1[80] = "cat";
	char str2[80];
	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);*/

	//char str[80];
	//str = "apple";  -> 에러가 생김

	char str[80];

	printf("문자열 입력 : "); // 입력 안내 메시지 출력
	gets(str);				  // 빈칸을 포함한 문자열 입력
	puts("입력된 문자열 : "); // 문자열 상수 출력
	puts(str);				  // 배열에 저장된 문자열 출력

	return 0;
}