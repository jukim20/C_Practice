#include <stdio.h>
int reset_pw(){
	printf("�����Һ�й�ȣ�� �Է��ϼ��� >>> 1234 ");
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
		printf("�Ա��� �ݾ��� �Է��ϼ��� >>> ");
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
		printf("�ܾ� >>> %d\n" , money);
		printf("1.�Ա�\n");
		printf("��ȣ�� �����ϼ��� >>> ");
		scanf("%d" , &select);
		if(select == 1){
			input_f(&money , &pw);	
		}
		printf("�ܾ� >>> %d\n" , money);
	}
}