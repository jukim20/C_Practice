#include <stdio.h>
// 함수 모양의 종류 
// 1) 매개변수 가 없는 함수
void test1(){
}
// 2) 매개변수 가 있는 함수  ==> 호출할때 반드시 값을 넣어줘야한다.
void test2(int num){
	printf("%d" , num);printf("\n");
}
void calc(int num1 , int num2){
	printf("%d + %d = %d" , num1 , num2 , num1 + num2); printf("\n");
	printf("%d + %d = %d" , num1 , num2 , num1 + num2); printf("\n");
	printf("%d + %d = %d" , num1 , num2 , num1 + num2); printf("\n");
	printf("%d + %d = %d" , num1 , num2 , num1 + num2); printf("\n");
	printf("%d + %d = %d" , num1 , num2 , num1 + num2); printf("\n");
}
void all_sum(int num1){
	int i = 0;
	int total = 0;
	for(i = 0; i <= num1; i++){
		total += i;
	}
	printf("%d", total);printf("\n");
}
void main(){
	test1();
	test2(10); //인자 ==> 매개변수에 저장하는 값 
	calc(10 , 3);
	all_sum(4);
	//문제 1) 인자 2개를 사용해서 산술연산의 결과를 출력해주는 함수를 만들어보세요>>
	//문제 2) 인자 1개를 사용해서 "홀수 , 짝수 , 양수 , 음수" 알려준는 함수
	//문제 3) 인자 1개를 사용해서 초를 분초로 바꿔주는 함수
	//문제 4) 인자 1개를 사용해서 0~부터 인자까지의 합을 출력해주는 함수 
}