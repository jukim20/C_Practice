#include <stdio.h>
// 더블 포인터
// int**  ==> 포인터변수의 주소를 저장할수있다
// ** ==> 역참조 가 2번 가능하다.
void main(){
	int		a = 10;
	int*	p = 0;
	int**  pp = 0;
	p  = &a;
	pp = &p;	
	// p의 주소 
	printf("%d\n" ,  &p);
	printf("%d\n" ,  pp);
	// a의 주소
	printf("%d\n" , &a);
	printf("%d\n" , p);
	printf("%d\n" , *pp);
	// a의 값 
	printf("%d\n" , a);
	printf("%d\n" , *p);
	printf("%d\n" , **pp);
}