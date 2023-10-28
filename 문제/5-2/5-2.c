#include <stdio.h>
#pragma warning(disable:4996)

//배열을 이용한 포인터 활용 프로그램
void main() {
	char* ps;
	char st[11] = { 0 };
	/*코드작성*/ //배열요소를 포인터에 대입

	printf("문자열 입력 (10바이트 이내) : __________\b\b\b\b\b\b\b\b\b\b");
	scanf("%s", st, sizeof(st));

	for (int i = 0; i < 10; i++) {
		printf("*(ps+ %d) : %c\n", i, /*코드작성*/);
	}
}
/*출력
문자열 입력 (10바이트 이내): abedefghij
*(ps + 0) : a
*(ps + 1) ; b
...
*(ps + 9) : j
*/