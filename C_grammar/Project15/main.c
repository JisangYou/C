// Ű����� �Է��ϴ� �����ʹ� �ϴ� ���ۿ� ����� �Ŀ� scanf �Լ��� ���� ������ �Էµ�.
#include <stdio.h>


//void my_gets(char *str, int size);

int main(void) 
{

	//char str[7];

	//my_gets(str, sizeof(str));
	//printf("�Է��� ���ڿ� : %s\n", str);

	/*char ch;
	int i;*/

	/*for (i = 0; i < 3; i++) {
		scanf_s("%c", &ch);
		printf("%c", ch);
	}*/
	// �Է� �����ʹ� ���͸� ġ�� ���� ���ۿ� ����Ǹ� ���๮�ڵ� �Բ� �����.

	//while (1) {
	//	scanf_s("%c", &ch);
	//	if (ch == '\n')break;
	//	printf("%c", ch);
	//}
	int num, grade;

	printf("�й� �Է� : ");
	scanf_s("%d", &num);
	fflush(stdin);
	printf("���� �Է� : ");
	grade = getchar();
	printf("�й� : %d, ���� : %c", num, grade);

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