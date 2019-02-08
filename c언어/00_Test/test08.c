#include <stdio.h>
void main(){
	int arr[5] = {10,41,22,33,14};int i;int temp;
	int max = arr[0];
	//성적이 50인학생의 번호를 출력하세요.
	for(i = 0 ; i < 5; i++){
		printf("번호 >>> %d\t성적 >>> %d\n" , i , arr[i]);	
		if(arr[i] == 50){
			//printf("성적이 50인학생 >>> %d\n" , i);
		}
		if(arr[i] >= 50){
			//printf("성적이 50이상인학생 >>> %d\n" , i);
		}
		if (max <= arr[i])
		{
			max = arr[i];
		}
	}
	// 성적이 잘못 출력됬어요.
	// 4번 학생 20 으로 수정
	arr[4] = 20;
	// 심화 
	// 0, 3 교환 후 출력 
	temp = arr[0];
	arr[0] = arr[3];
	arr[3] = temp;
	//성적이 가장 높은 학생 출력 

	
}