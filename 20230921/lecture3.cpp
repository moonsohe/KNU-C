#include<stdio.h>

int acc(int num) {

	if (num == 0) 
		return 1;
	
	return num * acc(num - 1);

}

int main()
{
	int num;
	printf("����� ���丮�� �� �Է� : ");
	scanf_s("%d", &num);

	printf("%d", acc(num));
}

