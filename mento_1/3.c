#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int result[3];

int Strike(int arr[]) {
	int str = 0;
	for (int i = 0; i < 3; i++) {
		if (arr[i] == result[i]) str ++;
	}
	return str;
}

int Ball(int arr[]) {
	int ball = 0;
	for(int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i != j && arr[i] == result[j]) ball++;
		}
	}
	return ball;
}


int main() {

	srand(time(NULL));
	
	for (int i = 0; i < 3; i++) {
		result[i] = (rand() % 9) + 1;
		printf("%d ", result[i]);
	}
	printf("\n\n");

	int strike = 0, ball = 0;
	printf("���� �߱� ���ӿ� ���� ���� ȯ���մϴ�!\n\n");

	while (strike<3) {
		int num[3];
		printf("�� �ڸ� ���ڸ� �Է����ּ��� :");
		scanf_s("%d %d %d", &num[0], &num[1], &num[2]);
		strike = Strike(num);
		ball = Ball(num);
		printf("%d ��Ʈ����ũ, %d ��\n", strike, ball);
	}
	printf("\n\n�����մϴ�! ������ ���߼̽��ϴ�!");
}

