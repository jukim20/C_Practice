#include <stdio.h>
#include <stdlib.h>
int ** dd_m_a(int r , int c){
	int **pp  = (int**)malloc(sizeof(int*) * r);
	pp[0] = (int*)malloc(sizeof(int) * c);
	pp[1] = (int*)malloc(sizeof(int) * c);
	return pp;
}
int * d_m_a(int size){
	int* p = (int*)malloc(sizeof(int) * size);
	return p;
}
void main(){
	int** names; // 함수에서 이름 3개 저장 jain, 홍길동 , sam
	int size = 10;
	int *p; 
	int**pp = 0;
	int size_r = 2;
	int size_c = 3;
	//names = 함수();
	printf("%s" , names[0]);
	printf("%s" , names[1]);
	printf("%s" , names[2]);
	/*int** pp;
	int* p_arr[2];
	int arr2[3];
	int arr3[3];
	pp = &p_arr[0];
	p_arr[0] = &arr2[0];
	p_arr[1] = &arr3[0];*/

	/*pp = (int**)malloc(sizeof(int*) * size_r);
	pp[0] = (int*)malloc(sizeof(int) * size_c);
	pp[1] = (int*)malloc(sizeof(int) * size_c);*/
	p = d_m_a(size);
	pp = dd_m_a(2,3);

	pp[0][0] = 100;
	pp[0][1] = 100;
	pp[0][2] = 100;
	pp[1][0] = 100;
	pp[1][1] = 100;
	pp[1][2] = 100;
	printf("%d\n" , pp[0][0]);
	// 응용문제 )  


}