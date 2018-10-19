// 키보드로 입력하는 데이터는 일단 버퍼에 저장된 후에 scanf 함수에 의해 변수에 입력됨.
#include <stdio.h>


//void my_gets(char *str, int size);

int main(void) 
{

	//char str[7];

	//my_gets(str, sizeof(str));
	//printf("입력한 문자열 : %s\n", str);

	/*char ch;
	int i;*/

	/*for (i = 0; i < 3; i++) {
		scanf_s("%c", &ch);
		printf("%c", ch);
	}*/
	// 입력 데이터는 엔터를 치는 순간 버퍼에 저장되며 개행문자도 함께 저장됨.

	//while (1) {
	//	scanf_s("%c", &ch);
	//	if (ch == '\n')break;
	//	printf("%c", ch);
	//}
	int num, grade;

	printf("학번 입력 : ");
	scanf_s("%d", &num);
	fflush(stdin);
	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}


//void my_gets(char *str, int size) 
//{
//	char ch;
//	int i = 0;
//
//	ch = getchar();
//	while ((ch != '\n') && (i < size - 1))
//	{
//		str[i] = ch;
//		i++;
//		ch = getchar();
//	}
//	str[i] = '\0';
//}