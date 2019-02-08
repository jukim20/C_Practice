#include <stdio.h>
int t1;
void test1(){
	t1 = 2000;
}
void main(){	
	t1 = 1000;
	printf("t1: %d " , t1); printf("\n");
	test1();
	printf("t1: %d " , t1); printf("\n");
}
