#include <stdio.h>

int main(void)
{
	//int ary[3] = { 10,20,30 };
	//int *pa = ary;
	//int i;

	//printf("배열의 값 : ");

	///*printf("%d","ary : "+ *ary);*/

	//for (i = 0; i < 3; i++)
	//{
	//	printf("%d ", "*pa " + *pa);
	//	/*printf("%d ", "ary " + *ary);*/
	//	pa++;
	//}


	int ary[5] = { 10,20,30,40,50 };
	int *pa = ary;
	int *pb = pa + 3;

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++;
	printf("pb - pa : %u\n", pb - pa);
	// (40-32)/sizeof(int) -> 8/4 -> 2
	// 포인터 - 포인터 = 값의 차 / 가리키는 자료형의 크기

	printf("앞에 있는 배열 요소의 값 출력 : ");
	if (pa < pb)printf("%d\n", *pa);
	else printf("d\n", *pb);


	return 0;
}