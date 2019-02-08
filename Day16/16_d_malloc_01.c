#include <stdio.h>
#include <stdlib.h>
// void d_malloc(int*** ppp){} 포인터 3개는 너무 복잡하다.
int** d_malloc_r(){
	int** pp;
	int row_size = 3;
	int col_size = 4;	
	pp = (int**)malloc(sizeof(int*) * row_size);
	pp[0] = (int*)malloc(sizeof(int) * col_size);
	pp[1] = (int*)malloc(sizeof(int) * col_size);
	pp[2] = (int*)malloc(sizeof(int) * col_size);
	return pp;
}
int * malloc_r(){
	int *p = (int*)malloc(sizeof(int) * 10);
	return p;
}
void main(){
	int** pp;
	int* p;	int i;
	p = malloc_r();
	pp = d_malloc_r();
	pp[0][0] =100;
	printf("%d\n" , pp[0][0]);
	for (i = 0; i < 3; i++){
		free(pp[i]);
	}
	free(pp);
	/*pp = (int**)malloc(sizeof(int*) * row_size);
	pp[0] = (int*)malloc(sizeof(int) * col_size);
	pp[1] = (int*)malloc(sizeof(int) * col_size);
	pp[2] = (int*)malloc(sizeof(int) * col_size);*/
	// 문제 1) pp 메모리할당을 함수에서 해보기
	// 문제 2) pp 메모리해제 (4개를 전부 해줘야한다)
}