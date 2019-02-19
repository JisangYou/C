#include <stdio.h>

//void print_ary(int *pa, int size);
void print_ary(int pa[5]);

int main(void)
{
	/*int ary[5] = { 10,20,30,40,50 };*/
	//int ary1[5] = { 10,20,30,40,50 };
	//int ary2[7] = { 10,20,30,40,50,60,70 };

	//print_ary(ary1, 5);
	//printf("\n");
	//print_ary(ary2, 7);
	int ary[5] = { 1,2,3,4,5 };
	print_ary(ary);

	return 0;

}

//void print_ary(int *pa, int size)
//{
//	int i;
//
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", pa[i]);
//	}
//}

void print_ary(int pa[5])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d ", pa[i]);
	}
}


// 함수의 매개변수 자리에 배열을 선언하면 배열명은 포인터로 바뀜.