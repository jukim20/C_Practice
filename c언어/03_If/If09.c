#include <stdio.h>
void main(){
	int num;
	int my_money = 1000;
	int pw = 1234;
	int input_money;
	printf("**** 코리아 ATM ****\n");
	printf("1.입금\n");
	printf("2.출금\n");
	printf("번호를 입력하세요 >> \n");
	scanf("%d" , &num);
	if(num == 1){
		printf("입금할 금액을 입력하세요 >>>\n");
		scanf("%d" , &input_money);
		my_money = my_money + input_money;
		printf("잔액은 %d 원 입니다. 이용해주셔서 감사합니다\n" , my_money);
	}
	if(num == 2){
	}
	//문제 ) 위 의 기능을 추가해보세요. 입금 출금 	
	//응용 ) 추가 조건) pw 추가
}