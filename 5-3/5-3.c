#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

//�����͸� Ȱ���� ���� ���� ���α׷�
void bubble(char*, int);

void main() {
	char str[80];

	printf("���ڿ��Է� : ");
	gets(str);
	bubble(str, strlen(str));
	printf("���ڿ��� ���� ������ ��� : %s\n", str);
}

void bubble(char* str, int count) {
	int nPass = 0; //�ݺ� ������ ī���� ����
	int nChange = 1; //��ü���� 0, = ��ü����, 1 = ��ü��
	char cTemp;

	printf("bubble ����\n");
	//(n-1)ȸ nPass �ݺ�����, ��ü�� �� �� ��������
	while (/*�ڵ��ۼ�*/) {
		nChange = 0;
		//�������� ����, ū ������ ���� ��ü
		for (/*�ڵ��ۼ�*/) {
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