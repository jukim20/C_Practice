#include <stdio.h>
#include <stdlib.h>
void main(){
	int a;
	int* p;
	int arr[5]; //==> ũ�⺯��Ұ�
	int size = 20;
	malloc(size); // 1. ũ�� ��� ������� 
	//2. ������ �Ұ��� // 3. ����������. ��������
	p = malloc(20);
	p = (int*)malloc(20);
	p[0] = 100;
	p[4] = 300;
	free(p);
	p = NULL;

	






}