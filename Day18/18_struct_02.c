#include <stdio.h>

struct Student {
	int age;
	int scores[3];
};
void main() {
	// ���� 1) �л� ����ü (int age, int scores[3] �� ����� ���� ���� �� ���
	int st_age = 20;
	int st_scores[3] = {100, 30, 50};

	struct Student s1;
	s1.age = 20;
	s1.scores[0] = 100;
	s1.scores[1] = 30;
	s1.scores[2] = 50;

	printf("%d %d %d %d\n", s1.age, s1.scores[0], s1.scores[1], s1.scores[2]);

	// ����ü�� �� �� ��
	printf("%d %d %d %d\n", st_age, st_scores[0], st_scores[1], st_scores[2]); 

}