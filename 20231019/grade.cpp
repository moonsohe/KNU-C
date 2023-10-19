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
	printf("학생수 입력 : ");
	scanf_s("%d", &student);

	int* grade;
	s = (struct Student*)malloc(student * sizeof(int));
	for (int i = 0; i < student; i++) {
		printf("학생 %d-%d 학번 입력 : ", student, i + 1);
		scanf_s("%d", &(s[i].sno));
		printf("학생 %d-%d 이름 입력 : ", student, i + 1);
		scanf_s("%s", s[i].name, 10);
		printf("학생 %d-%d 성적 입력 : ", student, i + 1);
		scanf_s("%d", &(s[i].score));
		sum += s[i].score;
	}
	printf("총점 : %d\n\n", sum);

	
	printf("평균 점수 : %.2f", float(sum) / student);
	free(s);

	return 0;

}

/*
	int num_students;
	int* scores;

	scanf_s("%d", &num_students);
	scores = (int*)malloc(num_students * sizeof(int));
	for (int i = 0; i < num_students; i++) {
		printf("학생# %d-%d 성적 출력 : %d",num_students,i+1);
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