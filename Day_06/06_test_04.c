#include <stdio.h>

void main() {

	// ������ 60 �̻��̸� �հ�, �̸��̸� ���հ�
	int score = 0;
	printf("������ �Է��ϼ��� >>> ");
	scanf_s("%d", &score);

	if (score > 100 || score < 0) {
		printf("�߸� �Է��߽��ϴ�."); printf("\n");
	} else if (score >= 60) {
		printf("�հ�"); printf("\n");
	} else {
		printf("���հ�"); printf("\n");
	}
}