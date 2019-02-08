#include <stdio.h>
/*	# if else 문
		1. else 문 ==>  if 문의 조건이 거짓이면 실행된다.
		2. 단독으로 사용할수 없다.
*/
void main(){
	//문제 1) 성적을 입력받고 60이상 합격 이하 불합격 출력
	int score = 61;
	if(score > 60){
		printf("합격\n");
	}
	if(score <= 60){
		printf("불합격\n");
	}

	if(score > 60){
		printf("합격\n");
	}
	else{
		printf("불합격\n");
	}
}