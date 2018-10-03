#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	/*int a = 10, b = 20;
	swap(a,b);
	printf("a:%d, b:%d\n", a, b);*/

	// 배열과 포인터의 관계
	//int ary[5] = { 10,20,30,40,50 };

	//printf("배열명 자체의 값 : %u\n", ary);
	//printf("첫 번째 배열 요소의 주소 : %u\n", &ary[0]);
	//printf("배열명이 가리키는 요소의 값 : %d\n", *ary);
	//printf("첫 번째 배열 요소의 값 : %d\n", ary[0]);

	// 배열명은 컴파일 과정에서 첫 번째 배열 요소의 주소로 바뀜.

	/*int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;


	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf_s("%d", ary + 2);

	for (i = 0; i < 3; i++)
	{
		printf("%5d", *(ary + i));
	}
*/
	int ary[3];
	int *pa = ary;
	int i;

	*pa = 10;
	*(pa + 1) = 20;
	pa[2] = pa[0] + pa[1];
	
	for (i = 0; i < 3; i++) 
	{
		printf("%5d", pa[i]);
	}


	return 0;
}

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}