#include <stdio.h>
void main(){
	int sel = 0;int my_money = 1000; int atm_money = 2000;
	int in = 0; int out = 0;
	while(sel != 4){
		printf(" === ATM === ");printf("\n");
		printf("1. 입금");printf("\n");
		printf("2. 출금");printf("\n");
		printf("3. 조회");printf("\n");
		printf("4. 종료");printf("\n");
		printf("번호를 입력하세요 >> ");printf("\n");
		scanf_s("%d" , &sel);
		if (sel == 1){
			printf("입금할 금액을 입력하세요 >> ");
			scanf_s("%d" , &in);
			atm_money += in;
			my_money -= in;
		}
		if (sel == 2){
			printf("출금할 금액을 입력하세요 >> ");
			scanf_s("%d" , &out);
			atm_money -= out;
			my_money += out;
		}
		if (sel == 3){
			printf("잔액 >> %d", atm_money);printf("\n");
			printf("내돈 >> %d", my_money);printf("\n");
		}
	}
}	