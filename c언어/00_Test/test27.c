#include <stdio.h>
// �⺻ �˰���(if + for + �迭)  + �⺻ ���� (�����͸�����)
// ( ==> �Լ� ==> ����ü ==> Ŭ����(����ü + �Լ�) )

// 1. for ==> 0~20 �����߿��� ¦���� �� ���Ѱ� ���
//	1)  �ε����� �Է¹ް� �ش� ���� ���.  2 ==> 30
void change_a(int* p, int num){
	*p = num;
}
void change_arr(int* p, int index){
	*(p+index) = 1000;  
	p[index] = 1000;
}
void main(){
	int arr[5] = {10,20,30,40,50};
	int* p = 0;
	int a = 10; int i ;	
	/*printf("%d\n" , a);
	change_a(&a , 110);
	printf("%d\n" , a);*/
	change_arr(&arr[0] , 3);
	for(i = 0; i < 5; i++){
		printf("�迭: %d\n" , arr[i]);
	}
	// arr[0]�� �ּҸ� ������ �Լ��� ������ .
	// �Լ� ���� arr[3] == 40 �� ���� 1000���� ���� �� ���
}