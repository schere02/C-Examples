#pragma warning(disable:4996)
#include <stdio.h>

void main() {


	int month, days;

	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &month);

	//�ǽ� ����: ���� �Է¹޾� �ϼ��� ����ϴ� ���α׷�
	/*
			
	�ڵ��ۼ�
			
	*/


	if (days) //�ʱ�ȭ �� ���� �Էµ��� ������ (month�� 1~12 ���̰� �ƴϸ�) ��µ��� �ʰԲ� ����.
		printf("%d���� �ϼ��� %d���Դϴ�.\n\n", month, days);
}