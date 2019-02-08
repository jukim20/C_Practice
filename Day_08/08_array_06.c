#include <stdio.h>

void main() {
	int n; int x; int y;
	int arr[5] = {10, 20, 31, 40, -50}; 
	int arr2[6] = {0, 10, 20, 30, 40, 50};
	int count = 0; int value; int total = 0; int i = 0; 
	// 반복문 문제:
	// 1. 0~20까지 짝수의 합
	while (count < 5) {
		if (arr[count] % 2 == 0) {
			total += arr[count];
		}
	}
	printf("총 합 : %d", total); printf("\n");
	printf("======================================"); printf("\n");

	// 반복문 심화:
	// 1. total 을 0~1000까지 누적시키고 1000 직전의 num과 total 출력

	total = 0;
	for (count = 0; count < 999; count += 1) {
		total += count; 
	}
	printf("숫자 : %d, 총합 : %d", count, total); printf("\n");
	printf("======================================"); printf("\n");

	// 2. n, x, y 를 입력받고 x y 의 공배수를 n 미만까지 출력
	// 예) 50, 3, 4, ==> 12, 24, 48
	printf("n을 입력하세요 >>> ");
	scanf_s("%d", &n);
	printf("x를 입력하세요 >>> "); 
	scanf_s("%d", &x);
	printf("y를 입력하세요 >>> "); 
	scanf_s("%d", &y);

	for (count = 1; count < n; count += 1) {
		if (count % x == 0 && count % y == 0) {
			printf("%d", count);
		}
	}
	printf("======================================"); printf("\n");

	// 배열:
	// 1. 인덱스로 값 찾기 

	printf("인덱스를 입력하세요 >>> "); 
	scanf_s("%d", i);

	while (count < 5) {
		if (arr[count] == arr[i]) {
			printf("해당 인덱스의 값 : %d", arr[i]);
		}
		count += 1;
	}
	printf("======================================"); printf("\n");

	// 2. 합출력
	// 3. 값으로 인덱스 찾기
	// 4. 양수 갯수
	// 5. 짝수 갯수 출력

	printf("값을 입력하세요 >>> ");
	scanf_s("%d", &value); 

	count = 0;
	while (count < 5) {
		if (value == arr[count]) {
			printf("인덱스 : %d", count); printf("\n");
		}
		count += 1; 
	}
	printf("======================================"); printf("\n");

	// 6. 숫자 2를 입력받으면 0이 오른쪽으로 이동.
	// 예 ) 2 ==> {10, 0, 20, 30, 40, 50} , 2 ==> {10, 20, 0, 30, 40, 50}
}