#include <stdio.h>

void main() {
	int i = 1, s = 0;
	do {
		s += i; i++;
	} while (i <= 50); //do���� �� ���� �� �Ǵ�

	printf("Sum from 1 to 50 = %d\n\n", s);

}