#include <stdio.h>
// 출력 입력
// 변수 연산자(2) 조건문 반복문 배열 
// 1. 산술연산자 ==>  + - * / %
// 2. 대입연산자 ==>  =
// 3. 비교연산자 ==>    내용이 참이면 1  , 내용이 거짓이면 0 을 출력한다.
//       1) a  ==  b   ==> 같다
//       2) a  !=  b   ==> 다르다
//       3) a  >   b   ==> 크다
//       4) a  <   b   ==> 작다
//       5) a  >=  b   ==> 크거나 같다
//       6) a  <=  b   ==> 작거나 같다 
void main(){
	int num1; int num2;
	/*printf("%d" , 10 == 10); printf("\n");
	printf("%d" , 10 != 10); printf("\n");
	printf("%d" , 10 > 10);  printf("\n");
	printf("%d" , 10 < 10);  printf("\n");
	printf("%d" , 10 >= 10); printf("\n");
	printf("%d" , 10 <= 10); printf("\n");*/
	num1 = 10; num2 = 10;
	printf("%d" , num1 == num2); printf("\n");
	num2 = 20;
	printf("%d" , num1 != num2); printf("\n");
	printf("%d" , num1 >  num2); printf("\n");
	printf("%d" , num1 <  num2); printf("\n");
	printf("%d" , num1 >= num2); printf("\n");
	printf("%d" , num1 <= num2); printf("\n");
}