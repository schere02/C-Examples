#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	char* ps;
	char st[11] = { 0 };
	ps = st;
	printf("���ڿ� �Է� (10����Ʈ �̳�) : __________\b\b\b\b\b\b\b\b\b\b");
	scanf("%s", st, sizeof(st));
	for (int i = 0; i < 10; i++) {
		printf("*(ps+ %d) : %c\n", i, *(ps + i));
	}
}