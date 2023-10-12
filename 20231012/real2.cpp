#include<stdio.h>
void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}


void sort(int *brr) {
	for (int k = 0; k < 5; k++) {
		int minidx = k;
		for (int i = k+1; i < 5; i++) {
			if (brr[i] < brr[minidx]) {
				minidx = i;
			} 
		}
		swap(&brr[k], &brr[minidx]);
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