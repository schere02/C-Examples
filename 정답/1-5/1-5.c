#pragma warning(disable:4996)
#include <stdio.h>

void main() {
		

	for (int month = 0; month != 404;) { //����� �ݺ��Ͽ� Ȯ���ϱ� ���� for��(404�� ����������)
		int days = 0; //��� �ʱ�ȭ

		printf("���� �Է��Ͻÿ�: ");
		scanf("%d", &month);

		//�ǽ� ����
		if (month > 12 || month < 1) //1~12 ������ ���� �ޱ�
			printf("���� ���� 1~12������ �����Դϴ� \n\n");
		else if (month == 2) //2���� ����
			days = 28;
		else if ((month <= 7 && month % 2 == 0) || (month > 7 && month % 2 == 1)) //������ ���� ����, if�� ����. ������ '����'�� ������ �� ����
			days = 30;
		else
			days = 31;


		if (days) //�ʱ�ȭ �� ���� �Էµ��� ������ (month�� 1~12 ���̰� �ƴϸ�) ��µ��� �ʰԲ� ����.
			printf("%d���� �ϼ��� %d���Դϴ�.\n\n", month, days);
	};
}