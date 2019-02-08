#include <stdio.h>
// 1. 대입연산자 : a = b
// 2. 산술연산자 : 
// 3. 비교연산자 : 6개
// 4. 논리연산자 : and , or , not 
void main(){
	//    | ==> shift + 돈표시 
	// 1)  a  &&  b     : and ==> a 도 참이고 b 도 참이여야 , 참
	// 2)  a  ||  b     : or  ==> a 가 참이거나 b 가 참이면 , 참
	// 3)  !a           : not ==> a 가 거짓이면 , 참
	 int num1,num2,num3,num4;
	 int score1 ,score2,score3;int total = 0;
	 num1 = 10 ,num2 = 20, num3 =30 , num4 =40;
	 if(num1 < num2  && num3 > num4){
		 printf("참1\n");
	 }
	 num1 = 10 ,num2 = 20, num3 =30 , num4 =40;
	 if(num1 > num2  || num3 > num4){
		 printf("참2\n");
	 }
	 num1 = 10 ,num2 = 20, num3 =30 , num4 =40;
	 if( !(num1 < num2)  && !(num3 > num4)){
		 printf("참3\n");
	 }
	 num1 = 10 ,num2 = 20, num3 =30 , num4 =40;
	 if( !(num1 < num2)  || (num3 > num4)){
		 printf("참4\n");
	 }
	 // 문제 1) 성적 3개를 입력받고 평균이 60 이상이면 합격 (조건 : 한과목이라도 60이하이면 불합격)	
	 score1 = 100;
	 score2 = 60;
	 score3 = 59;
	 total = score1 + score2 + score3;
	 if(score1 < 60 || score2 <60 || score3 <60) {
		 printf("불합격\n");
	 }
	 else{
		 printf("합격\n");
	 }
}