#include <stdio.h>

void main() {
	int i = 0, j = 1, su = 1, dan;
	while (i < 3) {

		dan = 3 * i + j; //i, j�� ���� ���� �ٲ�� dan�� ���� ����

		if (j <3) { //3�� �ܾ� ��� 2���� tap
			printf("%d * %d = %2d\t", dan, su, dan * su);
			j++;
		}
		else { //3��°������ �ٹٲ��� �Ѵ�.
			printf("%d * %d = %2d\n", dan, su, dan * su);
			j = 1;
			su++;
		}

		if (su > 9) { //�ݺ��� ��, su�� 9�� ������, �ٹٲ�, su �ʱ�ȭ �� i����
			printf("\n");
			su = 1; i++;
		}
	}
}