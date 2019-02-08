#include <stdio.h>

void main() {

	// 홍콩반점 : 내 돈 10 만원으로 변경 후 돈이 짜장면을 살 수 없을 때 종료
	// 조건 1) 돈이 짜장면을 살 수 없을때까지 반복
	// 조건 2) 짬뽕은 3그릇 남았다 ... (돈이 있어도 구매 불가)
	// 조건 3) 영수증 출력
	int sel; int money = 100000; int jja; int bbong; int tang;
	int jja_count; int bbong_count; int tang_count;


	printf("** 홍콩반점 **"); printf("\n");
	printf("1. 짜장면		6000원"); printf("\n");
	printf("2. 짬뽕			7000원"); printf("\n");
	printf("3. 탕수육		12000원"); printf("\n");
	
	jja = 6000;
	bbong = 7000;
	tang = 12000;
	jja_count = 0;
	bbong_count = 0;
	tang_count = 0;

	while (money >= jja) {
		printf("번호를 입력하세요 >>> " );
		scanf_s("%d", &sel);
		if (sel == 1) {
			money -= jja;
			jja_count += 1;
		} else if (sel == 2) {
			if (bbong_count < 3) {
				if (money >= bbong) {
					money -= bbong;
					bbong_count += 1;
				} else {
					printf("돈이 부족합니다."); printf("\n"); 
				}
			} else {
				printf("짬뽕이 품절되었습니다. 다른 메뉴를 골라주세요."); printf("\n");
			}
		} else if (sel == 3) {
			if (money >= tang) {
				money -= tang;
				tang_count += 1;
			} else {
				printf("돈이 부족합니다."); printf("\n");
			}
		} else {
			printf("잘못입력했습니다."); printf("\n");
		}
		printf("\n"); printf("** 영수증 **"); printf("\n");
		printf("짜장면 %d개", jja_count); printf("\t"); 
		printf("%d원", jja * jja_count); printf("\n");
		printf("짬뽕 %d개", bbong_count); printf("\t"); 
		printf("%d원", bbong * bbong_count); printf("\n");
		printf("탕수육 %d개", tang_count); printf("\t"); 
		printf("%d원", tang * tang_count); printf("\n");
		printf("현재 남은 돈 : %d원", money); printf("\n");
	}
	printf("돈이 부족합니다."); printf("\n");
}
