#include <stdio.h>
void main(){
	int  a = 100;
	int  b = 200;
	int arr[2];

	int* p1 = 0;
	int* p2 = 0;
	int* p_arr[2];
	int** pp1 = 0;

	p1 = &a;
	p2 = &b;

	p_arr[0] = &a;
	p_arr[1] = &b;

	printf("%d\n" , *p1);
	printf("%d\n" , *p_arr[0]);

	pp1 = &p1;  //
	pp1 = &p_arr[0]; //


}