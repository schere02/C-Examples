#pragma warning(disable:4996)
#include <stdio.h>

void main() {
	
	//���ǹ��� ���� �����̳�, ���� �� ����� �ѹ��� Ȯ���ϱ� ���� �ݺ����� ���

	for (int num = 0; num != 404;) { //404(���� ��)�� �ֱ� ������ �ݺ��ؼ� ����� Ȯ���ϱ� ���� while��
		printf("enter a number: ");
		scanf("%d", &num);

		//�ǽ�����
		switch (num >> 31)
		{
		case 404: //���ǰ� �Է½� �ٸ� ���� ���� �ݺ����� ���� ������ ���� �߰�
			break;
		case -1:
			printf("number is negative\n");
			break;
		default:
			printf("number is positive\n");
			break;
		}
	 }
};