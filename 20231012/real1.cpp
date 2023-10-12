#include<stdio.h>

void swap(int *pa, int *pb)
{
	int c = *pa;
	*pa = *pb;
	*pb = c;
}

int main() {
	int a = 10, b = 530;

	printf("ÀÌÀü : %d %d\n", a, b);
	swap(&a, &b);
	printf("ÈÄ : %d %d\n", a, b);
}
