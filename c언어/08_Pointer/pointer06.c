#include <stdio.h>
// ���� ������
// int**  ==> �����ͺ����� �ּҸ� �����Ҽ��ִ�
// ** ==> ������ �� 2�� �����ϴ�.
void main(){
	int		a = 10;
	int*	p = 0;
	int**  pp = 0;
	p  = &a;
	pp = &p;	
	// p�� �ּ� 
	printf("%d\n" ,  &p);
	printf("%d\n" ,  pp);
	// a�� �ּ�
	printf("%d\n" , &a);
	printf("%d\n" , p);
	printf("%d\n" , *pp);
	// a�� �� 
	printf("%d\n" , a);
	printf("%d\n" , *p);
	printf("%d\n" , **pp);
}