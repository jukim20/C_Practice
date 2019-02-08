#include <stdio.h>
void main(){
	int arr[4]; 
	int i;
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 20;
	arr[3] = 60;
	//문제 1) 3번째 학생 점수를 출력해보세요.
	//문제 2) 4번쨰 학생 점수가 잘못 기록되었다 . 1000점으로 수정해주세요.
	for(i = 0; i < 4; i++){
		if(i == 1){
			printf("%d\n" , arr[i]);
		}
		if(i == 3){
			arr[i] = 1000;
		}
	}
	for(i = 0; i < 4; i++)
	{
		printf("arr[%d] >>> %d\n" , i , arr[i]);
	}
}