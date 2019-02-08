#include <stdio.h>
/* 
	출력 입력
	변수 연산자 (2) 조건문 반복문 배열

	< 연산자 >
	1. 산술연산자 ( + , - , * , / , % )
	2. 대입연산자 ( = )
	- 값을 변수에 저장하는 것
	3. 비교연산자  ==>  내용이 참이면 1 , 거짓이면 0 을 출력한다.  
		1) a == b
		2) a != b
		3) a > b
		4) a < b
		5) a >= b
		6) a <= b
*/

void main() {
	int num1;
	int num2;

	printf("%d", 10 == 10); printf("\n");
	printf("%d", 10 != 10); printf("\n");
	printf("%d", 10 > 10); printf("\n");
	printf("%d", 10 < 10); printf("\n");
	printf("%d", 10 >= 10); printf("\n");
	printf("%d", 10 <= 10); printf("\n");

	num1 = 10; 
	num2 = 10;
	
	printf("%d", num1 == num2); printf("\n");

	num1 = 11;
	printf("%d", num1 != num2); printf("\n");
	printf("%d", num1 > num2); printf("\n");
	
	num2 = 12;
	printf("%d", num1 < num2); printf("\n");

	num2 = 10;
	printf("%d", num1 >= num2); printf("\n");
	
	num1 = 9;
	printf("%d", num1 <= num2); printf("\n");

	// 문제 ) 위 statement들의 모든 값이 참으로 나오게 변수의 값을 변경해보세요.
	
}