#include <stdio.h>
void main(){	
	int a = 10;
	int* p = 0; // int*  ==> ������ ���� (�ּҸ� �������� �ִ�)
	int b = 20;
	int* p2 = 0;
	int temp;

	printf("a�� �� : %d\n" , a);
	printf("a�� �ּ� : %d\n" , &a);
	p = &a;
	printf("p : %d\n" , p);
	printf("p[0] : %d\n" , p[0]);
	p[0] = 2000;
	printf("a�� �� : %d\n" , a);

	p2 = &b;
	temp = p[0]; // a
	p[0] = p2[0]; // b
	p2[0] = temp;

	/*temp = a;
	a = b;
	b = temp;*/

	//������ p , p2 �� �̿��ؼ� �غ����� 
	printf("a�� �� : %d\n" , a); 
	printf("b�� �� : %d\n" , b); 

}