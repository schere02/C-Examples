#pragma warning(disable:4996)
#include<stdio.h>
#define ROWS 3
#define COLS 3

void main() {
	int A[ROWS][COLS] = { {1,1,1}, {2,2,2}, {3,3,3} };
	int B[ROWS][COLS] = { {4,4,4}, {5,5,6}, {6,6,6} };
	int C[ROWS][COLS];

	//2���� ���(A, B)�� ���ϴ� ���α׷�
	/*
	�ڵ��ۼ�
	*/

	//���
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; i < COLS; j++) {
			printf("%2d", C[i][j]);
		}
		printf("\n");
	}
	/*���
	15  15  16
	30  30  32
	45  45  48
	*/
}