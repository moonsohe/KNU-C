#include<stdio.h>

int main()
{
	int jumsu;
	char grade;

	printf("점수 입력:");
	scanf_s("%d", &jumsu,sizeof(jumsu));

	if (jumsu > 100 || jumsu < 0) {
		printf("잘못 입력했습니다.\n");
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

	printf("입력하신 점수는 %c학점입니다.\n",grade);

	return 0;

}