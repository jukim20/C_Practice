#include <stdio.h>
// 1. 변수 , 2.연산자 , 3. 조건문  , 4.반복문 , 5.배열 
// 6. 함수 , 7.포인터

void main(){
	int		a = 0;
	int*	p = 0;
	p = &a;
	a = 100;
	printf("%d\n" , a);  // 100
	printf("%d\n" , *p); // 100
	*p = 200;
	printf("%d\n" , a);  // 200
	a = 300;
	printf("%d\n" , a);  // 300
}