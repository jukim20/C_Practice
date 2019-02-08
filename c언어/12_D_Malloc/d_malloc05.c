#include <stdio.h>
void d_a(){
}
void main(){
	int arr1[3];
	int arr2[3];
	int* p_arr[2];
	int** pp;
	pp = &p_arr[0];
	p_arr[0] = &arr1[0];
	p_arr[1] = &arr2[0];
	pp[0][0] = 100;
	pp[1][2] = 500;
	arr2[2] = 500;
	printf("%d\n", arr2[2]);
}