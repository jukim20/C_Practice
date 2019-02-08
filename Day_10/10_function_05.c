#include <stdio.h>
void test1(int num){
	num = 100;
}
void main(){
	int a = 10;
	test1(a);	
	printf("a: %d " , a); printf("\n");
}
