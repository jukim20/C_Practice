#include <stdio.h>

void test00(int b){
	printf("�Լ�1: %d\n" ,b);
}
void test01(int* p){
	printf("�Լ�2: %d\n" ,p);
	*p = 2000;
}
void main(){
	int a =  1000;
	int* p = 0;
	//a = 1000;
	//printf("&a: %d\n" , &a); //���ۼ�Ʈ
	//p = &a;
	//printf("*p: %d\n" , *p); 
	//*p = 100;
	//printf("a: %d\n" , a);
	test00(a);
	test01(&a);
	printf("a: %d\n" , a);
}