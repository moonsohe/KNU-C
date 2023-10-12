#include<stdio.h>
void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}


void sort(int *brr) {
	for (int k = 0; k < 4; k++) {
		for (int i = 0; i < 4-k; i++) {
			if (brr[i] > brr[i + 1]) {
				swap(&brr[i], &brr[i + 1]);
			}
		}
	}
}
int main() {
	int arr[5] = { 1,6,10,3,5 };
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");

	sort(arr);
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
}