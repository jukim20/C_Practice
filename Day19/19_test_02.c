#include <stdio.h>
#include <stdlib.h>  // malloc()
void test(){
	int b;
}
struct Student{
	int a;
	int b;
	int c;
};	
void main(){
	int a;	
	int arr[5];
	int* p;	 // ==> 4����Ʈ�� ���
	char* p;  // ==> 1����Ʈ�� ���
	struct Student* ps;

	a = 10;
	arr[0] = 100;
	arr[1] = 200;
	p = malloc(20);
	p[1] = 100;
	ps = (struct Student*)malloc(20);
	ps = (struct Student*)malloc(sizeof(struct Student) * 1);
	ps[0].
}