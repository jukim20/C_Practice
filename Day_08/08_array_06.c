#include <stdio.h>

void main() {
	int n; int x; int y;
	int arr[5] = {10, 20, 31, 40, -50}; 
	int arr2[6] = {0, 10, 20, 30, 40, 50};
	int count = 0; int value; int total = 0; int i = 0; 
	// �ݺ��� ����:
	// 1. 0~20���� ¦���� ��
	while (count < 5) {
		if (arr[count] % 2 == 0) {
			total += arr[count];
		}
	}
	printf("�� �� : %d", total); printf("\n");
	printf("======================================"); printf("\n");

	// �ݺ��� ��ȭ:
	// 1. total �� 0~1000���� ������Ű�� 1000 ������ num�� total ���

	total = 0;
	for (count = 0; count < 999; count += 1) {
		total += count; 
	}
	printf("���� : %d, ���� : %d", count, total); printf("\n");
	printf("======================================"); printf("\n");

	// 2. n, x, y �� �Է¹ް� x y �� ������� n �̸����� ���
	// ��) 50, 3, 4, ==> 12, 24, 48
	printf("n�� �Է��ϼ��� >>> ");
	scanf_s("%d", &n);
	printf("x�� �Է��ϼ��� >>> "); 
	scanf_s("%d", &x);
	printf("y�� �Է��ϼ��� >>> "); 
	scanf_s("%d", &y);

	for (count = 1; count < n; count += 1) {
		if (count % x == 0 && count % y == 0) {
			printf("%d", count);
		}
	}
	printf("======================================"); printf("\n");

	// �迭:
	// 1. �ε����� �� ã�� 

	printf("�ε����� �Է��ϼ��� >>> "); 
	scanf_s("%d", i);

	while (count < 5) {
		if (arr[count] == arr[i]) {
			printf("�ش� �ε����� �� : %d", arr[i]);
		}
		count += 1;
	}
	printf("======================================"); printf("\n");

	// 2. �����
	// 3. ������ �ε��� ã��
	// 4. ��� ����
	// 5. ¦�� ���� ���

	printf("���� �Է��ϼ��� >>> ");
	scanf_s("%d", &value); 

	count = 0;
	while (count < 5) {
		if (value == arr[count]) {
			printf("�ε��� : %d", count); printf("\n");
		}
		count += 1; 
	}
	printf("======================================"); printf("\n");

	// 6. ���� 2�� �Է¹����� 0�� ���������� �̵�.
	// �� ) 2 ==> {10, 0, 20, 30, 40, 50} , 2 ==> {10, 20, 0, 30, 40, 50}
}