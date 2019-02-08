#include <stdio.h>
void show_num(int a){
	printf("1: %d\n" , a);
	a = 100;
	printf("2: %d\n" , a);
}
void main(){
	int a = 10;
	show_num(a);
	printf("3: %d\n" , a);
}