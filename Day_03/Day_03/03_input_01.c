#include <stdio.h>

/*
	��� printf()
	�Է� scanf_s() ==> �ȿ� 2���� ���� �־���Ѵ�.
		1) �ڷ����� �˸��� ���Ĺ���
		2) ������ ���� ==> & + ����

*/

void main() {
	int a;
	int width; 
	int height;
	int square;
	int kor;
	int math;
	int eng;
	int total;
	float avg;

	printf("����"); printf("\n");
	scanf_s("%d", &a);  // a = Ű����� �Է��� ��  // a = 10
	printf("%d", a); printf("\n");
	printf("����"); printf("\n");

	// ���� �Է� �޾Ƽ� �ذ��غ�����. 
	// ���� 1) �簢���� ���̸� ����غ�����. 
	printf("���θ� �Է��ϼ��� >>> "); 
	scanf_s("%d", &width);
	printf("���θ� �Է��ϼ��� >>> "); 
	scanf_s("%d", &height);
	square = width * height;
	printf("�簢���� ���̴� : %d", square); printf("\n");

	// ���� 2) ���� ���� ������ ����� ����غ�����.
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


}
