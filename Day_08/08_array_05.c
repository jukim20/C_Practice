#include <stdio.h>

void main() {
	int test[6] = {-10, 5, 20, 60, -6, 34};
	int count = 0; int total = 0; int neg_count = 0; int pos_count = 0; int odd_count = 0;

	// �� �迭�� �� ���
	for (count = 0; count < 6; count += 1) {
		total += test[count]; 
	}
	printf("���� : %d", total); printf("\n");

	// �� �迭�� ���, ���� ���� ���
	for (count = 0; count < 6; count += 1) {
		if (test[count] < 0) {
			neg_count += 1;
		} else if (test[count] > 0) {
			pos_count += 1;
		}
	}
	printf("����� ���� : %d��, ������ ���� : %d��", pos_count, neg_count); printf("\n");

	// �� �迭�� Ȧ�� ���� ���
	for (count = 0; count < 6; count += 1) {
		if (test[count] % 2 == 1) {
			odd_count += 1;
		}
	}
	printf("Ȧ���� ���� : %d��", odd_count); printf("\n");

}