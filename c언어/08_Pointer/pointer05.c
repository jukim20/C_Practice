#include <stdio.h>
void test(int* p){
	printf("test > p >>> %d\n" ,p);
	*p = 200;
}
void swap(int* p1 , int*p2){
	int temp;
	temp =*p1;
	*p1 = *p2;
	*p2 = temp;
}
void main(){
	/*int		a = 10;
	int*	p = 0;
	p = &a;
	*p = 100;
	printf("main > p >>> %d\n" , p);
	test(&a);
	printf("a >>>  %d\n" , a);*/
	// 문제 1)아래 두 변수의 값을 함수로교환
	int a = 10;
	int b = 20;
	swap(&a , &b);
	printf("a >>>  %d\n" , a);  //20
	printf("b >>>  %d\n" , b);  //10
	// atm 에서 ==> 비밀번호 체크를 함수로 만들어보자.
	// 입금 , 출금 ==> 함수로만들어보자.
}