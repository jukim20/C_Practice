#include <stdio.h>
//  1. 대입연산자  ==>   a = b  :  b의값을 a에게 저장 (복사) 해라
//  2. 산술연산자  ==>   +   -   *   /   %
//  3. 비교연산자  ==>   참이면 1   ,  거짓이면 0 을 반환한다.
//		1)  a == b  :   a 와 b 가 서로 같다.
//		2)  a != b  :   a 와 b 가 서로 다르다.
//      3)  a >  b  :   a 가 b 보다 크다.
//      4)  a <  b  :   a 가 b 보다 작다.
//      5)  a >= b  :   a 가 b 크거나 같다.
//      6)  a <= b  :   a 가 b 작거나 같다.
void main(){
	int num1 , num2;
	num1 = 10; num2 = 20;
	// 6가지 비교연산자를 다사용해서 모두 1이 나오도록 만들어보세요.
	printf("%d\n" , 10==10);
	printf("%d\n" , 10!=9);
	printf("%d\n" , 10>9);
	printf("%d\n" , 10<19);
	printf("%d\n" , 10>=10);
	printf("%d\n" , 10<=10);
	num1 = 10; num2 = 10;
	printf("%d\n" , num1==num2);
	num1 = 10; num2 = 20;
	printf("%d\n" , num1!=num2);
	num1 = 100; num2 = 20;
	printf("%d\n" , num1 >num2);
	num1 = 10; num2 = 20;
	printf("%d\n" , num1<num2);
	num1 = 100; num2 = 20;
	printf("%d\n" , num1>=num2);
	num1 = 10; num2 = 20;
	printf("%d\n" , num1<=num2);
}