#include<stdio.h>

int main() {
	int jumsu = 0;

	printf("���� �Է�:");
	scanf_s("%d", &jumsu);

	if (jumsu >= 90)
		printf("�Է��Ͻ� ���� %d���� A�����Դϴ�\n", jumsu);

	else if (jumsu >= 80)
		printf("�Է��Ͻ� ���� %d���� B�����Դϴ�\n", jumsu);

	else if (jumsu >= 70)
		printf("�Է��Ͻ� ���� %d���� C�����Դϴ�\n", jumsu);

	else if (jumsu >= 60)
		printf("�Է��Ͻ� ���� %d���� D�����Դϴ�\n", jumsu);

	else if (jumsu < 60 && jumsu >= 0)
		printf("�Է��Ͻ� ���� %d���� F�����Դϴ�\n", jumsu);

	else
		printf("����");

	return 0;
}