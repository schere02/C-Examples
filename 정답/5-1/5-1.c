#include <stdio.h>

int Add(int a, int b);
int Sub(int a, int b);

void main() {
	int nResult;
	int(* p)(int, int);
	printf("100�� 200�� ������ �E�� ����\n");
	 
	p =Add;
	nResult = p(100, 200);
	printf("������� : %d\n", nResult);

	p = Sub;
	nResult = p(100, 200);
	printf("������� : %d\n", nResult);
}

int Add(int a, int b) {
	printf("\nAdd �Լ�\n");
	return a + b;
}

int Sub(int a, int b) {
	printf("\nSub �Լ�\n");
	return a - b;
}