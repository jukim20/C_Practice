#include <stdio.h>
int reset_pw(){
	printf("변경할비밀번호를 입력하세요 >>> 1234 ");
}
int check_pw(int* p_pw){
	if(*p_pw == 1234){
		return 1;
	}
	return 0;
}
void input_f(int* p_money , int*p_pw){
	int input_money;
	if(check_pw(p_pw) == 1){
		printf("입금할 금액을 입력하세요 >>> ");
		scanf("%d" , &input_money);
		*p_money += input_money;
	}
	else{
		reset_pw();
	}
}
void main(){
	int money = 5000;
	int select = 0;
	int input_money = 0;
	int pw = 1235;
	while(1){
		printf("======== ATM ==========\n");
		printf("잔액 >>> %d\n" , money);
		printf("1.입금\n");
		printf("번호를 선택하세요 >>> ");
		scanf("%d" , &select);
		if(select == 1){
			input_f(&money , &pw);	
		}
		printf("잔액 >>> %d\n" , money);
	}
}