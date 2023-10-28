#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

//포인터를 활용한 버블 정렬 프로그램
void bubble(char*, int);

void main() {
	char str[80];

	printf("문자열입력 : ");
	gets(str);
	bubble(str, strlen(str));
	printf("문자열을 버블 정렬한 결과 : %s\n", str);
}

void bubble(char* str, int count) {
	int nPass = 0; //반복 수행할 카운터 변수
	int nChange = 1; //교체여부 0, = 교체안함, 1 = 교체함
	char cTemp;

	printf("bubble 영역\n");
	//(n-1)회 nPass 반복수행, 교체가 다 될 떄까지만
	while (/*코드작성*/) {
		nChange = 0;
		//오름차순 정렬, 큰 값으로 문자 교체
		for (/*코드작성*/) {
			if (str[i] > str[i + 1]) {
				nChange = 1;
				cTemp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = cTemp;
			}
		}
		nPass++;
	}

}