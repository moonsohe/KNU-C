#include<stdio.h>
void Swap(int *a, int *b) {
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main() {
	int a = 0, b = 0;
	scanf_s("%d %d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
}