#include <stdio.h>

void swap_pointer(int* p1 , int* p2){
	int temp;
	temp = p1[0];
	p1[0] = p2[0];
	p2[0] = temp;
}
void main(){	
	int a = 10;
	int b = 20;
	printf("a�� �� : %d\n" , a); 
	printf("b�� �� : %d\n" , b); 

	swap_pointer(&a , &b);
	printf("==================\n");
	printf("a�� �� : %d\n" , a); 
	printf("b�� �� : %d\n" , b); 

}