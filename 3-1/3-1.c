#include<string.h>
#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	char in[50], out[50];
	int i, len;
	int idff = 'a' - 'A';

	printf(" �����Է� : ");
	gets(in);

	len = strlen(in);
	//���ڿ��� �Է��� ���ڿ��� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ�, �� �� ���ڴ� �״�� ����ϴ� ���α׷�.

	/*
	�ڵ��ۼ�
	*/

	printf("��ȯ�� ���� => %s\n", out);
	/*���
	���� �Է� : Hello~!!! Wku.ac.kr ^^*
	��ȯ�� ���� => hELLO~!!! wKU.AC.KR ^^*
	*/
}