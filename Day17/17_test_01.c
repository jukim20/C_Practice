#include <stdio.h>

void main() {
	int x = 0; int y = 0; int n = 0; int i; int total =0; int j;
	// �ݺ��� :
	// ���� 1) 20���� ¦���� ��
		for (i = 0; i < 20; i++) {
			if (i % 2 == 0) {
				total += i;
			}
		}
		printf("�� �� : %d", total); printf("\n");

	// ���� 2) x , y , n ���� ���� 3���� �Է� �ް�, x y �� ������� n�� �ѱ��� �ʰ� ���غ����� 
	// if ==> n = 50 // x , y == 3 , 6 // ��� ==> 18, 36

	printf("x�� �Է��ϼ��� >>> ");
	scanf_s("%d", &x);
	printf("y�� �Է��ϼ��� >>> ");
	scanf_s("%d", &y);
	printf("n�� �Է��ϼ��� >>> ");
	scanf_s("%d", &n);

	for (i = 1; i < n; i+= 1) {
		if (i % x == 0 && i % y == 0) {
			printf("%d", i); printf("\n");
		}
	}

	// ���� 3) ����� 
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

	// �ݺ��� ��ȭ) n�� �Է��ϸ� n������ �Ҽ�(�ڱ��ڽŰ� 1�θ� �������� ��)�� ����غ�����
	// n ==> 50 ==> 1, 3, 7, 11
}