#include <stdio.h>  // printf() , scanf()
//  1. 대입연산자  ==>   a = b  :  b의값을 a에게 저장 (복사) 해라
//  2. 산술연산자  ==>   +   -   *   /   %
void main()
{
	int a = 10;
	int b = 20;
	a = b; // a == 20  , b == 20  : 변수의 특징 ==> 새로운값이 들어오면 전의 값은 지워진다.
	//나머지 ==>  %
	printf("%d\n" , 10/3); // 몫
	printf("%d\n" , 10%3); // 나머지
	printf("%d\n" , 9%3); // 0
	printf("%d\n" , 8%3); // 2
	printf("%d\n" , 7%3); // 1
	printf("%d\n" , 6%3); // 0
	printf("%d\n" , 5%3); // 2
	printf("%d\n" , 4%3); // 1
	printf("%d\n" , 3%3); // 0
	printf("%d\n" , 2%3); // 2
	printf("%d\n" , 33342342 % 3 );
}