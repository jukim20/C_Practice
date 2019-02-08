#include <stdio.h>
// 포인터 변수
//  1. 자료형 + * 
//  2. 이름 
// 주소를 담을수 있는 변수
// 역참조 ==> 주소의 변수에 접근이 가능하다.
void test1(int num){}
void test2(int* p){
	p[0] = 3000;
}
void main(){	
	int a = 10;
	int* p = 0;
	printf("1. %d" , a); printf("\n");
	printf("2. %d" , &a); printf("\n");
	//printf("3. %x" , &a); printf("\n");
	p = &a;  // a의 주소를 주소변수에 저장한다.

	printf("4. %d" , p); printf("\n");
	//printf("5. %x" , p); printf("\n");

	printf("6. %d" , p[0]); printf("\n");
	//printf("%d" , *(p + 0)); printf("\n");
	p[0] = 2000;
	printf("7. %d" , a); printf("\n");

	test2(&a);
	printf("8. %d" , a); printf("\n");
}

