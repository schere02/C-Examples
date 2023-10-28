#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

//동적배열. 초기 배열의 크기를 넘어서면 배열의 크기를 증가시키는 프로그램
//배열의 값을 입력받고, -1을 입력하면 배열 값을 모두 출력
//길이를 늘릴 때, 새로운 배열을 하나 만들어서 증가
//동적할당 malloc을 사용하고, realloc을 사용하지 않음
//최대 크기는 21
//동적으로 할당한 배열을 사용하는 법: (포인터변수)[i]
//동적으로 할당한 배열의 주소: 포인터변수의 값
//동적으로 할당한 배열을 가르키는 법 (*포인터변수)

void size_add(int* s, int** arr);

void main() {
	//사이즈가 3인 배열 할당
	int i = 0;
	int nSize = 3;
	int* nP = (int*)malloc(sizeof(int) * nSize);

	//배열 첫 번쨰 값 입력
	scanf("%d", &nP[0]);

	//-1이 아니면
	if (nP[0] != -1) {
		for (i = 1;; i++) {
			/*코드작성
			(값이 -1이거나, 배열의 크기가 21이면 종료하도록함)
			현재 입력 중인 배열 위치 +1 == 배열의 크기 이면 size_add 실행
			*/
		}
		
		for (int j = 0; j <= i; j++)
			printf("%d ", nP[j]);
	}

	free(nP);
}

//동적배열의 크기를 3크개 만들고, 값을 옯기는 함수
void size_add(int* s, int** arr) {
	int newSize;
	int* temp;
	/*
	코드작성 (새로운 크기의 Size를 획득)
	*s는 배열 크키가 저장된 주소, **arr은 원래배열의 포인터변수의 주소
	newSize에 크기를 저장하고 temp에 새로운 크기로 배열을 할당.

	//temp에 기존의 배열 원소를 복사한다.

	기존의 arr메모리들을 해제한다. free(동적배열 변수이름)
	*/

	*arr = temp;
	*s = newSize;
}

/*출력
	1 2 3 4 5 6 7 8 9 10 -1(사용자입력)
	1 2 3 4 5 6 7 8 9 10 -1(프로그램 출력)

	출력2
	5 4 3 2 1 -1(입력)
	5 4 3 2 1 -1(출력)
*/