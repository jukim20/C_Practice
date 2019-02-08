#include <stdio.h>
void main(){
	//int arr3[5] = {0};  // 0으로 초기화
	int arr2[5] = {10,20,30,40,50}; // 선언과 함께 초기화
	//int arr[5];
	int a = 10;
	int b = 20;
	int temp = 0;
	int i =0;
	int index1;
	int index2;
	temp = a;
	a = b;
	b = temp;
	temp = arr2[0];
	arr2[0] =arr2[1];
	arr2[1] = temp;
	for(i = 0; i < 5; i++){
		printf("%d\t" , arr2[i]);
	}
	printf("\n");
	// 문제 1)  인덱스 2개 를 입력받고 배열안의 값을 교환해보세요.
	printf("숫자 2개를 입력하세요 >>> ");
	scanf("%d %d" , &index1 , &index2);
	temp = arr2[index1];
	arr2[index1] = arr2[index2];
	arr2[index2] = temp;
	for(i = 0; i < 5; i++){
		printf("%d\t" , arr2[i]);
	}
	printf("\n");
}