#include <stdio.h>

//�Լ������͸� �μ��� �����ϴ� ���α׷�
int Add(int a, int b);
int Sub(int a, int b);

void main() {
	int nResult;
	int* p;
	/*�ڵ��ۼ�*/ //�Լ������͸� �����ϱ�
	printf("100�� 200�� ������ �E�� ����\n");
	 
	/*�ڵ��ۼ�*/ //Add()�Լ��� �ּҸ� �����Ϳ� ����
	nResult = p(100, 200);
	printf("������� : %d\n", nResult);

	/*�ڵ��ۼ�*/ //Sub()�Լ��� �ּҸ� �����Ϳ� ����
	nResult = p(100, 200);
	printf("������� : %d\n", nResult);
}

int Add(int a, int b) {
	printf("\nAdd �Լ�\n");
	return a + b;
}

int Sub(int a, int b) {
	printf("\nSub �Լ�\n");
	return a - b;
}

/*���
100�� 300�� ������ ���� ����

Add �Լ�
�������: 300

Sub�Լ�
�������: -100
*/