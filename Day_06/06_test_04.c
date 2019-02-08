#include <stdio.h>

void main() {

	// 성적이 60 이상이면 합격, 미만이면 불합격
	int score = 0;
	printf("성적을 입력하세요 >>> ");
	scanf_s("%d", &score);

	if (score > 100 || score < 0) {
		printf("잘못 입력했습니다."); printf("\n");
	} else if (score >= 60) {
		printf("합격"); printf("\n");
	} else {
		printf("불합격"); printf("\n");
	}
}