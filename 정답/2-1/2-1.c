#include <stdio.h>

void main() {
	int s = 0;
	for (int i = 1; i <= 50; i++) { //for�� �� �ȿ����� ����� i�� ���� �� �ݺ� ���� ���� �ø����� ����
		s += i; //s�� i�� ���ؼ� ����
	}

	printf("Sum from 1 to 50 = %d\n\n", s);
}