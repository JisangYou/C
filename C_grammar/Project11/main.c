#include <stdio.h>

void swap(int x, int y);

int main(void)
{
	/*int a = 10, b = 20;
	swap(a,b);
	printf("a:%d, b:%d\n", a, b);*/

	// �迭�� �������� ����
	//int ary[5] = { 10,20,30,40,50 };

	//printf("�迭�� ��ü�� �� : %u\n", ary);
	//printf("ù ��° �迭 ����� �ּ� : %u\n", &ary[0]);
	//printf("�迭���� ����Ű�� ����� �� : %d\n", *ary);
	//printf("ù ��° �迭 ����� �� : %d\n", ary[0]);

	// �迭���� ������ �������� ù ��° �迭 ����� �ּҷ� �ٲ�.

	/*int ary[3];
	int i;

	*(ary + 0) = 10;
	*(ary + 1) = *(ary + 0) + 10;


	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
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