#include<stdio.h>

int main()
{
	int num=2, count=1, gob;
	while (num <=9)
	{
		if (num == 5) {
			num++;
			continue;
		}

		while (count <= 9)
		{
			gob = num * count;
			printf("%d * %d = %d\n", num, count, gob);
			count++;
		}
		num++;
		count=1;
	}
	return 0;
}