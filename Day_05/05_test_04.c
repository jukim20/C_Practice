#include <stdio.h>

void main() {
	int num; int num1; int num2; int num3;
	int money = 100000;
	// 1. 숫자 1개 입력받고 짝수 홀수 양수 음수
	printf("숫자를 한개 입력하세요 >>> ");
	scanf_s("%d", &num); 

	if (num % 2 == 0) {
		printf("짝수입니다."); printf("\n");
	} else {
		printf("홀수입니다."); printf("\n");
	}

	if (num > 0) {
		printf("양수입니다."); printf("\n");
	} else if (num < 0) {
		printf("홀수입니다."); printf("\n");
	} else {
		printf("0 입니다."); printf("\n");
	}


	// 2. 숫자 3개 입력받고 평균 합
	// 3. 숫자 3개 입력받고 평균이 60 넘으면 합격 불합격
	// 4. 0~20까지 출력 
	// 5. 10~20까지 출력
	// 6. 0~10까지 중에서 짝수만 출력
	// 7. 홀짝 문제 10번 반복 후 이긴 횟수 출력
	// 8. 홍콩반점 : 내 돈 10 만원으로 변경 후 돈이 짜장면을 살 수 없을 때 종료
	//				** 추가 조건 : 짬뽕은 3그릇 남았다 ... (돈이 있어도 구매 불가)

	printf("** 홍콩반점 **"); printf("\n");
	printf("1. 짜장면		6000원"); printf("\n");
	printf("2. 짬뽕			7000원"); printf("\n");
	printf("3. 탕수육		12000원"); printf("\n");
	printf("번호를 입력하세요 >>> " );
	scanf_s("%d", &sel);

}