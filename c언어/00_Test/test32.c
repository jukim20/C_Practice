#include <stdio.h>
#include <stdlib.h>
/*
���� : ���� , �迭 , �����Ҵ� , 2�����迭 , 2���������Ҵ� , ����ü 
���� : ������ , if , for ==> �˰��� ==>
���� : �Լ� ==> ������ 
*/
void main(){
	int**pp;
	int r = 3;  // ����
	int c = 4;  // ����
	int*p1;
	int*p2;
	int*p3;
	int*parr[3];
	int arr1[4];
	int arr2[4];
	int arr3[4];
	pp = (int**) malloc (sizeof(int*) * r); // ����
	pp[0] = (int*) malloc(sizeof(int) * c);
	pp[1] = (int*) malloc(sizeof(int) * c);
	pp[2] = (int*) malloc(sizeof(int) * c);
	free(pp[0]);
	free(pp[1]);
	free(pp[2]);
	free(pp);
	int**pp;
	int r = 3;
	int c = 4;
	pp = int* p_arr[3];
	p_arr[0] = int arr[4];
	p_arr[1] = int arr[4];
	p_arr[2] = int arr[4];
}