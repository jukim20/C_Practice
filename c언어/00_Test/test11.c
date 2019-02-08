#include <stdio.h>
void main(){
	int arr[5] = {10,20,300,40,50};  // 0~4
	int index = -1; int i;
	printf("인덱스를 입력하세요 (0~4) >>> ");
	scanf("%d" , &index);
	arr[index] = 1000;
	/*printf("%d\t" , arr[0]); 
	printf("%d\t" , arr[1]); 
	printf("%d\t" , arr[2]); 
	printf("%d\t" , arr[3]); 
	printf("%d\t" , arr[4]); */
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("%d\t" , arr[i]);
	}
	for(i = 0 ; i < 5; i++){
		if(i == 3){
			printf("%d\n" , arr[i]);
		}
	}
	for(i = 0 ; i < 5; i++){
		if(arr[i] == 50){
			printf("%d\n" , i);
		}
	}
}
	//문제 ) 가로가 10 , 세로 가 8 인 사각형 넓이를 구해보세요
	//문제 )  숫자하나를 입력받고 양수 인지 음수인지 출력	
	//문제 ) 0~20중에서 홀수만 다 더한값 출력
	//문제 ) 0~20중 4의 배수만 출력
	
	//문제 ) 인덱스를 입력받고 해당 값을 1000으로 변경
	//문제 ) 값을 입력받으면 해당 인덱스 출력
	//문제 ) 배열안의 가장큰값 작은값 출력 

/*
	int width = 10;
	int height = 8;
	int result = 0;
	result = width * height;
	int input_num;
	printf("숫자를 입력하세요 >>>");
	scanf("%d" , &input_num);
	if(input_num >0){printf("양수\n");}
	int i;
	int sum =0;
	for (i = 0; i < 20; i++){
		if( i % 2 == 1){
			sum = sum + i;
		}
		if( i % 4 == 0){
		}
		if(i > 5 && i < 15){
		}
	}*/