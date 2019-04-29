#include<stdio.h>



struct score
{
	int kor;
	int eng;
	int mat;
};

int main(void)
{
	struct score yuni = { 90,80,70 };	// 구조체 변수 선언과 초기화
	struct score *ps = &yuni;			// 구조체 포인터에 주소 저장

	printf("국어 : %d\n", (*ps).kor); // 구조체 포인터로 멤버 접근
	printf("영어 : %d\n", ps->eng);		// -> 연산자 사용
	printf("수학 : %d\n", ps->mat);
	printf("test : %d\n", yuni.kor);
	printf("test2 : %d\n", *ps);

	system("pause");
	return 0;
	// return 0, return ; 은 해당 함수를 정상적으로 끝내고서 운영체제에게 기술한 값을 반환하고 
	// 현재 실행 중인 해당 함수를 벗어나겠다는 뜻이다.
	// return -1, 1 등 다른 수도 될 수 있지만 일반적으로 0으로 리턴하면 해당함수를 성공적으로 끝냈다는 의미이디ㅏ.
	// 운영체제의 쉘에서 0은 true로 간주

}

// (*ps).eng -> ps -> eng



/*
struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};


int main(void) {

	struct address list[5] = {
		{"홍길동",23,"111-1111","울릉도 독도"},
		{"이순신",35,"222-2222","서울 건천동"},
		{"장보고",19,"333-3333","완도 청해진"},
		{"유관순",15,"444-4444","충남 천안"},
		{"안중근",45,"555-5555","황해도 해주"}
	};
	int i;
	for (i = 0; i < 5; i++) 
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr); // 각 배열의 요소의 멤버 출력
	}
	system("pause");
	return 0;
}
*/