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
	//���� 1) �����Լ��� ���� a, b �� ���� ��ȯ�غ�����.
	printf("%d\n" , a);
	printf("%d\n" , b);
}