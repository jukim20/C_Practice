#include <stdio.h>
void main(){
	// 입력 , 비교연산자
	int a;  int test;
	a = 10;
	printf("입력전 %d" , a); printf("\n");

	printf("숫자하나를 입력하세요 >>> ");
	scanf_s("%d" , &a); // 키보드로 입력한 값이 a 에 저장이된다. 입력후 엔터 입력 

	printf("입력후 %d" , a); printf("\n");

	// 숫자 2개를 입력후 합 평균 출력 
}