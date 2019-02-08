#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
void main(){
	//int arr[4];
	//malloc(16);
	int a;
	int arr[4];  // 실제로 16byte
	int size = 3;
	int* p;
	double * pd;
	char* pc;
	malloc(16);  // 직접계산해야된다.
	malloc(size * 4);
	(int*)malloc(size * 4);
	p =  (int*)malloc( size * 4);
	p[0] = 10;
	p[1] = 20;

	p[2] = 30;
	printf("주소 : %d\n" , &p[0]); 
	printf("주소 : %d\n" , &p[1]); 
	printf("주소 : %d\n" , &p[2]); 
	pd = (double*) malloc( size * 8);
	pd = (double*) malloc( size * sizeof(double));
	pd[0] = 10.0;
	pd[1] = 20.0;
	pd[2] = 30.0;
	printf("주소 : %d\n" , &pd[0]); 
	printf("주소 : %d\n" , &pd[1]); 
	printf("주소 : %d\n" , &pd[2]); 
	printf("메모리사이즈: %d\n" , sizeof(int));
	printf("메모리사이즈: %d\n" , sizeof(char));
	printf("메모리사이즈: %d\n" , sizeof(double));
	printf("메모리사이즈: %d\n" , sizeof(float));
	printf("메모리사이즈: %d\n" , sizeof(long));
}