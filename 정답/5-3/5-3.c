#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

void bubble(char*, int);

void main() {
	char str[80];

	printf("���ڿ��Է� : ");
	gets(str);
	bubble(str, strlen(str));
	printf("���ڿ��� ���� ������ ��� : %s\n", str);
}

void bubble(char* str, int count) {
	int nPass = 0;
	int nChange = 1;
	char cTemp;

	printf("bubble ����\n");
	while (nPass < count && nChange == 1) {
		nChange = 0;
		for (int i = 0; i < count - nPass - 1; i++) {
			if (str[i] > str[i + 1]) {
				nChange = 1;
				cTemp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = cTemp;
			}
		}
		nPass++;
	}

}