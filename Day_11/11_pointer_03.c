#include <stdio.h>
void input(int* p1 , int* p2){
	int input_money;
	printf("�Ա��� �ݾ��� �Է��ϼ��� >>");
	scanf_s("%d" , &input_money);
	p2[0] += input_money;
	p1[0] -= input_money;
}
void output(){}
void print(){}
void main(){	
	int pocket_money = 2000;
	int atm_money = 3000;
	int sel = 0;
	printf("���� : %d\n" , pocket_money);
	printf("���� : %d\n" , atm_money);
	printf("ATM\n");
	printf("1.�Ա�\n");
	printf("2.���\n");
	printf("3.��ȸ\n");
	printf("4.����\n");
	printf("��ȣ�� �Է��ϼ��� >> \n");
	scanf_s("%d" , &sel);
	if(sel == 1){input(&pocket_money , &atm_money);}
	if(sel == 2){output();}
	if(sel == 3){print();}
	printf("���� : %d\n" , pocket_money);
	printf("���� : %d\n" , atm_money);
}