#include <stdio.h>
void swap_p1p2(int** pp1 , int** pp2){
	int * temp;
	temp = *pp1;
	*pp1 = *pp2;
	*pp2 = temp;
}
void main(){
	int a; int b;
	int* p1; int * p2;
	a = 10;
	b = 20;
	p1 = &a;
	p2 = &b;
// 1. 아래의 결과를 main()에서 만들기
// 2. 아래의 결과를 함수를 만들어서 해결하기 
	swap_p1p2(&p1 , &p2);

//////////////////////////////////////////////
	printf("%d\n" , a); // 10
	printf("%d\n" , b); // 20
	printf("%d\n" , *p1); // 10  ==> 20 
	printf("%d\n" , *p2); // 20  ==> 10

}