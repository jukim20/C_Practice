#include <stdio.h>
void main(){
	// 0~20중에서 짝수의 합출력 
	// 문제 2) n , x , y 에 50 , 3 , 4  를 입력받고 x y 의 공배수를 n 미만까지 출력
	// 예) 50 , 3 , 4   ==>  12 , 24 , 36 , 48
	// 예) 100 , 3 , 5  ==>  15 , 30 , 45 , 60 ,75 , 90
	// 1)arr배열에 1~ 10 까지 저장후 합출력
	int arr[10];
	int count = 0;
	int total = 0;
	while (count < 10){
		arr[count] = (count + 1);
		total += arr[count];
		count += 1;
	}
	printf("토탈 : %d" , total);printf("\n");
	count = 0;
	while (count < 10){
		if(arr[count] % 2 == 0){
			printf("%d" , arr[count]);  printf("\n");
		}
		count += 1;
	}
	// 2)arr배열에 1~ 10 까지 중에서 짝수만 출력
	// 3)인덱스로 값출력
	// 4)값으로 인덱스 출력
	// 심화
	//int name   [] = {100   , 200   , 300  ,  400  ,  500}; // 배열에 바로 값저장 ==> name[5]
	//int account[] = {111111, 222222, 333333, 444444, 555555};
	//int pw     [] = {123   , 234  ,  345   , 456   , 789};
	//int balance[] = {5000  , 6000  , 7000  , 8000  , 9000};
	////ATM
	//printf("***** ATM *****"); printf("\n");
	//printf("1.로그인"); printf("\n");
	//printf("2.송금");   printf("\n");
	//printf("3.조회");   printf("\n");
	// 로그인 ==> pw ==>123 ==>  100 님 로그인되었습니다.
	// 송금 ==> 계좌번호를 입력하세요 ==> 222222 ==> 
	//          송금할 금액을 입력하세요 ==> 2000 ==> 5000-2000 //   200 ==> 6000 + 2000
}