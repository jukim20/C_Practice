#include <stdio.h>  // printf(), scanf_s() ... 
#include <stdlib.h>  // rand() ==> �������ڸ� ��ȯ���ش�.
#include <time.h>	// srand() ==> �����õ带 �ʱ�ȭ���ش�.

void main() {
	
	int num1; int coin; int sel; int num;
	srand(time(0));  // �Ź� �ٸ� ���ڰ� �������� ���ش�. �������� �ٷ� �ؿ� �ѹ��� ���ָ� ��.
					 // �긦 �� ���� �ؿ� num1 = rand() �� �ص� ��� ���� ���� ����  

	num1 = rand() % 3;  // 0, 1, 2
	printf("%d", num1); printf("\n");

	// ���� 1) �������� 0~10 �� ���
	num1 = rand() % 11;
	printf("%d", num1); printf("\n");

	// ���� 2) �������� 0~10 �� ���� �� ¦�� Ȧ�� ���
	if (num1 % 2 == 0) {
		printf("¦��"); printf("\n");
	} else {
		printf("Ȧ��"); printf("\n");
	} 

	// ���� 3 ) coin �� �� ���� ==> ������ �յڸ� ���߸� ���� ���� ���
	coin = rand() % 2; // 0~1 ������ �� ����
	printf("��(0), ��(1)�� �Է��ϼ��� >>> ");
	scanf_s("%d", &sel);
	if (coin == sel) {
		printf("����!"); printf("\n");
	} else {
		printf("����"); printf("\n");
	}

	// ���� 4)
	coin = rand() % 11; // 0~10 ������ �� ����
	printf("Ȧ(0), ¦(1)�� �Է��ϼ��� >>> ");
	scanf_s("%d", &sel); 
	printf("������ ������ : %d", coin); printf("\n");

	if ((coin % 2 == 0 && sel == 1) || (coin % 2 == 1 && sel == 0)) {
		printf("����!"); printf("\n");
	} else {
		printf("����"); printf("\n");
	}

	// ���빮�� 1) 2~5 ������ ���ڰ� ��������
	num = (rand() % 4) + 2;
	printf("������ : %d", num); printf("\n");
	

	// ���빮�� 2) -10 ~ 10 ������ ���ڰ� ��������
	num = (rand() % 21) - 10
	printf("������ : %d", num); printf("\n");
}