#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main() {
	double x = 0;
	double y = 0;

	int cnt_in_circle = 0;

	srand(time(NULL));

	for (int i = 1; i <= 10000000; i++)
	{
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		if (sqrt(x * x + y * y) < 1.0)
			cnt_in_circle++;
		double pi = 4.0 * (double)cnt_in_circle / (double)i;

		if (i % 10000000 == 0) {
			int percent = i / 100000;
			printf("%d\% ���� ... ������ : %lf", percent, pi);

			for (int j = 0; j < percent / 5; j++) 
				printf("��");
			for (int j = 0; j < 20 - percent / 5; j++)
				printf("��");
		}
		printf("\n");
	}
}