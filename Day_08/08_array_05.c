#include <stdio.h>

void main() {
	int test[6] = {-10, 5, 20, 60, -6, 34};
	int count = 0; int total = 0; int neg_count = 0; int pos_count = 0; int odd_count = 0;

	// 위 배열의 합 출력
	for (count = 0; count < 6; count += 1) {
		total += test[count]; 
	}
	printf("총합 : %d", total); printf("\n");

	// 위 배열의 양수, 음수 갯수 출력
	for (count = 0; count < 6; count += 1) {
		if (test[count] < 0) {
			neg_count += 1;
		} else if (test[count] > 0) {
			pos_count += 1;
		}
	}
	printf("양수의 갯수 : %d개, 음수의 갯수 : %d개", pos_count, neg_count); printf("\n");

	// 위 배열의 홀수 갯수 출력
	for (count = 0; count < 6; count += 1) {
		if (test[count] % 2 == 1) {
			odd_count += 1;
		}
	}
	printf("홀수의 갯수 : %d개", odd_count); printf("\n");

}