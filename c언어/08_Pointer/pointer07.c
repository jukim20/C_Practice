#include <stdio.h>

void main(){
	int a =  10;
	int b =  20;
	int temp;
	int c = 10;
	int d = 20;
	int* p1 = 0;
	int* p2 = 0;
	p1 = &c;
	p2 = &d;
	int e = 10;
	int f = 20;
	int* p3 = 0;
	int* p4 = 0;
	int** pp1 = 0;
	int** pp2 = 0;
	//���� 1 ) a b�� �� ��ȯ. 
	//���� 2 ) p1, p2 �� �̿��ؼ� c d�� �� ��ȯ
	//���� 3) pp1 , pp2 �� �̿��ؼ� e f �� �� ��ȯ
	printf("%d\n" ,a);
	printf("%d\n" ,b);
	printf("%d\n" ,c);
	printf("%d\n" ,d);
	printf("%d\n" ,e);
	printf("%d\n" ,f);
}