#include <stdio.h>
// 출력 입력 변수 연산자 조건문 반복문 배열 //(자바 파이썬 c++ c#)
// 함수 포인터 동적할당 구조체 파일입출력
void main(){
	//반복문 ==> 0~20까지 짝수의 합
	//배열 ==> 1. 인덱스로 값찾기 2. 값으로 인덱스 찾기 3. 교환  4. 짝수개수 , 음수개수  5. 가장큰값찾기
	int arr[5] = {10, -2 , 30, 52, -40};
	int index; int value; int i; int index1 , index2; int temp; int even_count; int minus_count; int max_value;
	//인덱스 
	printf("인덱스를 입력하세요 >> "); printf("\n");
	scanf("%d" , &index);
	printf("%d" , arr[index]); printf("\n");
	//값
	printf("값을 입력하세요 >> "); printf("\n");
	scanf("%d" , &value); 
	// 초기식은 처음에 한번만 작동 // 조건식 ==> 실행문 ==> 증감식 ==> 조건식 ==> 실행문 ==> 증감식 
	for(i = 0; i < 5; i++){ // 1.초기식 // 2. 조건식 // 3. 증감식 (i++) ==> (i+=1) ==> (i = i + 1)
		if(value == arr[i]){
			printf("%d", i); printf("\n");
		}
	}
	//교환
	printf("인덱스 1 , 2 를 입력하세요 >> "); printf("\n");
	scanf("%d", &index1);
	scanf("%d", &index2);
	temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
	for(i = 0; i < 5; i++){
		printf("%d" , arr[i]);  printf("\n");
	}
}