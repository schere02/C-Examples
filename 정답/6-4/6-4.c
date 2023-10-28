#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

#define STU_NUMBER 1
#define REG_NUMBER 2

struct student {
	int type;
	union {
		int student_number;
		char reg_number[15];
	} id;
	char name[20];
};

void print(struct student s) {
	switch (s.type) {
	case STU_NUMBER:
		printf("�й�: %d\n", s.id.student_number);
		printf("�̸�: %s\n", s.name);
		break;
	case REG_NUMBER:
		printf("�ֹι�ȣ: %s\n", s.id.reg_number);
		printf("�̸�: %s\n", s.name);
		break;
	default:
		printf("Ÿ�Կ���\n");
		break;
	}
}

int main(void) {
	struct student s1, s2;

	s1.type = STU_NUMBER;
	s1.id.student_number = 20231111;
	strcpy(s1.name, "Kim");

	s2.type = REG_NUMBER;
	strcpy(s2.id.reg_number,"860101-1058031");
	strcpy(s2.name, "Park");

	print(s1);
	printf("\n");
	print(s2);

	return 0;
}