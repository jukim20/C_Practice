#include <stdio.h>
#include <stdlib.h>

int* dma(int num){
	int *p;
	p = (int*)malloc(sizeof(int) * num);
	return p;
}
void* malloc(int size){

}
void main(){	
	int arr[5];
	int* p =0;	
	int** pp = 0;
	int*p1[5];
	double *dp =0;
	/*p = (int*)malloc(sizeof(int) * 5);
	free(p);
	p = dma(5);*/
	int a = 10;
	double b = 10; 	
	p =  malloc(10);
	pp = (int**) malloc(10);
	dp = (double*) malloc(10);
	pp = (int**) malloc(sizeof(int*) * 5);
	pp[0] = (int*)malloc(sizeof(int) * 4);
	pp[1] = (int*)malloc(sizeof(int) * 4);
	pp[2] = (int*)malloc(sizeof(int) * 4);
	pp[3] = (int*)malloc(sizeof(int) * 4);
	pp[4] = (int*)malloc(sizeof(int) * 4);
	p0 = (int*)malloc(sizeof(int) * 4);
	p1 = (int*)malloc(sizeof(int) * 4);
	p2 = (int*)malloc(sizeof(int) * 4);
	p3 = (int*)malloc(sizeof(int) * 4);
	p4 = (int*)malloc(sizeof(int) * 4);
}