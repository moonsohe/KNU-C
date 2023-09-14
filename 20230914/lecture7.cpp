#include<stdio.h>

int main() {
	int jumsu = 0;

	printf("점수 입력:");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90)
		printf("입력하신 점수 %d점은 A학점입니다\n", jumsu);

	else if (jumsu >= 80)
		printf("입력하신 점수 %d점은 B학점입니다\n", jumsu);

	else if (jumsu >= 70)
		printf("입력하신 점수 %d점은 C학점입니다\n", jumsu);

	else if (jumsu >= 60)
		printf("입력하신 점수 %d점은 D학점입니다\n", jumsu);

	else if (jumsu < 60 && jumsu >= 0)
		printf("입력하신 점수 %d점은 F학점입니다\n", jumsu);

	else
		printf("오류");

	return 0;
}