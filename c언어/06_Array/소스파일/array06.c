#include <stdio.h>
void main(){
	int arr[5] = {10,20,40,100,-10};
	// 문제 1) 인덱스가 1인 곳의 값을 출력해보세요. : 예) 20
	printf("%d" , arr[1]);
	// 문제 2) 인덱스를 입력받고 해당 값을 출력 : 예) 1 , ==>20
	int index1;
	printf("%d" , arr[index1]);
	// 문제 3) 값이 40인곳의 인덱스 출력 : 예) 2
	int i;
	for(i = 0; i < 5; i++){
		if(arr[i] == 40){
			printf("%d" , i);
		}
	}
	// 문제 4) 인덱스를 입력하면 해당 값만 제외하고 출력 : 예) 4 ==> 10,20,40,100
	// 문제 5) 배열안의 모든 값의 합 출력 
	int bingo[5] = {0,0,0,0,0};
	//문제 1) 인덱스를 입력받으면 해당인덱스의 값을 3으로 변경시켜보세요.(반복)
	// 예)  입력 ==> 1  , 결과 ==> 0,3,0,0,0
	// 예)  입력 ==> 4  , 결과 ==> 0,3,0,0,3
	//문제 2) 3이 연속으로 3개이어지면 "빙고" 출력
	// 예)  결과 ==> 0,3,3,3,0 ==> 빙고
	// 예)  결과 ==> 0,3,0,3,3,==> x 
}