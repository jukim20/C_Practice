#include <stdio.h>
void swap(int* p1 , int* p2){
	int temp;
	temp = p1[0];
	p1[0] = p2[0];
	p2[0] = temp;
}
void main(){
	int a = 10;
	int b = 20;
	printf("%d\n" , a);
	printf("%d\n" , b);
	swap(&a , &b);
	//문제 1) 스왑함수를 만들어서 a, b 의 값을 교환해보세요.
	printf("%d\n" , a);
	printf("%d\n" , b);
}