#include <stdio.h>
void main(){
	// 변수 , 연산자 , if , for 
	int a = 10;  // ㅁ==> a
	int b = 20;  // ㅁ==> b == 200;
	int arr[5];  // ㅁ==100ㅁ==200ㅁㅁㅁ
	// arr[0] , arr[1] , arr[2], arr[3], arr[4]
	int i ;
	a = 10;
	a = 20;
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;
	arr[3] = 400;
	arr[4] = 500;
	b = 200;	
	printf("%d\n" , arr[0]);
	printf("%d\n" , arr[1]);
	printf("%d\n" , arr[2]);
	printf("%d\n" , arr[3]);
	printf("%d\n" , arr[4]);
	for(i = 0; i < 5; i++){
		printf("%d\n" , arr[i]);
	}
	//문제 1) for 문을 이용해서 배열안의 모든값을 더한값 출력
	//문제 2) 가장큰수찾기
}