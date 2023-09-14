#include<stdio.h>

int main()
{
	int count=0, ox;

	while (count < 6) 
	{
		ox = 1;
		while (ox < 6)
		{
			if (count == ox) {
				if (count % 2 == 0)
					printf("| X |");
				else
					printf("| O |");
			}
			else
				printf("    ");
			ox++;
		}
		printf("\n");
		printf("---------------------------\n");
		count++;
	}
	return 0;
}