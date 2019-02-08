#include <stdio.h>
void input(int* p1 , int* p2){
	int input_money;
	printf("입금할 금액을 입력하세요 >>");
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
	printf("내돈 : %d\n" , pocket_money);
	printf("저금 : %d\n" , atm_money);
	printf("ATM\n");
	printf("1.입금\n");
	printf("2.출금\n");
	printf("3.조회\n");
	printf("4.종료\n");
	printf("번호를 입력하세요 >> \n");
	scanf_s("%d" , &sel);
	if(sel == 1){input(&pocket_money , &atm_money);}
	if(sel == 2){output();}
	if(sel == 3){print();}
	printf("내돈 : %d\n" , pocket_money);
	printf("저금 : %d\n" , atm_money);
}