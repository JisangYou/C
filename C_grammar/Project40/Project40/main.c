#include <stdio.h>
//#include "student.h"
//
//
//int main(void)
//{
//	Student a = { 315,"ȫ�浿" };
//	printf("�й� : %d, �̸� : %s\n", a.num, a.name); // ����ü ��� ���
//
//	return 0;
//}

//void func(void);
//
//int main(void)
//{
//	printf("������ ��¥�� �ð� : %s, %s\n\n", __DATE__, __TIME__);
//	printf("���ϸ� : %s\n", __FILE__);
//	printf("�Լ��� : %s\n", __FUNCTION__);
//	printf("���ȣ : %d\n", __LINE__);
//
//
//#line 100 "macro.c"
//	func();
//
//	return 0;
//}
//
//void func(void)
//{
//	printf("\n");
//	printf("���ϸ� : %s\n", __FILE__);
//	printf("�Լ��� : %s\n", __FUNCTION__);
//	printf("���ȣ : %d\n", __LINE__);
//}



#pragma pack(push,1)
typedef struct
{
	char ch;
	int in;
}Sample1;

#pragma pack(pop)
typedef struct
{
	char ch;
	int in;
}Sample2;

int main(void)
{
	printf("Smaple1 ����ü�� ũ�� : %d����Ʈ\n", sizeof(Sample1));
	printf("Smaple2 ����ü�� ũ�� : %d����Ʈ\n", sizeof(Sample2));

	return 0;
}