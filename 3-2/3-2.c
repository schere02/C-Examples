#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

void main() {
	char str[100];
	char ch1, ch2;
	int i;
	
	printf("���� ���ڸ� �Է�: ");
	gets(str);

	printf("���� ���ڿ� ���ο� ����: ");
	scanf("%c %c", &ch1, &ch2);

	//���ڿ��� �Է¹ް�, �� ���ڿ����� �������ڸ� ���ο� ���ڷ� ��ü�ϴ� ���α׷�

	/*
	�ڵ��ۼ�
	*/

	printf("��ȯ�� ���: %s \n", str);
	/*���
	���� ���ڸ� �Է�: hello~!!! wku.ac.kr computer~!!!
	���� ���ڿ� ���ο� ����: e #
	��ȯ�� ��� => h#llo~!!! wku.ac.kr comput#r~!!!
	*/
}