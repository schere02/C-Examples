#include <stdio.h>

void main() {

	int i, j, su, dan;

	for (/*�ڵ��ۼ�*/) { //�࿡�� ���� �Ѿ�� for��
		for (/*�ڵ��ۼ�*/) { //�ܿ��� 1~9���� ���ϴ� ���� ���
			for (/*�ڵ��ۼ�*/) { //������ ���� �Ѿ�� �� ���
				dan = 3 * i + j; //�� �࿡�� ��µ� ���� ����
				printf("%d * %d = %2d\t", dan, su, dan * su);
			}
			printf("\n");
		}
		printf("\n");
	}

	/* ���
	1 * 1 = 1		2 * 1 = 2		3 * 1 = 3
	1 * 2 = 2		2 * 2 = 4		3 * 2 = 6
	...					...					...
	1 * 9 = 9		2 * 9 = 18		3 * 9 = 36
	
	4 * 1 = 4		5 * 1 = 5		6 * 1 = 6
	4 * 2 = 8		5 * 2 = 10		6 * 2 = 12
	...					...					...
	4 * 9 = 36		5 * 9 = 45		6 * 9 = 54
	
	7 * 1 = 7		8 * 1 = 8		9 * 1 = 9
	7 * 2 = 14		8 * 2 = 16		9 * 2 = 18
	...					...					...
	7 * 9 = 63		8 * 9 = 72		9 * 9 = 81
	*/
}