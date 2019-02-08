#include <stdio.h>
void show_num(int num){
	printf("%d\n", num);
}
void show_adder(int num1 ,int num2){
	printf("%d\n", num1 + num2);
}
void show_for(int num1){
	int i = 0;
	for(i = 0; i < num1; i++){
		printf("%d\n", i);
	}
}
void show_arr(int arr[] , int size){  // arr[] 배열 매개변수
	int i = 0;
	for(i = 0; i < size; i++){
		printf("%d\n", arr[i]);
	}
}
void show_for_range(int num1 ,int num2){
	int i;
	if (num1 > num2){}
	for(i = num1; i < num2; i++){
		printf("%d\n", i);
	}
}
void main(){
	int arr[5] = {10,20,30,40,50};
	show_num(10);
	printf("===========================\n");
	show_adder(10,20);
	printf("===========================\n");
	show_arr(arr,5);
	//문제 1) 숫자 2개를 입력받으면 , 숫자 사이의 값을 다 더해주는 함수를 만들자
	//예)  2 , 5   ==>  2 + 3 + 4 + 5
	//예)  5 , 1   ==>  1 + 2 + 3 + 4 + 5
}

