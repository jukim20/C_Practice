#include <stdio.h>
#include <stdlib.h>
void test2(int **pp){  // 더블포인터를 쓰고 해결하는 법
	pp[0] = malloc(20);
	pp[0][0] = 300;
}
int* test3(){  // 더블포인터 안 쓰고 해결하는 법. 트리플포인터 써야할때 유용!
	int *p;
	p = malloc(20);
	p[0] = 10;
	return p;
}
void test(int *p){
	p[0] = 23;
}
void main(){	
	/*int a =100;
	test(&a);
	printf("%d" , a);*/
	int*p;	
	//test2(&p);
	p = test3();
	printf("%d\n" , p[0]);
}