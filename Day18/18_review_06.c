#include <stdio.h>
#include <stdlib.h>
void test2(int **pp){  // ���������͸� ���� �ذ��ϴ� ��
	pp[0] = malloc(20);
	pp[0][0] = 300;
}
int* test3(){  // ���������� �� ���� �ذ��ϴ� ��. Ʈ���������� ����Ҷ� ����!
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