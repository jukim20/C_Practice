#include <stdio.h>
void main() {
	int kor; int math; int eng; int total; float avg; int length; int height;
	int num; int sec; int money; int won50000; int won10000; int won5000; int won1000; int won500; int won100;

	//���� , ���Կ����� , ���������
	//���� 3) ���� 30 , ���� 41 , ���� 53 �� ����� ����غ����� 

	kor = 30; 
	math = 41;
	eng = 53;

	total = kor + math + eng;
	avg = total / 3;

	printf("���� : %d", total); printf("\n");
	printf("��� : %.2f", avg); printf("\n");

	
	//�Է� 
	//���� 1) ���̸� �Է¹ް�  �簢���� ���̸� ����غ�����
	printf("���θ� �Է��ϼ��� >>> ");
	scanf_s("%d", &length);
	printf("���θ� �Է��ϼ��� >>> ");
	scanf_s("%d", &height);

	printf("�簢���� ���� : %d", length * height); printf("\n");

	//���� 3) ������ 3�� �Է¹ް� ���� ���� ����  �� ����� ����غ����� 
	printf("���� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &kor);
	printf("���� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &math);
	printf("���� ������ �Է��ϼ��� >>> ");
	scanf_s("%d", &eng);

	total = kor + math + eng;
	avg = total / 3;

	printf("���� : %d", total); printf("\n");
	printf("��� : %.2f", avg); printf("\n"); 
	
	//�񱳿�����
	//���� 1) ���� �ϳ��� �Է¹ް� ����� 1  ������ 0 ������غ�����

	printf("���ڸ� �Է��ϼ��� >>> ");
	scanf_s("%d", &num);
	printf("%d", num >= 0); printf("\n");

	//���� 2) ���� �ϳ��� �Է¹ް� 60���̻��̸� 1 �̸��� 0������غ�����
	printf("���ڸ� �Է��ϼ��� >>> ");
	scanf_s("%d", &num);
	printf("%d", num >= 60); printf("\n");

	//========= ��ȭ =========================================================
	//���� 3) ���� �ϳ��� �Է¹ް� ¦���� 1 Ȧ���� 0 �� ����غ�����
	printf("���ڸ� �Է��ϼ��� >>> ");
	scanf_s("%d", &num);
	printf("%d", num % 2 == 0);
	printf("\n");

	//���� 4) �ʸ� �Է¹ް� �� �ʷ� ����غ����� // ��) 100 ==> 1�� 40��
	printf("�ʸ� �Է��ϼ��� >>> "); 
	scanf_s("%d", &sec);
	printf("%d�� %d��", sec / 60, sec % 60); printf("\n");

	//���� 5) ���� �Է¹ް� ȭ��ż��� ����غ����� 
	// ��) 142600 ==> 5���� 2�� ���� 4�� 5õ�� 0�� õ�� 2�� ����� 1�� ��� 1��
	printf("���� �Է��ϼ��� >>> ");
	scanf_s("%d", &money);
	won50000 = money / 50000;
	won10000 = (money - (won50000 * 50000)) / 10000;
	won5000 = (money - (won50000 * 50000) - (won10000 * 10000)) / 5000;
	won1000 = (money - (won50000 * 50000) - (won10000 * 10000) - (won5000 * 5000)) / 1000;
	won500 = (money - (won50000 * 50000) - (won10000 * 10000) - (won5000 * 5000) - (won1000 * 1000)) / 500;
	won100 = (money - (won50000 * 50000) - (won10000 * 10000) - (won5000 * 5000) - (won1000 * 1000) - (won500 * 500)) / 100;

	printf("5���� %d��, 1���� %d��, 5õ�� %d��, õ�� %d��, ����� %d��, ��� %d��", 
		won50000, won10000, won5000, won1000, won500, won100); printf("\n");

}