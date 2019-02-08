#include <stdio.h>
void main() {
	int kor; int math; int eng; int total; float avg; int length; int height;
	int num; int sec; int money; int won50000; int won10000; int won5000; int won1000; int won500; int won100;

	//변수 , 대입연산자 , 산술연산자
	//문제 3) 국어 30 , 수학 41 , 영어 53 의 평균을 출력해보세요 

	kor = 30; 
	math = 41;
	eng = 53;

	total = kor + math + eng;
	avg = total / 3;

	printf("총합 : %d", total); printf("\n");
	printf("평균 : %.2f", avg); printf("\n");

	
	//입력 
	//문제 1) 길이를 입력받고  사각형의 넓이를 출력해보세요
	printf("가로를 입력하세요 >>> ");
	scanf_s("%d", &length);
	printf("세로를 입력하세요 >>> ");
	scanf_s("%d", &height);

	printf("사각형의 넓이 : %d", length * height); printf("\n");

	//문제 3) 점수를 3개 입력받고 국어 수학 영어  의 평균을 출력해보세요 
	printf("국어 점수를 입력하세요 >>> ");
	scanf_s("%d", &kor);
	printf("수학 점수를 입력하세요 >>> ");
	scanf_s("%d", &math);
	printf("영어 점수를 입력하세요 >>> ");
	scanf_s("%d", &eng);

	total = kor + math + eng;
	avg = total / 3;

	printf("총합 : %d", total); printf("\n");
	printf("평균 : %.2f", avg); printf("\n"); 
	
	//비교연산자
	//문제 1) 숫자 하나를 입력받고 양수면 1  음수면 0 을출력해보세요

	printf("숫자를 입력하세요 >>> ");
	scanf_s("%d", &num);
	printf("%d", num >= 0); printf("\n");

	//문제 2) 숫자 하나를 입력받고 60점이상이면 1 미만은 0을출력해보세요
	printf("숫자를 입력하세요 >>> ");
	scanf_s("%d", &num);
	printf("%d", num >= 60); printf("\n");

	//========= 심화 =========================================================
	//문제 3) 숫자 하나를 입력받고 짝수면 1 홀수면 0 을 출력해보세요
	printf("숫자를 입력하세요 >>> ");
	scanf_s("%d", &num);
	printf("%d", num % 2 == 0);
	printf("\n");

	//문제 4) 초를 입력받고 분 초로 출력해보세요 // 예) 100 ==> 1분 40초
	printf("초를 입력하세요 >>> "); 
	scanf_s("%d", &sec);
	printf("%d분 %d초", sec / 60, sec % 60); printf("\n");

	//문제 5) 돈을 입력받고 화폐매수를 출력해보세요 
	// 예) 142600 ==> 5만원 2장 만원 4장 5천원 0장 천원 2장 오백원 1개 백원 1개
	printf("돈을 입력하세요 >>> ");
	scanf_s("%d", &money);
	won50000 = money / 50000;
	won10000 = (money - (won50000 * 50000)) / 10000;
	won5000 = (money - (won50000 * 50000) - (won10000 * 10000)) / 5000;
	won1000 = (money - (won50000 * 50000) - (won10000 * 10000) - (won5000 * 5000)) / 1000;
	won500 = (money - (won50000 * 50000) - (won10000 * 10000) - (won5000 * 5000) - (won1000 * 1000)) / 500;
	won100 = (money - (won50000 * 50000) - (won10000 * 10000) - (won5000 * 5000) - (won1000 * 1000) - (won500 * 500)) / 100;

	printf("5만원 %d장, 1만원 %d장, 5천원 %d장, 천원 %d장, 오백원 %d개, 백원 %d개", 
		won50000, won10000, won5000, won1000, won500, won100); printf("\n");

}