#include <stdio.h>
#include <stdlib.h>
// void d_malloc(int*** ppp){} ������ 3���� �ʹ� �����ϴ�.
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
	// ���� 1) pp �޸��Ҵ��� �Լ����� �غ���
	// ���� 2) pp �޸����� (4���� ���� ������Ѵ�)
}