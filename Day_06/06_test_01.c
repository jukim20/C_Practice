#include <stdio.h>
// 1. ��� 2. �Է� 3. ���� 4. ������ 5. ���ǹ� 6. �ݺ��� 7. (�迭)

void main() {
	int num; int kr; int eng; int math; int total; float avg; int grade;
	int time; int min; int sec; int i; int num1; int num2; int temp; int product;

	// ���� 1) ���� �ϳ��� �Է� �ް� "¦��" "Ȧ��" "���" "����" ���
	printf("���� �ϳ��� �Է��ϼ��� >>> "); 
	scanf_s("%d", &num);

	if (num % 2 == 0) {
		printf("¦���Դϴ�."); printf("\n");
	} else {
		printf("Ȧ���Դϴ�."); printf("\n");
	}

	if (num > 0) {
		printf("����Դϴ�."); printf("\n");
	} else if (num < 0) {
		printf("�����Դϴ�."); printf("\n");
	} else {
		printf("0 �Դϴ�."); printf("\n");
	}

	// ���� 2) ���� 3���� �Է¹ް� ��, ��� ���
	printf("���� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &kr);

	printf("���� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &eng);

	printf("���� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &math);

	total = kr + eng + math;
	avg = total / 3;
	
	printf("�� �� : %d", total); printf("\n");
	printf("��� : %.2f", avg); printf("\n");
	
	// ���� 3) ���� 1���� �Է¹ް� 60 �̻� �հ�, ���հ� ���
	printf("������ �Է��ϼ��� >>> ");
	scanf_s("%d", &grade);

	if (grade >= 60) {
		printf("�հ��Դϴ�!"); printf("\n");
	} else {
		printf("���հ��Դϴ�."); printf("\n");
	}

	// ���� 4) �ʸ� �Է� �ް� ���ʸ� ���. �� ) 100 ==> 1�� 40��
	printf("�ʸ� �Է��ϼ��� >>> "); 
	scanf_s("%d", &time);

	min = time / 60; 
	sec = time % 60;

	printf("%d�� %d���Դϴ�.", min, sec); printf("\n");

	// ���� 5) 0~10���� ����ϼ���.
	num = 0;
	while (num < 11) {
		printf("%d", num); printf("\n");
		num += 1;
	}

	// ���� 6) 0~10���� ¦���� ����ϼ��� 
	num = 0;
	while (num < 11) {
		if (num % 2 == 0) {
			printf("%d", num); printf("\n");
		}
		num += 1;
	}

	// ���� 7) 0~10���� �����
	num = 0;
	total = 0;
	while (num < 11) {
		total += num;
		num += 1;
	}
	printf("�� �� : %d", total); printf("\n");

	// ���� 8) ���� �ϳ��� �Է� �ް� 0~���ڱ����� �����
	printf("���� �ϳ��� �Է��ϼ��� >>> ");
	scanf_s("%d", &num);
	
	i = 0;
	total = 0;
	while (i <= num) {
		total += i;
		i += 1;
	}
	printf("�� �� : %d", total); printf("\n");

	// ���� 9) ���� 2���� �Է� �ް� �� ���� ������ �� ���
	printf("���� 1�� �Է��ϼ��� >>> ");
	scanf_s("%d", &num1);

	printf("���� 2�� �Է��ϼ��� >>> ");
	scanf_s("%d", &num2);

	if (num2 < num1) {
		temp = num2;
		num2 = num1;
		num1 = num2;
	}
	total = 0;
	while (num1 <= num2) {
		total += num1;
		num1 += 1;
	}
	printf("�� �� : %d", total); printf("\n");

	// ���� 10) ������ �ܼ��� �Է¹����� �ش� ���� ��� ==> 2 ==> 2��
	printf("������ �ܼ��� �Է��ϼ��� >>> ");
	scanf_s("%d", &num);

	i = 0;
	while (i < 10) {
		product = i * num; 
		printf("%d * %d = %d", num, i, product);
		i += 1;
	}

	// (�ݺ��� ��ȭ)
	// ���� 11) ����Ų��� 31 ==> me , ai , br31 ������ �����.
	// ���� 12)  me �� 1~3�� �Է¹ް� ai �� 1~3 �� �������� �����Ѵ�. ���� �����ư��鼭 ��ӹݺ�
	// ���� 13) br31 �� me �� ai �� ���� ���������Ѵ� 31�� �ѱ������ �й�
	//		����) ai �� �̱���ִ»�Ȳ���� �̱���ֵ��� ����ó�� ==>
	//		��) (br31 == 29)  ==> �̷���Ȳ������ 1�� �����ֵ��� 
}