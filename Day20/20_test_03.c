#include <stdio.h>
#include <stdlib.h>
void main(){
	int  a;int *p;int**pp; int arr[3][4]; int** t_pp; int i; int n;
	/*a = 20;
	p = &a;
	printf("%d\n" , p[0]);
	pp = &p;
	printf("%d\n" , pp[0][0]);*/	
	pp = (int**)malloc(12);  // int* p[3];
	pp[0] = (int*)malloc(20);
	pp[1] = (int*)malloc(20);
	pp[2] = (int*)malloc(20);
	for(i = 0; i < 3; i++){
		for(n = 0; n < 5; n ++){
			pp[i][n] = (i+1) * (n+1);
		}
	}
	for(i = 0; i < 3; i++){
		for(n = 0; n < 5; n ++){
			printf("%d\t" , pp[i][n]);
		}
		printf("\n");
	}
	printf("\n");printf("\n");
	t_pp = pp;
	pp = (int**)malloc(16);
	pp[3] = (int*)malloc(20);
	pp[0] = t_pp[0];
	pp[1] = t_pp[1];
	pp[2] = t_pp[2];
	pp[3][0] = 20; pp[3][1] = 30; pp[3][2] = 50;pp[3][3] = 50;pp[3][4] = 50;
	free(t_pp);
	for(i = 0; i < 4; i++){
		for(n = 0; n < 5; n ++){
			printf("%d\t" , pp[i][n]);
		}
		printf("\n");
	}
}
//
//int* p[2];
//p[0]= (int*)malloc(20);
//p[1] = (int*)malloc(20);