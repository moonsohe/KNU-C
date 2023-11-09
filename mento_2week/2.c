#include<stdio.h>

int main() {
	int arr[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			arr[i][j] = i * 5 + j + 1;
			printf("%d\t", arr[i][j]);
			if (arr[i][j] % 5 == 0)
				printf("\n");
		}
	}	
	printf("Change row & column\n");

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t",arr[j][i]);
			if (arr[j][i] > 20)
				printf("\n");
		}
	}
}