#include<stdio.h>

int main()
{
	int jumsu;
	char grade;

	printf("���� �Է�:");
	scanf_s("%d", &jumsu,sizeof(jumsu));

	if (jumsu > 100 || jumsu < 0) {
		printf("�߸� �Է��߽��ϴ�.\n");
		return 0;
	}

	grade = jumsu / 10;

	switch (grade) {
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
		break;
	}

	printf("�Է��Ͻ� ������ %c�����Դϴ�.\n",grade);

	return 0;

}