#include <stdio.h>

void main() {
	int count; int num; int total; int i; int num1; int num2; int temp; int product; 

	if(1) {
		printf("����������");  // ������ 1(��)�̸� ���� �� ����
		printf("\n");
	}
	/*
		while(1) {
		printf("�ݺ�������1");  // ������ 1(��)�Ƹ� ���� �� �ٽ� �������� ����. 
		printf("�ݺ�������2");  // ���� �ݺ�; �������� �ݵ�� ���������� �������Ѵ�. 
	*/

	count = 0;
	while (count < 10) {
		printf("%d", count);
		// printf("\t");  // tab; ���� ����
		printf("\n");
		count += 1;
	}

	// ���� 1) 0~10���� ����ϼ���.
	num = 0;
	while (num < 11) {
		printf("%d", num); printf("\n");
		num += 1;
	}

	// ���� 2) 0~10���� ¦���� ����ϼ��� 
	num = 0;
	while (num < 11) {
		if (num % 2 == 0) {
			printf("%d", num); printf("\n");
		}
		num += 1;
	}

	// ���� 3) 0~10���� �����
	num = 0;
	total = 0;
	while (num < 11) {
		total += num;
		num += 1;
	}
	printf("�� �� : %d", total); printf("\n");

	// ���� 4) ���� �ϳ��� �Է� �ް� 0~���ڱ����� �����
	printf("���� �ϳ��� �Է��ϼ��� >>> ");
	scanf_s("%d", &num);
	
	i = 0;
	total = 0;
	while (i <= num) {
		total += i;
		i += 1;
	}
	printf("�� �� : %d", total); printf("\n");

	// ���� 5) ���� 2���� �Է� �ް� �� ���� ������ �� ���
	printf("���� 1�� �Է��ϼ��� >>> ");
	scanf_s("%d", &num1);

	printf("���� 2�� �Է��ϼ��� >>> ");
	scanf_s("%d", &num2);

	if (num2 < num1) {
		temp = num2;
		num2 = num1;
		num1 = temp;
	}
	total = 0;
	while (num1 <= num2) {
		total += num1;
		num1 += 1;
	}
	printf("�� �� : %d", total); printf("\n");

	// ���� 6) ������ �ܼ��� �Է¹����� �ش� ���� ��� ==> 2 ==> 2��
	printf("������ �ܼ��� �Է��ϼ��� >>> ");
	scanf_s("%d", &num); 

	i = 0;
	while (i < 10) {
		product = i * num; 
		printf("%d * %d = %d", num, i, product); printf("\n");
		i += 1;
	}
