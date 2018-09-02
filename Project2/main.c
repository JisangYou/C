#include <stdio.h>
#include <string.h>

int main(void)
{
	char fruit[20] = "strawberry";
	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n", fruit, "jam");
	printf("좋아하는 과일 : %s\n", fruit);

	// fruit = "banana"; -> 이렇게는 안됨.

	strcpy(fruit, "banana");
	// char 배열은 문자열을 저장하는 변수의 역할을 하며 %s로 출력합니다.
	printf("%s\n", fruit);

	int income = 0; //예약어(메모리 공간을 확보하도록 지시하는 약속된 단어) 식별자
	double tax;
	const double tax_rate = 0.12;
	// 변수를 선언할 때 그앞에 const를 붙이면 초기화된 값을 바꿀수 없습니다.

	income = 456;
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	int a;
	scanf("%d", &a);
	// &는 변수의 주소를 구하는 연산자
	printf("입력된 값 : %d\n", a);

	return 0;
}