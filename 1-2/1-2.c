#pragma warning(disable:4996)
#include <stdio.h>

void main() {
	int num;
	printf("enter a number: ");
	scanf("%d", &num);

	//1-1 switch-case������ �ۼ�
	switch (/*�ڵ��ۼ�*/)
	{
	case -1:
		printf("number is negative\n");
		break;
	default:
		printf("number is positive\n");
		break;
	}
}