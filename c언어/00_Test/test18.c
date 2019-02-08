#include <stdio.h>
void test(){
	int a = 10;
	int* p = 0;
	int b = 0;
}
void change_a(int *p){
	*p = 123;
}
void main(){
	int		a = 10;
	int*	p = 0;
	int     b = 0;
	//  int a = 10;
	p = &a;
	printf("%d\n" , &a);
	printf("%d\n" , p);
	p = &b;
	*p = 200;
	//a = 200;
	printf("%d\n" , a);
	printf("%d\n" , b);
	test();
	change_a(&a);
	printf("%d\n" , a);
}