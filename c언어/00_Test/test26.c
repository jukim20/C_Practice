#include <stdio.h>
void change_a(int* p, int num){
	*p = num;
}
void main(){
	int a = 10;
	int* p = 0;
	p = &a;
	printf("%d\n" , a);  //10
	printf("%d\n" , *(p+0)); //10
	*p  = 100;
	printf("%d\n" , a);

	change_a(&a , 200);
	printf("%d\n" , a);
}