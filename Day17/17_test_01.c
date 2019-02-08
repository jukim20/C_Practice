#include <stdio.h>

void main() {
	int x = 0; int y = 0; int n = 0; int i; int total =0; int j;
	// 반복문 :
	// 문제 1) 20까지 짝수의 합
		for (i = 0; i < 20; i++) {
			if (i % 2 == 0) {
				total += i;
			}
		}
		printf("총 합 : %d", total); printf("\n");

	// 문제 2) x , y , n 양의 정수 3개를 입력 받고, x y 의 공배수를 n을 넘기지 않고 구해보세요 
	// if ==> n = 50 // x , y == 3 , 6 // 결과 ==> 18, 36

	printf("x를 입력하세요 >>> ");
	scanf_s("%d", &x);
	printf("y를 입력하세요 >>> ");
	scanf_s("%d", &y);
	printf("n을 입력하세요 >>> ");
	scanf_s("%d", &n);

	for (i = 1; i < n; i+= 1) {
		if (i % x == 0 && i % y == 0) {
			printf("%d", i); printf("\n");
		}
	}

	// 문제 3) 별찍기 
	/*
	&&&&&
	&&&&
	&&&
	&&
	&
	*/

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("&");
			if (j % 5 == 1) {
				printf("\n");
			}
		}
	}

	// 반복문 심화) n을 입력하면 n까지의 소수(자기자신과 1로만 나눠지는 수)를 출력해보세요
	// n ==> 50 ==> 1, 3, 7, 11
}