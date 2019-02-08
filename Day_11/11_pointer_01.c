#include <stdio.h>
void main(){	
	int a = 10;
	int* p = 0; // int*  ==> 포인터 변수 (주소를 담을수가 있다)
	int b = 20;
	int* p2 = 0;
	int temp;

	printf("a의 값 : %d\n" , a);
	printf("a의 주소 : %d\n" , &a);
	p = &a;
	printf("p : %d\n" , p);
	printf("p[0] : %d\n" , p[0]);
	p[0] = 2000;
	printf("a의 값 : %d\n" , a);

	p2 = &b;
	temp = p[0]; // a
	p[0] = p2[0]; // b
	p2[0] = temp;

	/*temp = a;
	a = b;
	b = temp;*/

	//스왑을 p , p2 를 이용해서 해보세요 
	printf("a의 값 : %d\n" , a); 
	printf("b의 값 : %d\n" , b); 

}