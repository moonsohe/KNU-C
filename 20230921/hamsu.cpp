#include<stdio.h>

int add(int num) {
	int di;
	for (di = num - 1; di > 1; di--) {
		if (num % di == 0)
		return 0;
	}
	return 1;
}

int main(void)
{
	int num;
	printf("소수인지 확인할 수를 입력하세요:");
	scanf_s("%d", &num);

	printf("%d\n", add(num));

	return 0;
}

