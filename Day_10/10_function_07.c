#include <stdio.h>
// ������ ����
//  1. �ڷ��� + * 
//  2. �̸� 
// �ּҸ� ������ �ִ� ����
// ������ ==> �ּ��� ������ ������ �����ϴ�.
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
	p = &a;  // a�� �ּҸ� �ּҺ����� �����Ѵ�.

	printf("4. %d" , p); printf("\n");
	//printf("5. %x" , p); printf("\n");

	printf("6. %d" , p[0]); printf("\n");
	//printf("%d" , *(p + 0)); printf("\n");
	p[0] = 2000;
	printf("7. %d" , a); printf("\n");

	test2(&a);
	printf("8. %d" , a); printf("\n");
}

