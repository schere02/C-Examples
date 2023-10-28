#pragma warning(disable:4996)
#include <stdio.h>

void main() {
	int x, y;
	char xy;

	printf("**** result *****\n\n");
	printf("input X xy Y == ? ");
	scanf("%d %c %d", &x, &xy, &y);


	//예제 1-4 실습 내용
	switch (/*코드작성*/)
	{
		/*코드작성*/
		printf("%d * %d = %d\n\n", x, y, x * y);
		break;
		/*코드작성*/
		printf("%d / %d = %d\n\n", x, y, x / y);
		break;
		/*코드작성*/
		printf("%d + %d = %d\n\n", x, y, x + y);
		break;
		/*코드작성*/
		printf("%d - %d = %d\n\n", x, y, x - y);
	}
}
