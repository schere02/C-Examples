#pragma warning(disable:4996)
#include <stdio.h>

void main() {
	for (int i = 0; i == 0;) { //����� �ݺ��ؼ� Ȯ���ϱ� ���� while
		int x = 0, y = 0;
		char xy = NULL;
		//�ݺ��ϴ� ���� ���� ��� �ʱ�ȭ, ������ �鿡�� �ݺ��� �� ����

		printf("**** result *****\n\n");
		printf("input X xy Y == ? ");
		scanf("%d %c %d", &x, & xy, &y);

		rewind(stdin); //�Է��� ��Ʈ�� �ʱ�ȭ��(�ݺ��� ������ ���� ����)

		//���� 1-4 �ǽ� ����
		switch (xy)
		{
		case '*':
			printf("%d * %d = %d\n\n", x, y, x * y);
			break;
		case '/':
			printf("%d / %d = %d\n\n", x, y, x / y);
			break;
		case '+':
			printf("%d + %d = %d\n\n", x, y, x + y);
			break;
		case '-':
			printf("%d - %d = %d\n\n", x, y, x - y);
			break;

		default:
			printf("�߸��� ��ȣ\n\n"); //�ƹ��ų� ������ ����
			i = 1;
			break;
		} 
	}
}
