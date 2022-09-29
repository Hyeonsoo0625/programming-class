#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void setNumber();
void printHead();
void printHigher(int);
void printLower(int);
void printAnswer();

int number = 0;
static int min = 1;
static int max = 100;

int main(void) {
	int input = 0;
	srand((long)time(NULL));
	setNumber();
	printHead();

	while (scanf("%d", &input)) {
		if (number == input) {
			printAnswer();
			break;
		}
		else if (number > input) {
			printHigher(input);
		}
		else {
			printLower(input);
		}
	}
	return 0;
}

void setNumber() {
	number = rand() % 100 + 1;
}

void printHead() {
	printf("1���� 100������ �ϳ��� ������ �����Ǿ����ϴ�.\n");
	printf("�� ������ �S�纸����? > ");
}

void printAnswer() {
	printf("\n�����մϴ�. ������ %d�Դϴ�\n\n", number);
}

void printHigher(int input) {
	printf("���߾�� �� ������ %d���� Ů�ϴ�\n\n", input);
	min = input + 1;
	printf("%d���� %d ������ ������ �Է��ϼ���. > ", min, max);
}

void printLower(int input) {
	printf("���߾�� �� ������ %d���� �۽��ϴ�\n\n", input);
	max = input - 1;
	printf("%d���� %d ������ ������ �Է��ϼ���. > ", min, max);
}