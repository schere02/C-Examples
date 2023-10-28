#include <stdio.h>

//함수포인터를 인수로 전달하는 프로그램
int Add(int a, int b);
int Sub(int a, int b);

void main() {
	int nResult;
	int* p;
	/*코드작성*/ //함수포인터를 정의하기
	printf("100과 200의 덧셈과 뺼셈 연산\n");
	 
	/*코드작성*/ //Add()함수의 주소를 포인터에 대입
	nResult = p(100, 200);
	printf("덧셈결과 : %d\n", nResult);

	/*코드작성*/ //Sub()함수의 주소를 포인터에 대입
	nResult = p(100, 200);
	printf("뺄셈결과 : %d\n", nResult);
}

int Add(int a, int b) {
	printf("\nAdd 함수\n");
	return a + b;
}

int Sub(int a, int b) {
	printf("\nSub 함수\n");
	return a - b;
}

/*출력
100과 300의 덧셈과 뺄셈 연산

Add 함수
덧셈결과: 300

Sub함수
뺄셈결과: -100
*/