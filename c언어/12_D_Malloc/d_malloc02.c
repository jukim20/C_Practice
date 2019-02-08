#include <stdio.h>
#include <stdlib.h>
void main(){
	int arr[2][3]; //세로 가로  rows , column
	int i; int value = 0;int total = 0;int n;
	int** pp;
	int* p;
	int a;
	a = 10;
	p = &a;
	pp= &p;
	//printf("%d\n" , a);
	//printf("%d\n" , *p);
	//printf("%d\n" , **pp);
	printf("a: %d\n" , a);

	printf("&a: %d\n" , &a);
	printf("p: %d\n" , p);

	printf("&p: %d\n" , &p);
	printf("pp : %d\n" , pp);	
	
	for(i = 0; i < 2; i++){
		for(n = 0; n< 3; n++){
			arr[i][n] = value;
			value++;
		}
	}
	for(i = 0; i < 2; i++){
		for(n = 0; n< 3; n++){
		//	printf("%d" , arr[i][n]); 
		}
	//	printf("\n");
	}







}