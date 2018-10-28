#include <stdio.h>

//void assign(void);
//
//
//// 지역변수의 사용범위를 함수 단위로 제한하고 독립된 저장 공간을 확보하면
//// 1. 메모리를 효율적으로 사용, 2. 디버깅에 유리
//// 전역 변수는 특별한 값으로 초기화 하지 않아도 0으로 자동 초기화
//int main(void)
//{
//	
//	// ================================================================
//	auto int a = 0;
//	assign();
//	printf("main 함수 a : %d\n", a);
//	// ================================================================
//
//	register int i;
//	//레지스터 변수는  CPU 안에 있는 저장공간인 레지스터를 사용합니다.
//	auto int sum = 0;
//
//	for (i = 1; i <= 10000; i++) 
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//
//
//	return 0;
//}
//
//void assign(void)
//{
//	auto int a;
//	a = 10;
//	printf("assign 함수 a : %d\n", a);
//}


void auto_func(void);
void static_func(void);
int main(void)
{
	int i;

	printf("auto 지역 변수를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}


	printf("static 지역 변수를 사용한 함수...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}
	return 0;

}

void auto_func(void)
{
	auto int a = 0;
	a++;
	printf("%d\n", a);
}

void static_func(void)
{
	static int a;
	a++;
	printf("%d\n", a);
}