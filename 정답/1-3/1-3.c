#pragma warning(disable:4996)
#include <stdio.h>

void main() {

	while (1) { //����� �ݺ��ؼ� Ȯ���ϱ� ���� while
		int x = 0, y = 0;
		char xy = NULL;
		//�ݺ��ϴ� ���� ���� �ʱ�ȭ, �������� ���� �ݺ��� ���� ����

		printf("**** result *****\n\n");
		printf("input X xy Y == ? ");
		scanf("%d %c %d", &x, & xy, &y);

		rewind(stdin); //�Է��� ��Ʈ�� �ʱ�ȭ��(�ݺ��� ������ ���� ����)

		//���� �ǽ� ����
		if (xy == '*')
			printf("%d * %d = %d\n\n", x, y, x * y);
		else if (xy == '/')
			printf("%d / %d = %d\n\n", x, y, x / y);
		else if (xy == '+')
			printf("%d + %d = %d\n\n", x, y, x + y);
		else if (xy == '-')
			printf("%d - %d = %d\n\n", x, y, x - y);

		else { //�ƹ����ڳ� ������ �ݺ��� Ż��
			printf("�ùٸ��� ���� ��ȣ\n\n");
			break;
		}
	};
}
