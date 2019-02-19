#include <stdio.h>

//int main(void)
//{
//	int a = 10;
//	int *pi;
//	int **ppi;
//
//	pi = &a;
//	ppi = &pi;
//
//	printf("-------------------------------------------------\n");
//	printf("    ���� ������     &����     *����     **����\n");
//	printf("-------------------------------------------------\n");
//	printf("    a%10d%10u\n", a, &a);
//	printf("   pi%10u%10u%10d\n", pi, &pi,*pi);
//	printf("  ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi,**ppi);
//	printf("-------------------------------------------------\n");
//
//	return 0;
//}


void swap_ptr(char **ppa, char *ppb);

int main(void) {

	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	printf("pa -> %s, pb -> %s\n", &pa, &pb);
	swap_ptr(&pa, &pb);
	
	printf("pa -> %s, pb -> %s\n", pa, pb);
	
	return 0;
}

void swap_ptr(char **ppa, char **ppb) 
{
	
	char *pt;
	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}

/*����(char)�� 'a'ó�� ���ڰ� �ϳ��� �ִ� ���¸� ���ϰ� ���ڿ�(char *)�� "Hello"ó�� ���� ���� ���� ��� �̾��� ���¸� ���մϴ�. 
��, ���ڴ� 1����Ʈ ũ���� char�� ������ �� ������ ���ڿ��� ũ�Ⱑ 1����Ʈ�� �Ѿ�Ƿ� char�� ������ �� �����ϴ�. 
���� ���ڿ��� ������ ���� �������� �ʰ� �����͸� �̿��ؼ� �����մϴ�.*/