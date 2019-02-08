#include <stdio.h>
void show_all(int num){
	int i;  int total = 0;
	for(i = 0; i <= num ; i++){
		total = i + total;
	}
	printf("%d\n" , total);
}
void show_all_range(int num1 , int num2){
	int i;  int total = 0;int temp;
	if(num1 > num2){  // num1 이 크면 자리를 바꾼다.
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for(i = num1; i <= num2 ; i++){
		total = i + total;
	}
	printf("%d\n" , total);
}
void main(){
	// 숫자 하나를 입력받으면 0~그숫자까지 합을 구해주는함수
	show_all(10);
	// 숫자 2개를 입력받으면 작은수에서 큰수까지 합을구해주는함수
	//예 ) 입력 1 , 5  ,  결과 ==> 1 + 2 + 3 + 4 + 5
	//예 ) 입력 7 , 3  ,  결과 ==> 3 + 4 + 5 + 6 + 7
	show_all_range(10 , 2);
	//숫자 하나를 입력받으면 양수 음수 출력해주는 함수.
}