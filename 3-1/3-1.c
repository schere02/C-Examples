#include<string.h>
#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	char in[50], out[50];
	int i, len;
	int idff = 'a' - 'A';

	printf(" 문자입력 : ");
	gets(in);

	len = strlen(in);
	//문자열을 입력해 문자열의 대문자는 소문자로, 소문자는 대문자로, 그 외 문자는 그대로 출력하는 프로그램.

	/*
	코드작성
	*/

	printf("변환된 문자 => %s\n", out);
	/*출력
	문자 입력 : Hello~!!! Wku.ac.kr ^^*
	변환된 문자 => hELLO~!!! wKU.AC.KR ^^*
	*/
}