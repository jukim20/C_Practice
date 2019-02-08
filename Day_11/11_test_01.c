#include <stdio.h>
void main(){
	//반복문 ==> 0~20까지 짝수의 합
	//배열 ==> 1. 인덱스로 값찾기 2. 값으로 인덱스 찾기 3. 짝수개수  4. 가장큰값찾기
	int score[] =  {20,    3,     46,    10,    55,     2};
	int number[] = {5001, 5002, 5003, 5004, 5005 , 5006};
	int max = score[0]; int max_idx = 0;
	int i;
	// 가장큰값찾기
	for(i = 0; i < 5; i++){
		if(max < score[i]){
			max = score[i];
			max_idx = i; // 추가 
		}
	}
	printf("맥스 :%d" , max); printf("\n");
	//문제 1) 성적이 가장높은 학생의 번호 출력  ==> 5005
	printf("학생번호 :%d" , number[max_idx]); printf("\n");
	//문제 2)
	/*
	  %%%%
	  %%%
	  %%
	  %
	*/





}