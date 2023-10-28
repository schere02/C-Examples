#pragma warning(disable:4996)
#include <stdio.h>

void main() {


	int days, month;

	printf("달을 입력하시오: ");
	scanf("%d", &month);

	//실습 내용
			/*
			코드작성
			*/

	if (days) //초기화 후 값이 입력되지 않으면 (month가 1~12 사이가 아니면) 출력되지 않게끔 조정.
		printf("%d월의 일수는 %d일입니다.\n\n", month, days);
}