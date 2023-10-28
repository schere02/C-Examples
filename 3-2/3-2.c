#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

void main() {
	char str[100];
	char ch1, ch2;
	int i;
	
	printf("여러 글자를 입력: ");
	gets(str);

	printf("기존 문자와 새로운 문자: ");
	scanf("%c %c", &ch1, &ch2);

	//문자열을 입력받고, 그 문자열에서 기존문자를 새로운 문자로 대체하는 프로그램

	/*
	코드작성
	*/

	printf("변환된 결과: %s \n", str);
	/*출력
	여러 글자를 입력: hello~!!! wku.ac.kr computer~!!!
	기존 문자와 새로운 문자: e #
	변환된 결과 => h#llo~!!! wku.ac.kr comput#r~!!!
	*/
}