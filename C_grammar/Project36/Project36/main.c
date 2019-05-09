#include <stdio.h>

int main(void)
{
	FILE *fp;

	fp = fopen_s(&fp,"a.text", "r");
	if (fp == NULL) {
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}
	printf("파일이 열렸습니다.\n");
	fclose(fp);
	system("pause");
	return 0;
}

// fclose 함수는 닫을 파일의 파일 포인터를 준다. 해당 파일을 성공적으로 닫았을 때는 0을 반환하고 에러가 발생하면 EOF를 반환함
// End Of File의 뜻으로 에러가 발생했는지 또는 파일의 데이터를 모두 읽었는지 확인할 떄 사용

/*
#define EOF (-1)
*/

/*
스트림 파일은 프로그램과 입출력 장치 사이의 다리 역할을 하는 논리적 파일
스트림 파일이 사용하는 구조체의 이름이 FILE입니다.
*/