#include <stdio.h>
/*
if 문 : 조건문 , 분기문 
	구성요소 :
	1)  if ==> 키워드
	2) (내용) ==>  조건 
	3) {실행문} ==> 조건이 참이면 즉 , 1 이면 실행문을 실행한다.
*/
void main(){
	int num1 , num2;
	int score;
	num1 = 10; num2 =20;
	if(num1 > num2){
		printf("참\n");}
	if( 10 == 10 ){
		printf("10은 10과 같다\n");}
	//응용문제 1)  score 에 성적을 입력받고 성적이 60점이 넘으면 합격 , 이하면 불합격을 출력.
	printf("점수를 입력하세요(0~100) >>>");
	scanf("%d" , &score);
	if(score > 60) {}
	if(score <=60) {}
	//응용문제 2)  숫자하나를 입력받고 양수 인지 음수인지 출력
	//문제 a) 초를 입력받고 분초로 출력 
	// 예) 입력 : 100  ,  결과 ==> 1분 40초
	//문제 b) 일을 입력받고 개월 일 을 출력 ( 1개월 은 30일로 고정)
	// 예 ) 입력 : 100 , 결과 ==> 3개월 10일
	//심화 문제 ) 돈을 입력받고 화폐매수 출력
	// 예)  입력 : 137600  , 결과 : 5만원 2장 , 1만원 3장 , 
	//					5천원 1장 1천원 2장 , 5백원 1개 , 1백원 1개 
	//응용문제 3)  숫자하나를 입력받고 짝수 인지 홀수인지 출력 ==> %
}