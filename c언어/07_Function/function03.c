#include <stdio.h>
void show_even(int num){
	if(num % 2 == 1){
		printf("홀수\n");
	}else{
		printf("짝수\n");
	}
}
void all_add(int num){
	int i; int total = 0;
	for(i = 0; i < num + 1; i++){
		total += i;
	}
	printf("%d\n" , total);
}
void rand_range(int num1 , int num2){}
void main(){
	int num1;
	// 짝수 홀수를 알려주는 함수
	show_even(5);
	// 0부터 ~ 숫자 만큼 합을 구해주는 함수
	all_add(10);
	// 숫자 2개를 입력하면 그사이의 랜덤값을 구해주는함수
	// 예)  1 , 5  ==> (1,2,3,4,5)
	// 예)  2 , 4  ==> (2,3,4)
	//  응용문제 )  10 , 5 ==> ( 5,6,7,8,9,10)
	//int arr[5] = {0,1,2,3,4};

}