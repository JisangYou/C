#include <stdio.h>
//#include "student.h"
//
//
//int main(void)
//{
//	Student a = { 315,"홍길동" };
//	printf("학번 : %d, 이름 : %s\n", a.num, a.name); // 구조체 멤버 출력
//
//	return 0;
//}

//void func(void);
//
//int main(void)
//{
//	printf("컴파일 날짜와 시간 : %s, %s\n\n", __DATE__, __TIME__);
//	printf("파일명 : %s\n", __FILE__);
//	printf("함수명 : %s\n", __FUNCTION__);
//	printf("행번호 : %d\n", __LINE__);
//
//
//#line 100 "macro.c"
//	func();
//
//	return 0;
//}
//
//void func(void)
//{
//	printf("\n");
//	printf("파일명 : %s\n", __FILE__);
//	printf("함수명 : %s\n", __FUNCTION__);
//	printf("행번호 : %d\n", __LINE__);
//}



#pragma pack(push,1)
typedef struct
{
	char ch;
	int in;
}Sample1;

#pragma pack(pop)
typedef struct
{
	char ch;
	int in;
}Sample2;

int main(void)
{
	printf("Smaple1 구조체의 크기 : %d바이트\n", sizeof(Sample1));
	printf("Smaple2 구조체의 크기 : %d바이트\n", sizeof(Sample2));

	return 0;
}