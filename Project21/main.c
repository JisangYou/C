// 빌드 환경은 디버그와 릴리즈가 있음
// 릴리즈보다 디버그 시에 실행 파일의 크기가 커진다. 그러나 디버깅 할 수 있다.
// 시간복잡도, 공간 복잡도
// 빅오 표기법
// 배열 선언을 했으면, 반드시 초기화를 신경써서 해준다. 디버그시와 릴리즈시 다른 결과를 산출할 수 도....
// 구조체는 다양한 자료형 데이터를 하나의 그룹으로 담은 자료형
// 1. *ptr_int = &int_value 2. int *ptr_int = NULL -> ptr_int = &int_value
// 동적 메모리 할당은 프로그램 실행 도중 동적으로 메모리를 할당하는 것을 말한다. 
// ptr_int = (int *)malloc(sizeof(int)*size), free()

#include<stdio.h>

int main(void)
{


	int ptr_int = (int *)malloc(sizeof(int)*5);
	if (ptr_int != NULL) {
	}
	else {
	
		//ERROR!
	}
	// malloc()에 의해 새롭게 할당 받은 메모리 영역은 쓰레기값으로 채워져 있다. 그러므로, 안정성 측면에서 0으로 초기화 시켜줄 필요가 있다.

	if (ptr_int != NULL) {
		free(ptr_int);
	}
	// 만약 해제를 시켜주지 않으면, 메모리 누수가 일어남
	

	return 0;
}