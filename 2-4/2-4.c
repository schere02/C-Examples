#include <stdio.h>

void main() {

	int i, j, su, dan;

	for (i = 0; i <= 2; i++) { //�࿡�� ���� �Ѿ�� for��
		for (su = 1; su <= 9; su++) { //�ܿ��� 1~9���� ���ϴ� ���� ���
			for (j = 1; j <= 3; j++) { //������ ���� �Ѿ�� �� ���
				dan = 3 * i + j; //�� �࿡�� ��µ� ���� ����
				printf("%d * %d = %2d\t", dan, su, dan * su);
			}
			printf("\n");
		}
		printf("\n");
	}
}