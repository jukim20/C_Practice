#include <stdio.h>
void show_num(int num){
	printf("%d\n" ,num);
}
void adder(int num1 , int num2){
	printf("%d\n" , num1 + num2);
}
void show_even(int num1){
	if(num1 % 2 == 0){
		printf("짝수\n");
	}
	else{
		printf("홀수\n");
	}
}
void main(){
	//함수 연습
	// 1) 숫자를 입력받고 해당 숫자를 출력해주는 함수
	// 2) 숫자 2개를 입력받고 더하기를 출력해주는 함수.
	// 3) 숫자를 한개 입력받고 짝수 홀수 출력해주는 함수.
	show_num(10);
	adder(5,4);
	show_even(5);
}