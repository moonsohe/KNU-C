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

	printf("���� 1�� �Է��Ͻÿ�: ");
	scanf_s("%d", &num1);

	printf("���� 2�� �Է��Ͻÿ�: ");
	scanf_s("%d", &num2);

	printf("1. ���ϱ� 2.���� 3.���ϱ� 4.������:");
	scanf_s("%d", &sel);
	
	printf("%d",calculator(sel, num1, num2));

	return 0;
}
