#include<stdio.h>
#include<stdlib.h>

struct Student {
	int sno;
	char name[10];
	int score;
};
int main() {
	struct Student* s;

	int student = 0, sum = 0;
	printf("�л��� �Է� : ");
	scanf_s("%d", &student);

	int* grade;
	s = (struct Student*)malloc(student * sizeof(int));
	for (int i = 0; i < student; i++) {
		printf("�л� %d-%d �й� �Է� : ", student, i + 1);
		scanf_s("%d", &(s[i].sno));
		printf("�л� %d-%d �̸� �Է� : ", student, i + 1);
		scanf_s("%s", s[i].name, 10);
		printf("�л� %d-%d ���� �Է� : ", student, i + 1);
		scanf_s("%d", &(s[i].score));
		sum += s[i].score;
	}
	printf("���� : %d\n\n", sum);

	
	printf("��� ���� : %.2f", float(sum) / student);
	free(s);

	return 0;

}

/*
	int num_students;
	int* scores;

	scanf_s("%d", &num_students);
	scores = (int*)malloc(num_students * sizeof(int));
	for (int i = 0; i < num_students; i++) {
		printf("�л�# %d-%d ���� ��� : %d",num_students,i+1);
		scanf_s("%d", scores + i);
	}
	int sum = 0;
	for (int i = 0; i < num_students; i++) {
		sum += scores[i];
	}
	printf("%d", sum);
	free(scores);
	return 0;
*/