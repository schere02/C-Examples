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

	//��ȯ
	for (i = 0; i < len; i++) {
		out[i] = "";
		if (in[i] >= 'A' && in[i] <= 'Z') out[i] = in[i] + idff;
		else if (in[i] >= 'a' && in[i] <= 'z') out[i] = in[i] - idff;
		else out[i] = in[i];	
	}
	///���ڿ��� �������� NULL�� ������ ���� ���ڿ��� �����ٰ� �ν��Ѵ�.
	//��, ���ڿ��� ������ index���� NULL(\0)�� �־��ָ� �ȴ�.
	out[len] = NULL;

	printf("��ȯ�� ���� => %s\n", out);
}