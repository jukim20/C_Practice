#include <stdio.h>
void change_a(int*    p){
}
void swap_ab(int*   p1, int*   p2){
}
void main(){
	int		a = 10;
	int*	p;
	int		b = 54;
	//���� 1) a�� ���� �Լ����� ����
	//���� 2) b�� ���� a �ǰ��� �Լ����� ��ȯ
	printf("a >>> %d\n" , a); //10 ==> 54
	printf("b >>> %d\n" , b); //54 ==> 10
}