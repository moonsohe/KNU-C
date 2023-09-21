#include<stdio.h>

void calculator(int selector, int num1, int num2) {
	if (selector == 1)
		printf("%d", num1 + num2);
	else if (selector == 2)
		printf("%d", num1 - num2);
	else if (selector == 3)
		printf("%d", num1 * num2);
	else if (selector == 4)
		printf("%d", num1 / num2);

}

int main(void) {
	int sel, num1, num2;

	printf("숫자 1을 입력하시오: ");
	scanf_s("%d", &num1);

	printf("숫자 2를 입력하시오: ");
	scanf_s("%d", &num2);

	printf("1. 더하기 2.빼기 3.곱하기 4.나누기:");
	scanf_s("%d", &sel);
	
	printf("%d",calculator(sel, num1, num2));

	return 0;
}
