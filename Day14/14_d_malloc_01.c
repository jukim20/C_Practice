#include <stdio.h>
#include <stdlib.h>

void main(){
	int arr[3][4];
	int a = 200;
	int*  p  = NULL;
	int** pp = NULL;
	p = &a;
	pp = &p;
	printf("%d\n" , a);
	printf("%d\n" , p[0]);
	printf("%d\n" , pp[0][0]);

	printf("%d\n" , &a);
	printf("%d\n" , p);
	printf("%d\n" , pp[0]);

	printf("%d\n" , &p);
	printf("%d\n" , pp);

}