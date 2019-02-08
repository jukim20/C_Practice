#include <stdio.h>
void main() {
	int i = 0; int total; int n; int x; int y;
	// 1. 0~20까지 짝수의 합 출력
	total = 0;
	for (i = 0; i <= 20; i += 2) {
		total += i;
	}
	printf("총합 : %d", total); printf("\n");

	// 2. total 을 >> 0~1000까지 계속 누적시키고 1000직전의 num과 total 출력
	total = 0;
	for (i = 0; i < 999; i += 1) {
		total += i;
	}
	printf("num : %d, total : %d", i, total); printf("\n");

	// 3. n, x, y 에 50 , 3 , 4 를 입력받고 x y 의 공약수를 n 미만까지 출력
	// 예 ) 50 , 3, 4 ==> 12, 24, 36, 48
	// 예 ) 100 , 3 , 5 ==> 15, 30, 45, 60, 75, 90
	printf("n을 입력하세요 >>> ");
	scanf_s("%d", &n);
	printf("x를 입력하세요 >>> ");
	scanf_s("%d", &x);
	printf("y를 입력하세요 >>> ");
	scanf_s("%d", &y);

	for (i = 1; i < n; i += 1) {
		if (i % x == 0 && i % y == 0) {
			printf("%d", i); printf("\n");
		}
	}

	
	
}