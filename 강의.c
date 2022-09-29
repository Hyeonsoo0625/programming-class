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
	printf("1에서 100꺄지의 하나의 정수가 결정되었습니다.\n");
	printf("이 정수를 밪춰보세요? > ");
}

void printAnswer() {
	printf("\n축하합니다. 정답은 %d입니다\n\n", number);
}

void printHigher(int input) {
	printf("맞추어야 할 정수가 %d보다 큽니다\n\n", input);
	min = input + 1;
	printf("%d에서 %d 사이의 정수를 입력하세요. > ", min, max);
}

void printLower(int input) {
	printf("맞추어야 할 정수가 %d보다 작습니다\n\n", input);
	max = input - 1;
	printf("%d에서 %d 사이의 정수를 입력하세요. > ", min, max);
}