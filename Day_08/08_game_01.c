#include <stdio.h>
void main() {
	int sel; int c1 = 0; int c2 = 0; int c3 = 0; int my_money = 100000;
	int jja = 6000; int bbong = 7000; int tang = 12000;

	while (sel != 4) {
		printf(" ** ȫ����� ** "); printf("\n");
		printf(" 1. ¥���	6000�� "); printf("\n");
		printf(" 2. «��		7000�� "); printf("\n");
		printf(" 3. ������  12000�� "); printf("\n");
		printf(" 4. ���� "); printf("\n");
		printf(" �� �� : %d, ¥��� : %d��, «�� : %d��, ������ : %d��", my_money, c1, c2, c3); printf("\n");
		printf(" ************** "); printf("\n");
		printf("��ȣ�� �Է��ϼ��� >>> ");
		scanf_s("%d", &sel);

		if (sel == 1) {
			if (my_money >= jja) {
				my_money -= jja;
				c1 += 1;
			} else {
				printf("���� �����մϴ�."); printf("\n");
			}
		} else if (sel == 2) {
			if (my_money >= bbong) {
				my_money -= bbong;
				c2 += 1;
			} else {
				printf("���� �����մϴ�."); printf("\n");
			}
		} else if (sel == 3) {
			if (my_money >= tang) {
				my_money -= tang;
				c3 += 1;
			} else {
				printf("���� �����մϴ�."); printf("\n");
			}
	}

}