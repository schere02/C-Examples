#include <stdio.h>
#pragma warning(disable:4996)

//�迭�� �̿��� ������ Ȱ�� ���α׷�
void main() {
	char* ps;
	char st[11] = { 0 };
	/*�ڵ��ۼ�*/ //�迭��Ҹ� �����Ϳ� ����

	printf("���ڿ� �Է� (10����Ʈ �̳�) : __________\b\b\b\b\b\b\b\b\b\b");
	scanf("%s", st, sizeof(st));

	for (int i = 0; i < 10; i++) {
		printf("*(ps+ %d) : %c\n", i, /*�ڵ��ۼ�*/);
	}
}
/*���
���ڿ� �Է� (10����Ʈ �̳�): abedefghij
*(ps + 0) : a
*(ps + 1) ; b
...
*(ps + 9) : j
*/