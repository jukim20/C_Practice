#include <stdio.h>
void main() {
	// ���� 1) ���ΰ� 10�̰� ���ΰ� 10�� �簢���� ���̸� ����غ�����
	int width = 10;
	int height = 10;
	int square = width * height;
	int triangle = width * height * 0.5;
	int kor = 30;
	int math = 41;
	int eng = 53;
	int total = kor + math + eng;
	float avg = total / 3;

	printf("�簢���� ���̴� : %d" , square);
	printf("\n");
	// ���� 2) �� ������ �ﰢ���� ���غ�����
	printf("�ﰢ���� ���̴� : %d" , triangle);
	printf("\n");
	// ���� 3) ���� 30, ���� 41, ���� 53 �� ����� ����غ�����
	printf("���� : %d", total);
	printf("\n");
	printf("��� : %f", avg);
	printf("\n");
	printf("��� : %.2f", avg);
	printf("\n");
}