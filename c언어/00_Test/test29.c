#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
void main(){
	//int arr[4];
	//malloc(16);
	int a;
	int arr[4];  // ������ 16byte
	int size = 3;
	int* p;
	double * pd;
	char* pc;
	malloc(16);  // ��������ؾߵȴ�.
	malloc(size * 4);
	(int*)malloc(size * 4);
	p =  (int*)malloc( size * 4);
	p[0] = 10;
	p[1] = 20;

	p[2] = 30;
	printf("�ּ� : %d\n" , &p[0]); 
	printf("�ּ� : %d\n" , &p[1]); 
	printf("�ּ� : %d\n" , &p[2]); 
	pd = (double*) malloc( size * 8);
	pd = (double*) malloc( size * sizeof(double));
	pd[0] = 10.0;
	pd[1] = 20.0;
	pd[2] = 30.0;
	printf("�ּ� : %d\n" , &pd[0]); 
	printf("�ּ� : %d\n" , &pd[1]); 
	printf("�ּ� : %d\n" , &pd[2]); 
	printf("�޸𸮻�����: %d\n" , sizeof(int));
	printf("�޸𸮻�����: %d\n" , sizeof(char));
	printf("�޸𸮻�����: %d\n" , sizeof(double));
	printf("�޸𸮻�����: %d\n" , sizeof(float));
	printf("�޸𸮻�����: %d\n" , sizeof(long));
}