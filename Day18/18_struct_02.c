#include <stdio.h>

struct Student {
	int age;
	int scores[3];
};
void main() {
	// 문제 1) 학생 구조체 (int age, int scores[3] 를 만들고 값을 저장 후 출력
	int st_age = 20;
	int st_scores[3] = {100, 30, 50};

	struct Student s1;
	s1.age = 20;
	s1.scores[0] = 100;
	s1.scores[1] = 30;
	s1.scores[2] = 50;

	printf("%d %d %d %d\n", s1.age, s1.scores[0], s1.scores[1], s1.scores[2]);

	// 구조체를 안 쓸 때
	printf("%d %d %d %d\n", st_age, st_scores[0], st_scores[1], st_scores[2]); 

}