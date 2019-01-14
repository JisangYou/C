#include<stdio.h>

//void print_str(char **pps, int cnt);

int main(void)
{

	// case 1
	//char *ptr_ary[] = { "eagle","tiger","lion","squirrel" };
	//int count;

	//printf("ptr_ary[0]  =  ", ptr_ary[0]);
	//count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	//print_str(ptr_ary, count);

	// case 2
	//int ary[5];
	//printf("ary의 값 : %u\n", ary);
	//printf("ary의 주소 : %u\n", &ary);

	//printf("ary + 1 : %u\n", ary + 1);
	//printf("&ary + 1 : %u\n", &ary + 1);

	int ary[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int(*pa)[4];
	int i, j;

	pa = ary;

	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}

	return 0;
}

//void print_str(char **pps, int cnt)
//{
//	int i;
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf("%s\n", pps[i]);
//	}
//}