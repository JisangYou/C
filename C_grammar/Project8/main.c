#include <stdio.h>
#include <string.h>


int main(void) 
{
/*
	int ary[5];

	ary[0] = 10;
	ary[1] = 20;
	ary[2] = ary[0] + ary[1];
	scanf("%d", &ary[3]);

	printf("%d\n", ary[2]);
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]);*/

	//char str[80] = { 'a','p', 'p', 'l', 'e', 'j', 'a', 'm' };
	//char str[80] = "applejam";

	//char str[5];

	//str[0] = '0';
	//str[1] = 'K';
	//printf("%s\n", str);

	/*char str1[80] = "cat";
	char str2[80];
	strcpy(str1, "tiger");
	strcpy(str2, str1);
	printf("%s, %s\n", str1, str2);*/

	//char str[80];
	//str = "apple";  -> ������ ����

	char str[80];

	printf("���ڿ� �Է� : "); // �Է� �ȳ� �޽��� ���
	gets(str);				  // ��ĭ�� ������ ���ڿ� �Է�
	puts("�Էµ� ���ڿ� : "); // ���ڿ� ��� ���
	puts(str);				  // �迭�� ����� ���ڿ� ���

	return 0;
}