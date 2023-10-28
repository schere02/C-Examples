#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

//배열의 크기를 입력받고 중간값에 해당하는 원소를 지운 배열을 재 출력하는 프로그램
//배열의 초기크기 n을 입력받음
//n개의 정수 중 중간값을 삭제한 배열로 만든다.
//중간값이 지워진 배열 출력
//크기 n-1의 새로운 배열을 malloc으로 만들어 메모리를 동적 할당하고 realloc사용 안함.

void delete_middle(int* s, int** arr);

void main() {
	int n = 0;
	while (n % 2 != 1) //홀수만 입력
		scanf("%d", &n);
	printf("\n");
	
	//메모리 동적할당
	int* nP = (int*)malloc(sizeof(int) * n);

	//원소 입력 받기
	printf("배열 원소 n개 입력: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &nP[i]);

	//배열의 크기와 포인터(배열)의 주소를 매개변수로 넘김
	delete_middle(&n, &nP);

	//중앙값이 제거된 배열 출력
	for (int i = 0; i < n; i++)
		printf("%d ", nP[i]);

	//메모리 해제
	free(nP);
}

void delete_middle(int* s, int** arr) {
	//중간값을 삭제하므로 배열의 크기가 1줄어듦
	//크기가 1인 줄어든 배열을 할당
	int newSize;
	int* temp;
	/*
	코드작성
	*/

	//메모리를 할당한 temp에 기존의 배열값 복사
	//도중에 중앙값을 만나면 건너뜀
	for (int i = 0; i < *s; i++) {
		//인덱스가 중앙값일 떄
		//(*arr)인덱스를 1 증가시켜서 다음값으로 넘김
		// 중간값을 건너뛰고 다음값부터 저장
 
		/*
		코드작성
		*/
	}

	//메모리해제
	free(*arr);

	//배열와 사이즈 반환해줌.
	*arr = temp;
	*s = newSize;
}

/* 출력
5 (입력)
배열 원소 n개 입력: 1 2 3 4 5 (입력)
1 2 4 5 (출력)
*/