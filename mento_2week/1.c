#include<stdio.h>

float Div(int num1, int num2) {
	float result = (float)num1 / num2;
	return result;
}

int main() {
	int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);
	printf("%f", Div(a, b));
}