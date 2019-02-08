#include <stdio.h>

void test00(int b){
	printf("함수1: %d\n" ,b);
}
void test01(int* p){
	printf("함수2: %d\n" ,p);
	*p = 2000;
}
void main(){
	int a =  1000;
	int* p = 0;
	//a = 1000;
	//printf("&a: %d\n" , &a); //엠퍼센트
	//p = &a;
	//printf("*p: %d\n" , *p); 
	//*p = 100;
	//printf("a: %d\n" , a);
	test00(a);
	test01(&a);
	printf("a: %d\n" , a);
}