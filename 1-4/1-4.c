#pragma warning(disable:4996)
#include <stdio.h>

void main() {
	int x, y;
	char xy;

	printf("**** result *****\n\n");
	printf("input X xy Y == ? ");
	scanf("%d %c %d", &x, &xy, &y);


	//���� 1-4 �ǽ� ����
	switch (/*�ڵ��ۼ�*/)
	{
		/*�ڵ��ۼ�*/
		printf("%d * %d = %d\n\n", x, y, x * y);
		break;
		/*�ڵ��ۼ�*/
		printf("%d / %d = %d\n\n", x, y, x / y);
		break;
		/*�ڵ��ۼ�*/
		printf("%d + %d = %d\n\n", x, y, x + y);
		break;
		/*�ڵ��ۼ�*/
		printf("%d - %d = %d\n\n", x, y, x - y);
	}
}