#include <stdio.h>
#include <stdlib.h>
void dma(int** pp){
	*pp = (int*)malloc(4*3);
}
void main(){
	int		a = 10;
	int*	p = 0;
	int**   pp =0;
	int*    d_p;
	p =		&a;
	pp =	&p;
	printf("%d\n" , a); // 10
	printf("%d\n" ,*p); // 10

	printf("%d\n" ,*pp); // º°
	printf("%d\n" , p);  // º°

	printf("%d\n" ,**pp);	// 10
	printf("%d\n" ,*(*pp)); // 10
	printf("%d\n" ,*p);		// 10
	printf("%d\n" ,a);		// 10
	//d_p = (int*)malloc(4*3);
	dma(&d_p);
	d_p[0] =10;
}