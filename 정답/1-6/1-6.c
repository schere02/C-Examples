#pragma warning(disable:4996)
#include <stdio.h>

void main() {


	for (int month = 0; month != 404;) { //����� �ݺ��Ͽ� Ȯ���ϱ� ���� for��(404�� ����������)
		int days = 0; //��� �ʱ�ȭ

		printf("���� �Է��Ͻÿ�: ");
		scanf("%d", &month);

		//�ǽ� ����
		switch (month) { //switch�� ����: case���� ���迬������ ����� �Ұ����ϴ�.
		case 2:
			days = 28;
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
			days = 31;
			break;
		}
		case 4: case 6: case 9: case 11: {
			days = 30;
			break;
		}
		default:
			printf("���� ���� 1~12 ������ ���� �Դϴ�\n\n");
		};
	
		if (days) //�ʱ�ȭ �� ���� �Էµ��� ������ (month�� 1~12 ���̰� �ƴϸ�) ��µ��� �ʰԲ� ����.
			printf("%d���� �ϼ��� %d���Դϴ�.\n\n", month, days);
	};
}