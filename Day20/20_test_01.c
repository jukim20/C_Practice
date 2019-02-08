#include <stdio.h>
#include <stdlib.h>
void main(){
	int a;
	int* p;
	int arr[5]; //==> 크기변경불가
	int size = 20;
	malloc(size); // 1. 크기 계산 직접계산 
	//2. 접근이 불가능 // 3. 안지워진다. 직접해제
	p = malloc(20);
	p = (int*)malloc(20);
	p[0] = 100;
	p[4] = 300;
	free(p);
	p = NULL;

	






}