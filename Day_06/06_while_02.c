#include <stdio.h>

void main() {
	int count; int num; int total; int i; int num1; int num2; int temp; int product; 

	if(1) {
		printf("이프문실행");  // 조건이 1(참)이면 실행 후 종료
		printf("\n");
	}
	/*
		while(1) {
		printf("반복문실행1");  // 조건이 1(참)아면 실행 후 다시 조건으로 간다. 
		printf("반복문실행2");  // 무한 반복; 끝내려면 반드시 종료조건을 만들어야한다. 
	*/

	count = 0;
	while (count < 10) {
		printf("%d", count);
		// printf("\t");  // tab; 간격 띄우기
		printf("\n");
		count += 1;
	}

	// 문제 1) 0~10까지 출력하세요.
	num = 0;
	while (num < 11) {
		printf("%d", num); printf("\n");
		num += 1;
	}

	// 문제 2) 0~10까지 짝수만 출력하세요 
	num = 0;
	while (num < 11) {
		if (num % 2 == 0) {
			printf("%d", num); printf("\n");
		}
		num += 1;
	}

	// 문제 3) 0~10까지 합출력
	num = 0;
	total = 0;
	while (num < 11) {
		total += num;
		num += 1;
	}
	printf("총 합 : %d", total); printf("\n");

	// 문제 4) 숫자 하나를 입력 받고 0~숫자까지의 합출력
	printf("숫자 하나를 입력하세요 >>> ");
	scanf_s("%d", &num);
	
	i = 0;
	total = 0;
	while (i <= num) {
		total += i;
		i += 1;
	}
	printf("총 합 : %d", total); printf("\n");

	// 문제 5) 숫자 2개를 입력 받고 두 숫자 사이의 합 출력
	printf("숫자 1을 입력하세요 >>> ");
	scanf_s("%d", &num1);

	printf("숫자 2를 입력하세요 >>> ");
	scanf_s("%d", &num2);

	if (num2 < num1) {
		temp = num2;
		num2 = num1;
		num1 = temp;
	}
	total = 0;
	while (num1 <= num2) {
		total += num1;
		num1 += 1;
	}
	printf("총 합 : %d", total); printf("\n");

	// 문제 6) 구구단 단수를 입력받으면 해당 단을 출력 ==> 2 ==> 2단
	printf("구구단 단수를 입력하세요 >>> ");
	scanf_s("%d", &num); 

	i = 0;
	while (i < 10) {
		product = i * num; 
		printf("%d * %d = %d", num, i, product); printf("\n");
		i += 1;
	}
