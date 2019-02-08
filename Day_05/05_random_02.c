#include <stdio.h>  // printf(), scanf_s() ... 
#include <stdlib.h>  // rand() ==> 랜덤숫자를 반환해준다.
#include <time.h>	// srand() ==> 랜덤시드를 초기화해준다.

void main() {
	
	int num1; int coin; int sel; int num;
	srand(time(0));  // 매번 다른 숫자가 나오도록 해준다. 변수선언 바로 밑에 한번만 해주면 됨.
					 // 얘를 안 쓰면 밑에 num1 = rand() 를 해도 계속 같은 값만 나옴  

	num1 = rand() % 3;  // 0, 1, 2
	printf("%d", num1); printf("\n");

	// 문제 1) 랜덤숫자 0~10 을 출력
	num1 = rand() % 11;
	printf("%d", num1); printf("\n");

	// 문제 2) 랜덤숫자 0~10 을 저장 후 짝수 홀수 출력
	if (num1 % 2 == 0) {
		printf("짝수"); printf("\n");
	} else {
		printf("홀수"); printf("\n");
	} 

	// 문제 3 ) coin 앞 뒤 게임 ==> 동전의 앞뒤를 맞추면 성공 실패 출력
	coin = rand() % 2; // 0~1 사이의 값 저장
	printf("앞(0), 뒤(1)를 입력하세요 >>> ");
	scanf_s("%d", &sel);
	if (coin == sel) {
		printf("성공!"); printf("\n");
	} else {
		printf("실패"); printf("\n");
	}

	// 문제 4)
	coin = rand() % 11; // 0~10 사이의 값 저장
	printf("홀(0), 짝(1)를 입력하세요 >>> ");
	scanf_s("%d", &sel); 
	printf("동전의 갯수는 : %d", coin); printf("\n");

	if ((coin % 2 == 0 && sel == 1) || (coin % 2 == 1 && sel == 0)) {
		printf("성공!"); printf("\n");
	} else {
		printf("실패"); printf("\n");
	}

	// 응용문제 1) 2~5 사이의 숫자가 나오도록
	num = (rand() % 4) + 2;
	printf("랜덤값 : %d", num); printf("\n");
	

	// 응용문제 2) -10 ~ 10 사이의 숫자가 나오도록
	num = (rand() % 21) - 10
	printf("랜덤값 : %d", num); printf("\n");
}