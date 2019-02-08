#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	int money = 50000;
	int number = 0;
	int count = 3;
	while(money > 5000){
		printf(" *** 홍콩반점 ***\n");
		printf(" 1. 짜장면   5000원\n");
		printf(" 2. 짬뽕		6000원\n");
		printf(" 3. 탕수육   12000원\n");
		printf("번호를 입력하세요 >>> ");
		scanf("%d" , &number);
		if(number == 1 ){
			if(count > 0){
				money = money - 5000;
				count = count - 1;
			}
			else {
				printf("짜장면이 다떨어졌습니다\n");
			}
		}
		printf("잔액 : %d\n"  , money);
	}
	printf("프로그램종료\n");
	// for문으로 바꿔보자
	//추가조건 짜장면은 3그릇밖에 안남았다.
}