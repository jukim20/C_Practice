#include <stdio.h>
// 기본 알고리즘(if + for + 배열)  + 기본 문법 (포인터마스터)
// ( ==> 함수 ==> 구조체 ==> 클래스(구조체 + 함수) )

// 1. for ==> 0~20 까지중에서 짝수만 다 더한값 출력
//	1)  인덱스를 입력받고 해당 값을 출력.  2 ==> 30
void change_a(int* p, int num){
	*p = num;
}
void change_arr(int* p, int index){
	*(p+index) = 1000;  
	p[index] = 1000;
}
void main(){
	int arr[5] = {10,20,30,40,50};
	int* p = 0;
	int a = 10; int i ;	
	/*printf("%d\n" , a);
	change_a(&a , 110);
	printf("%d\n" , a);*/
	change_arr(&arr[0] , 3);
	for(i = 0; i < 5; i++){
		printf("배열: %d\n" , arr[i]);
	}
	// arr[0]의 주소를 보내는 함수를 만들자 .
	// 함수 에서 arr[3] == 40 의 값을 1000으로 변경 후 출력
}