#include <stdio.h>

void main() {
	// ���� �ϳ��� �Է� �ް� 60 �̻��̸� " �հ� ", ���ϸ� " ���հ� "
	int grade; int num1; int grade1; int grade2; int grade3; int total; int avg;
	int sel;

	printf("������ �Է��ϼ��� >>> ");
	scanf_s("%d", &grade);

	if (grade >= 60) {
		printf("�հ�"); printf("\n");
	}
	else {
		printf("���հ�"); printf("\n");
	}
	// ���� �ϳ��� �Է� �ް� ¦���� "¦��", Ȧ���� "Ȧ��" ���
	printf("���ڸ� �ϳ� �Է��ϼ��� >>> ");
	scanf_s("%d", &num1);
	if (num1 % 2 == 0) {
		printf("¦��"); printf("\n");
	}
	else {
		printf("Ȧ��"); printf("\n");
	}
	// ���ڸ� �ϳ� �Է¹ް� "���" , 0 , "����" ���
	if (num1 > 0) {
		printf("���"); printf("\n");
	} 
	else if (num1 < 0) {
		printf("����"); printf("\n");
	}
	else {
		printf("0"); printf("\n");
	}
	
	// ���� 3���� �Է¹ް� ����� 60 �̻��̸� "�հ�"
	printf("���� 1�� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &grade1);
	printf("���� 2�� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &grade2);
	printf("���� 3�� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &grade3);

	total = grade1 + grade2 + grade3;
	avg = total / 3;
	
	if (grade1 <= 50 || grade2 <= 50 || grade3 <= 50) {
		printf("���հ�"); printf("\n");
	}
	else if (avg >= 60) {
		printf("�հ�"); printf("\n");
	}
	else {
		printf("���հ�"); printf("\n");
	}

	// ȫ����� ���� 10�������� ���� �� ���� ¥����� �� �� ���� �� ����
	printf("** ȫ����� **"); printf("\n");
	printf("1. ¥���		6000��"); printf("\n");
	printf("2. «��			7000��"); printf("\n");
	printf("3. ������		12000��"); printf("\n");
	printf("��ȣ�� �Է��ϼ��� >>> " );
	scanf_s("%d", &sel);

}