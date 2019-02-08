#include <stdio.h>
void main(){
	int score1 , score2 ,score3;
	//문제 0) 숫자 2개를 저장하고 나누기를 하고 몫과 나머지 출력 
	int num1, num2;
	int second;
	int is_negative;
	num1 = 10;
	num2 = 3;
	printf("%d / %d = 몫 : %d , 나머지 : %d \n" , num1 , num2 , num1/num2 , num1 % num2);
	//문제 a) 숫자 2개를 입력받고 나누기를 한다음 몫 과 나머지를 출력 
	//문제 b) 초를 입력받고 분 초 로 출력하세요.
	printf("초를 입력해주세요 >>> ");
	scanf("%d" , &second);
	printf("초 ==> %d ,  %d 분 , %d 초 \n"  , second , second/60 , second % 60);
	//문제 c) 숫자 하나에 10을 저장하고 음수인지 양수인지 출력 하세요.
	is_negative = 10;
	if( is_negative >= 0) {printf("양수\n");}
	if( is_negative < 0) {printf("음수\n");}
	//문제 d) 숫자 하나를 입력받고 음수인지 양수인지 출력 하세요.
	//문제 1) 성적3개를 입력받고 총합 평균을 구한다음 출력
	//조건 1) 만약에 평균이 60이 넘으면 합격 , 이하면 불합격 출력
	//조건 2) 만약에 평균은 60이 넘었지만 한과목이라도 60이하이면 불합격 (예 80 80 59)불합격
}