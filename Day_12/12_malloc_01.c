#include <stdio.h>
#include <stdlib.h> // malloc(); 
// malloc 특징
// 1) <stdlib.h> 헤더를 추가해야 사용가능
// 2) 사이즈(크기)를 직접 계산해서 할당
// 3) 사이즈에 변수사용 가능 <==> 배열과의 가장큰차이 
void main(){
	int arr[5];
	int a;//4
	char c; //1
	float f;  //4
	double d;  //8
	int temp = 5;
	// sizeof(변수) ==> 변수의 크기를 알려준다
	printf("arr 크기 : %d \n", sizeof(arr));
	printf("int 크기 : %d \n", sizeof(int));
	printf("a 크기 : %d \n", sizeof(a));
	printf("f 크기 : %d \n", sizeof(f));
	printf("d 크기 : %d \n", sizeof(d));
	printf("&a : %d\n" , &a);
	printf("&arr[0] : %d\n" , &arr[0]);
	printf("&arr[1] : %d\n" , &arr[1]);

	malloc(20);
	malloc(sizeof(int) * 5);
	printf("배열의 크기를 입력하세요 >> ");
	scanf_s("%d" , &temp);
	malloc(temp);
}