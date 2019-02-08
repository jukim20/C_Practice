#include <stdio.h>
void main(){
	//문제 ) 숫자 2개를 입력후 합 평균 출력	
	int num1;int num2;
	printf("숫자 1 ,2 을 입력하세요 >>> "); printf("\n");
	scanf_s("%d" , &num1);
	scanf_s("%d" , &num2);
	printf("합 : %d" , num1+ num2);
	printf("평균: %.2f" , (float)(num1 + num2)/2); printf("\n");
	//문제 ) 숫자 2개를 입력받고 같으면 1 틀리면 0 을 출력해보세요 
	printf("비교 >> %d", num1 == num2);printf("\n");
	//문제 ) 숫자 하나를 입력받고 60점이상이면 1 미만은 0을출력해보세요
	//문제 ) 숫자 하나를 입력받고 짝수면 1 홀수면 0 을 출력해보세요
	//문제 ) 일을 입력받고 개월 일로 출력해보세요 (단, 1개월은 30일)//예) 100==> 3개월 10일

}