#include <stdio.h>
void main(){
	//응용문제 )  숫자하나를 입력받고 짝수 인지 홀수인지 출력 ==> %
	int num1;int num2 , num3; int second;
	printf("숫자를 입력하세요 >>>");
	scanf("%d" , &num1);  //입력 함수 >> scanf("서식문자" , & + 변수);
	// 키보드로 입력받은 값이 변수에 저장된다 
	if(num1 % 2 ==0){
		printf("짝수\n");}
	if(num1 % 2 == 1){
		printf("홀수\n");}	
	num2 = 100; num3 = 20;
	// 6가지 비교연산자를 다사용해서 모두 1이 나오도록 만들어보세요.
	printf("%d\n" , (num2 > num3));
	num2 = 10; num3 = 20;	printf("%d\n" , (num2 < num3));
	num2 = 20; num3 = 20;	printf("%d\n" , (num2 == num3));
	num2 = 10; num3 = 20;	printf("%d\n" , (num2 != num3));
	num2 = 100; num3 = 20;	printf("%d\n" , (num2 >= num3));
	num2 = 10; num3 = 20;	printf("%d\n" , (num2 <= num3));
	//문제 ) 초를 입력받고 분초로 출력 
	// 예) 입력 : 100  ,  결과 ==> 1분 40초
	printf("초 를 입력하세요 >>>");
	scanf("%d" , &second);  
	printf("초 >>> %d ,  %d분 , %d초\n"  , second , second / 60 , second % 60);
	//문제 ) 10 / 3 을 출력하는데 소수점 2자리까지만 구해보세요.
	printf("%d / %d = %.2lf \n" , 10  , 3 , (double)10/3);
}