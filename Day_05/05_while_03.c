#include <stdio.h>
#include <stdlib.h>

// 출력 입력 변수 연산자(4) 조건문 (반복문 배열)  // 모든 언어의 기본

/*
	while (반복문)
		1. while ==> 키워드
		2. (조건) ==> 조건이 참(1) 이면 {실행문} 실행
		3. {실행문} ==> 실행문이 실행 끝난 후 다시 조건으로 이동한다. (반드시 종료조건이 필요)

*/
void main() {
	//int num1 = 10;
	int num = 0; int total;
	int num2 = 0; // 1. 초기식
	/*
	int num2 = 0;

	if (num1 == 10) {
		printf("if 문"); printf("\n");
	}
	*/

	while (num2 < 10) {  // 2. 조건식
		printf("반복문"); printf("\n");
		num2 += 1;  // 3. 증감식
	}
	printf("=============================================="); printf("\n");
	// 문제 1) 0 ~ 20까지 출력
	while (num <= 20) {
		printf("%d", num); printf("\n");
		num += 1;
	}
	printf("=============================================="); printf("\n");

	// 문제 2) 10 ~ 20까지 출력
	num = 10;
	while (num <= 20) {
		printf("%d", num); printf("\n");
		num += 1;
	}
	printf("=============================================="); printf("\n");
	// 문제 3) 0 ~ 10까지 중에서 짝수만 출력
	num = 0;
	while (num <= 10) {
		if (num % 2 == 0) {
			printf("%d", num); printf("\n");
		}
		num += 1;
	}

	printf("=============================================="); printf("\n");
	// 문제 4) 0 ~ 10 까지 합 출력
	num = 0;
	total = 0;

	while (num <= 10) {
		total += num;
		num += 1;
	}
	printf("%d", total); printf("\n");
}