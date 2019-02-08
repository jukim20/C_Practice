#include <stdio.h>

void main() {
	// 성적 하나를 입력 받고 60 이상이면 " 합격 ", 이하면 " 불합격 "
	int grade; int num1; int grade1; int grade2; int grade3; int total; int avg;
	int sel;

	printf("성적을 입력하세요 >>> ");
	scanf_s("%d", &grade);

	if (grade >= 60) {
		printf("합격"); printf("\n");
	}
	else {
		printf("불합격"); printf("\n");
	}
	// 숫자 하나를 입력 받고 짝수면 "짝수", 홀수면 "홀수" 출력
	printf("숫자를 하나 입력하세요 >>> ");
	scanf_s("%d", &num1);
	if (num1 % 2 == 0) {
		printf("짝수"); printf("\n");
	}
	else {
		printf("홀수"); printf("\n");
	}
	// 숫자를 하나 입력받고 "양수" , 0 , "음수" 출력
	if (num1 > 0) {
		printf("양수"); printf("\n");
	} 
	else if (num1 < 0) {
		printf("음수"); printf("\n");
	}
	else {
		printf("0"); printf("\n");
	}
	
	// 성적 3개를 입력받고 평균이 60 이상이면 "합격"
	printf("과목 1의 성적을 입력하세요 >>> ");
	scanf_s("%d", &grade1);
	printf("과목 2의 성적을 입력하세요 >>> ");
	scanf_s("%d", &grade2);
	printf("과목 3의 성적을 입력하세요 >>> ");
	scanf_s("%d", &grade3);

	total = grade1 + grade2 + grade3;
	avg = total / 3;
	
	if (grade1 <= 50 || grade2 <= 50 || grade3 <= 50) {
		printf("불합격"); printf("\n");
	}
	else if (avg >= 60) {
		printf("합격"); printf("\n");
	}
	else {
		printf("불합격"); printf("\n");
	}

	// 홍콩반점 내돈 10만원으로 변경 후 돈이 짜장면을 살 수 없을 때 종료
	printf("** 홍콩반점 **"); printf("\n");
	printf("1. 짜장면		6000원"); printf("\n");
	printf("2. 짬뽕			7000원"); printf("\n");
	printf("3. 탕수육		12000원"); printf("\n");
	printf("번호를 입력하세요 >>> " );
	scanf_s("%d", &sel);

}