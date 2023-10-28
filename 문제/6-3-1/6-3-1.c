#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

#define NEW_S 1
#define MOD_S 0

struct student {
	int sNum;
	char name[12];
	double grade;
	struct student* next;
};

static struct student* list = NULL;

static struct Meta {
	int count;
	int size;
	struct student* index0;
	struct student** start;
}m1;

int get_student(int index);
void add_student(struct student** s, int index);
void remove_student(int index);
void modify_student(int index, struct student s);
void print_student(int index);
void print_all();
void gets_student();

int main(void) {

	list = malloc(sizeof(struct student));
	m1.count = 0;
	m1.size = 1;
	m1.index0 = list;
	m1.start = &m1.index0;
	int select;
	int chosen_index;

	int loop = 1;

	while (loop) {
		printf("1. add, 2. remove, 3 modify, 4. find, 5.print all, 6. exit\n");
		printf("�׸� ����: ");
		scanf("%d", &select);
		switch (select) {
		case 1:
			gets_student(NEW_S);
			break;
		case 2:
			printf("\n--------------------------------------\n");
			printf("������ �ε��� ����(���� �Է½� ���: ");
			scanf("%d", &chosen_index);
			remove_student(chosen_index);
			break;
		case 3:
			gets_student(MOD_S);
			break;
		case 4:
			printf("�ε����� �Է� : ");
			scanf("%d", &chosen_index);
			print_student(chosen_index);
			break;
		case 5:
			print_all();
			break;
		case 6:
			loop = 0;
			break;
		default:
			printf("�ùٸ��� ���� �׸�\n\n");
			break;
		}
	}
	return 0;
}

int get_student(int index, struct student** temp) {
	if (index == -1) index = m1.count;
	if (index >= 0 && index <= m1.count) {
		(*temp) = m1.start;
		int i = 0;
		while (i < index)
		{
			if (i == 0)
				(*temp) = *m1.start;
			else
				(*temp) = (*temp)->next;
			i++;
		}
		return 1;
	}
	else return 0;
}

void add_student(struct student* s, int index) {
	struct student* temp;
	int result = get_student(index, &temp);
	if (result) {
		if (index == 0) {
			(*m1.start) = &s;
			(*s).next = temp;
		}
		else {
			(*s).next = temp->next;
			temp->next = &s;
		}
		m1.count++;
	}
	else
		printf("\n�ùٸ��� ���� �ε���\n");
}

void remove_student(int index) {
	struct student* temp;
	int result = get_student(index, &temp);
	if (result) {
		struct student* temp2;
		temp2 = temp->next;
		temp->next = temp2->next;
		temp2->sNum = NULL;
		temp2->next = NULL;
		m1.count--;
	}
	else
		printf("\n�ùٸ��� ���� �ε���\n");
}

void modify_student(int index, struct student* s) {
	remove_student(index);
	add_student(s, index);
}

void print_student(int index) {
	struct student* s;
	int result = get_student(index, &s);
	if (result) {
		s = s->next;
		printf("�й�: %d\n", s->sNum);
		printf("�̸�: %s\n", s->name);
		printf("����: %.2f\n\n", s->grade);
	}
	else
		printf("\n�ùٸ��� ���� �ε���\n");
}

void print_all() {
	int count = m1.count;
	for (int i = 0; i < count; i++) {
		print_student(i);
	}
}

void gets_student(int mode) {
	int index;
	struct student* temp;


	if (m1.size <= m1.count + 1) {
		int newSize = m1.size + 1;
		temp = (struct student*)malloc(sizeof(struct student) * newSize);
		for (int i = 0; i < m1.size; i++) temp[i] = list[i];
		free(list);
		list = temp;
		free(temp);
		temp = &list[m1.size];
		m1.size = newSize;
	}
	else {
		int i = 0;
		while (list[i].sNum != NULL) {
			i++;
		}
		temp = &list[--i];
	}

	printf("\n--------------------------------------\n");
	printf("�ε����� �Է�(-1 �Է� ��, �������� �ڵ� ��ġ):");
	scanf("%d", &index);
	printf("�й��� �Է�: ");
	scanf("%d", &temp->sNum);
	printf("�̸��� �Է�: ");
	getchar();
	gets(temp->name);
	printf("������ �Է�: ");
	scanf("%.2f", &temp->grade);

	if (mode)
		add_student(temp, index);
	else
		modify_student(index, temp);
	printf("\n\n");
}