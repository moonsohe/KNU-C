#include<stdio.h>

int main() {
	int num,count,gob;

	for (num = 2; num < 10; num++)
	{
		if (num == 5) 
			continue;

		printf("%d단 시작\n", num);
		for (count = 1; count < 10; count++)
		{
			gob = num * count;
			printf("%d * %d = %d\n", num, count, gob);
		}
		printf("%d단 끝\n", num);
	}

	return 0;
}