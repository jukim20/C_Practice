#include <stdio.h>
void main() {
	int i = 0; int total; int n; int x; int y;
	// 1. 0~20���� ¦���� �� ���
	total = 0;
	for (i = 0; i <= 20; i += 2) {
		total += i;
	}
	printf("���� : %d", total); printf("\n");

	// 2. total �� >> 0~1000���� ��� ������Ű�� 1000������ num�� total ���
	total = 0;
	for (i = 0; i < 999; i += 1) {
		total += i;
	}
	printf("num : %d, total : %d", i, total); printf("\n");

	// 3. n, x, y �� 50 , 3 , 4 �� �Է¹ް� x y �� ������� n �̸����� ���
	// �� ) 50 , 3, 4 ==> 12, 24, 36, 48
	// �� ) 100 , 3 , 5 ==> 15, 30, 45, 60, 75, 90
	printf("n�� �Է��ϼ��� >>> ");
	scanf_s("%d", &n);
	printf("x�� �Է��ϼ��� >>> ");
	scanf_s("%d", &x);
	printf("y�� �Է��ϼ��� >>> ");
	scanf_s("%d", &y);

	for (i = 1; i < n; i += 1) {
		if (i % x == 0 && i % y == 0) {
			printf("%d", i); printf("\n");
		}
	}

	
	
}