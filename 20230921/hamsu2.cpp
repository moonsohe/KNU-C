#include<stdio.h>
void sum(int a, int b) {
	int result = a + b;
	printf("%d + %d = %d", a, b, result);
}
void sub(int a, int b) {
	int result = a - b;
	printf("%d - %d = %d", a, b, result);
}
void mul(int a, int b) {
	int result = a * b;
	printf("%d * %d = %d", a, b, result);
}
void div(int a, int b) {
	int result = a / b;
	printf("%d / %d = %d", a, b, result);
}
void calculator(int selector, int num1, int num2) {
	if (selector == 1) sum(num1, num2);
	else if (selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);

}

int main(void) {
	int sel, num1, num2;

	printf("���� 1�� �Է��Ͻÿ�: ");
	scanf_s("%d", &num1);

	printf("���� 2�� �Է��Ͻÿ�: ");
	scanf_s("%d", &num2);

	printf("1. ���ϱ� 2.���� 3.���ϱ� 4.������:");
	scanf_s("%d", &sel);
	
	calculator(sel, num1, num2);

	return 0;
}
