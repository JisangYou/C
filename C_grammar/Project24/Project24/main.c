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
//	printf("    변수 변수값     &연산     *연산     **연산\n");
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

/*문자(char)는 'a'처럼 글자가 하나만 있는 상태를 뜻하고 문자열(char *)은 "Hello"처럼 글자 여러 개가 계속 이어진 상태를 뜻합니다. 
즉, 문자는 1바이트 크기의 char에 저장할 수 있지만 문자열은 크기가 1바이트를 넘어서므로 char에 저장할 수 없습니다. 
따라서 문자열은 변수에 직접 저장하지 않고 포인터를 이용해서 저장합니다.*/