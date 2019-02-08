#include <stdio.h>
// 1. 출력 2. 입력 3. 변수 4. 연산자 5. 조건문 6. 반복문 7. (배열)

void main() {
	int num; int kr; int eng; int math; int total; float avg; int grade;
	int time; int min; int sec; int i; int num1; int num2; int temp; int product;

	// 문제 1) 숫자 하나를 입력 받고 "짝수" "홀수" "양수" "음수" 출력
	printf("숫자 하나를 입력하세요 >>> "); 
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("짝수입니다."); printf("\n");
	} else {
		printf("홀수입니다."); printf("\n");
	}

	if (num > 0) {
		printf("양수입니다."); printf("\n");
	} else if (num < 0) {
		printf("음수입니다."); printf("\n");
	} else {
		printf("0 입니다."); printf("\n");
	}

	// 문제 2) 성적 3개를 입력받고 합, 평균 출력
	printf("국어 성적을 입력하세요 >>> ");
	scanf_s("%d", &kr);

	printf("영어 성적을 입력하세요 >>> ");
	scanf_s("%d", &eng);

	printf("수학 성적을 입력하세요 >>> ");
	scanf_s("%d", &math);

	total = kr + eng + math;
	avg = total / 3;
	
	printf("총 합 : %d", total); printf("\n");
	printf("평균 : %.2f", avg); printf("\n");
	
	// 문제 3) 성적 1개를 입력받고 60 이상 합격, 불합격 출력
	printf("성적을 입력하세요 >>> ");
	scanf_s("%d", &grade);

	if (grade >= 60) {
		printf("합격입니다!"); printf("\n");
	} else {
		printf("불합격입니다."); printf("\n");
	}

	// 문제 4) 초를 입력 받고 분초를 출력. 예 ) 100 ==> 1분 40초
	printf("초를 입력하세요 >>> "); 
	scanf_s("%d", &time);

	min = time / 60; 
	sec = time % 60;

	printf("%d분 %d초입니다.", min, sec); printf("\n");

	// 문제 5) 0~10까지 출력하세요.
	num = 0;
	while (num < 11) {
		printf("%d", num); printf("\n");
		num += 1;
	}

	// 문제 6) 0~10까지 짝수만 출력하세요 
	num = 0;
	while (num < 11) {
		if (num % 2 == 0) {
			printf("%d", num); printf("\n");
		}
		num += 1;
	}

	// 문제 7) 0~10까지 합출력
	num = 0;
	total = 0;
	while (num < 11) {
		total += num;
		num += 1;
	}
	printf("총 합 : %d", total); printf("\n");

	// 문제 8) 숫자 하나를 입력 받고 0~숫자까지의 합출력
	printf("숫자 하나를 입력하세요 >>> ");
	scanf_s("%d", &num);
	
	i = 0;
	total = 0;
	while (i <= num) {
		total += i;
		i += 1;
	}
	printf("총 합 : %d", total); printf("\n");

	// 문제 9) 숫자 2개를 입력 받고 두 숫자 사이의 합 출력
	printf("숫자 1을 입력하세요 >>> ");
	scanf_s("%d", &num1);

	printf("숫자 2를 입력하세요 >>> ");
	scanf_s("%d", &num2);

	if (num2 < num1) {
		temp = num2;
		num2 = num1;
		num1 = num2;
	}
	total = 0;
	while (num1 <= num2) {
		total += num1;
		num1 += 1;
	}
	printf("총 합 : %d", total); printf("\n");

	// 문제 10) 구구단 단수를 입력받으면 해당 단을 출력 ==> 2 ==> 2단
	printf("구구단 단수를 입력하세요 >>> ");
	scanf_s("%d", &num);

	i = 0;
	while (i < 10) {
		product = i * num; 
		printf("%d * %d = %d", num, i, product);
		i += 1;
	}

	// (반복문 심화)
	// 문제 11) 베스킨라빈스 31 ==> me , ai , br31 변수를 만든다.
	// 문제 12)  me 는 1~3을 입력받고 ai 는 1~3 의 랜덤값을 저장한다. 둘이 번갈아가면서 계속반복
	// 문제 13) br31 은 me 와 ai 의 값을 누적저장한다 31을 넘기는쪽이 패배
	//		조건) ai 는 이길수있는상황에서 이길수있도록 예외처리 ==>
	//		예) (br31 == 29)  ==> 이런상황에서는 1을 고를수있도록 
}