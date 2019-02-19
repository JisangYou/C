#include <stdio.h>

int main(void) {
	/*char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z')) {
		small = cap + ('a' - 'A');
	}

	printf("대문자 : %c %c", cap, '\n');
	printf("소문자 : %c", small); 

	printf"\n");*/

	int ch;
	ch = getchar();
	printf("입력한 문자 : ");
	putchar(ch);
	putchar('\n');

	// -1의 의미?

	return 0;
}