#pragma warning(disable:4996)
#include <stdio.h>

void main() {

	int x, y;
	char xy;

	printf("**** result *****\n\n");
	printf("input X xy Y == ? ");
	scanf("%d %c %d", &x, &xy, &y);


	//예제 실습 내용 :2개의 정수와 연산자를 입력받아 연산자에따라 if문으로 결과 출력
	if (xy == '*')
		printf("%d * %d = %d\n\n", x, y, x * y);
	/*코드작성*/
		printf("%d / %d = %d\n\n", x, y, x / y);
	/*코드작성*/
		printf("%d + %d = %d\n\n", x, y, x + y);
	/*코드작성*/
		printf("%d - %d = %d\n\n", x, y, x - y);
}