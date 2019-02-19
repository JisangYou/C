#include <stdio.h>

//int add_ten(int a);
//void add_ten(int *p);
int *sum(int a, int b);


int main(void)
{
	/*int a = 10;
	a = add_ten(a);
	printf("a : %d\n", a);*/

	/*int a = 10;
	add_ten(&a);
	printf("a : %d\n", a);*/

	int *p;
	p = sum(10, 20);
	printf("두 정수의 합 : %d\n", *p);


	return 0;

}


//int add_ten(int a)
//{
//	a = a + 10;
//}

//void add_ten(int *p) {
//	*p = *p + 10;
//}

int *sum(int a, int b)
{
	static int res;

	res = a + b;

	return &res;
}