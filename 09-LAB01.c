#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXSIZE 3

int stack[MAXSIZE];
int top = -1;

int isfull();
void push(int);
int isempty();
void pop();

int main() {
	push(3);
	push(5);
	pop();
	push(9);
	push(1);
	push(7);

	return 0;
}

int isfull() {
	if (top == MAXSIZE - 1)
		return 1;
	else
		return 0;
}

void push(int num) {
	if (isfull() == 1) {
		printf("��� �� �����Դϴ�.\n");
	}
	else {
		top++;
		stack[top] = num;
		printf("���� ÷�� %d�� %d�� �����մϴ�.\n", top, num);
	}
}

int isempty() {
	if (top == -1)
		return 1;
	else
		return 0;
}

void pop() {
	if (isempty() != 1) {
		printf("���� ÷�� %d���� %d�� �����մϴ�.\n", top, stack[top]);
		stack[top] = 0;
		top--;
	}
	else {
		printf("����ִ� �����Դϴ�.\n");
	}
}