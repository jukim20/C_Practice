#include <stdio.h>
#include <stdlib.h>
void main(){
	int a = 0;    // 4byte
	int arr[10] = {0};  // 40 byte
	int size = 10;	// 4     *  10
	char c;  //1
	double d; //8
	int* p; // 4
	char* pc; //4
	double* pd; //4
	pd = (double*)malloc(sizeof(double)* size );  // 80
	pc = (char*)malloc(sizeof(char)* size); // 10
	// 포인터 연산 + - 주소이동에 사용된다.
	p = (int*)malloc(sizeof(int) * size); // 40
	printf("arr : %d\n" , &arr[0]);
	printf("arr : %d\n" , &arr[1]);
	p = &arr[0];
	printf("p : %d\n" , p + 0);  // 22222220
	printf("p : %d\n" , p + 1);  // 22222224
	printf("p : %d\n" , p + 2);  // 22222228
	printf("p : %d\n" , &p[0]);  // 22222220

	printf("pc : %d\n" , pc+ 0);
	printf("pc : %d\n" , pc+ 1);
	printf("pd : %d\n" , pd+ 0);
	printf("pd : %d\n" , pd+ 1);
}