#pragma warning(disable:4996)
#include <stdio.h>

void main() {

	int x, y;
	char xy;

	printf("**** result *****\n\n");
	printf("input X xy Y == ? ");
	scanf("%d %c %d", &x, &xy, &y);


	//���� �ǽ� ���� :2���� ������ �����ڸ� �Է¹޾� �����ڿ����� if������ ��� ���
	if (xy == '*')
		printf("%d * %d = %d\n\n", x, y, x * y);
	/*�ڵ��ۼ�*/
		printf("%d / %d = %d\n\n", x, y, x / y);
	/*�ڵ��ۼ�*/
		printf("%d + %d = %d\n\n", x, y, x + y);
	/*�ڵ��ۼ�*/
		printf("%d - %d = %d\n\n", x, y, x - y);
}