#include <stdio.h>
void show_num(int num){
	printf("%d\n" ,num);
}
void adder(int num1 , int num2){
	printf("%d\n" , num1 + num2);
}
void show_even(int num1){
	if(num1 % 2 == 0){
		printf("¦��\n");
	}
	else{
		printf("Ȧ��\n");
	}
}
void main(){
	//�Լ� ����
	// 1) ���ڸ� �Է¹ް� �ش� ���ڸ� ������ִ� �Լ�
	// 2) ���� 2���� �Է¹ް� ���ϱ⸦ ������ִ� �Լ�.
	// 3) ���ڸ� �Ѱ� �Է¹ް� ¦�� Ȧ�� ������ִ� �Լ�.
	show_num(10);
	adder(5,4);
	show_even(5);
}