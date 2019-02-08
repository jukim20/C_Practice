#include <stdio.h>
#include <stdlib.h>
void main(){
	int * p; int * t_p;
	int size = 12;
	int t_num;
	p = (int*)malloc(size);
	p[0] = 100; p[1] = 200; p[2] = 300;
	printf("정수 하나를 입력해주세요 >>");
	scanf_s("%d" , &t_num);
	t_p = p;
	p = (int*)malloc(size + 4);
	p[3] = t_num;
	p[0] =t_p[0];
	p[1] = t_p[1];
	p[2] = t_p[2];
	free(t_p);
}