#include <stdio.h>
#include <stdlib.h>

// ��� �Է� ���� ������(4) ���ǹ� (�ݺ��� �迭)  // ��� ����� �⺻

/*
	while (�ݺ���)
		1. while ==> Ű����
		2. (����) ==> ������ ��(1) �̸� {���๮} ����
		3. {���๮} ==> ���๮�� ���� ���� �� �ٽ� �������� �̵��Ѵ�. (�ݵ�� ���������� �ʿ�)

*/
void main() {
	//int num1 = 10;
	int num = 0; int total;
	int num2 = 0; // 1. �ʱ��
	/*
	int num2 = 0;

	if (num1 == 10) {
		printf("if ��"); printf("\n");
	}
	*/

	while (num2 < 10) {  // 2. ���ǽ�
		printf("�ݺ���"); printf("\n");
		num2 += 1;  // 3. ������
	}
	printf("=============================================="); printf("\n");
	// ���� 1) 0 ~ 20���� ���
	while (num <= 20) {
		printf("%d", num); printf("\n");
		num += 1;
	}
	printf("=============================================="); printf("\n");

	// ���� 2) 10 ~ 20���� ���
	num = 10;
	while (num <= 20) {
		printf("%d", num); printf("\n");
		num += 1;
	}
	printf("=============================================="); printf("\n");
	// ���� 3) 0 ~ 10���� �߿��� ¦���� ���
	num = 0;
	while (num <= 10) {
		if (num % 2 == 0) {
			printf("%d", num); printf("\n");
		}
		num += 1;
	}

	printf("=============================================="); printf("\n");
	// ���� 4) 0 ~ 10 ���� �� ���
	num = 0;
	total = 0;

	while (num <= 10) {
		total += num;
		num += 1;
	}
	printf("%d", total); printf("\n");
}