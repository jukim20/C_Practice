#include <stdio.h>
// 1. 변수 ==> 저장
// 2. 연산 ==> 대입 = ,산술 +-*/%,비교 <>==, 논리 && || ! 
// 3. if   ==> 분기문  
/*
	번호를 입력하세요 num = 1
	if(num == 1){}
	if(num == 2){}
	if(num == 3){}
*/
// 4. for ==>반복문
// 5. 자료구조 ==> 배열
void main(){
	int arr[4];
	int i =0;
	int total;
	int temp;
	for(i = 0; i < 4; i++)
	{
		arr[i] = i;
	}
	for(i = 0; i < 4; i++)
	{
		printf("%d\n" , arr[i]);
	}
	// 문제 1) arr 배열안의 모든 값의 총합 / 평균 출력.
	total = arr[0] + arr[1] + arr[2] + arr[3];
	for(i = 0 ; i < 4; i++){
		total = total + arr[i];
	}
	// 문제 2) 인덱스가 1 인곳하고 3인곳의 값을 교환.
	// 문제 3) arr 배열안의 성적을 0~99사이의 랜덤값저장 
	// 문제 4) 성적이 가장 높은학생 인덱스 출력 
}