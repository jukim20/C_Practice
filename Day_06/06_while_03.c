#include <stdio.h>

void main() {

	// ȫ����� : �� �� 10 �������� ���� �� ���� ¥����� �� �� ���� �� ����
	// ���� 1) ���� ¥����� �� �� ���������� �ݺ�
	// ���� 2) «���� 3�׸� ���Ҵ� ... (���� �־ ���� �Ұ�)
	// ���� 3) ������ ���
	int sel; int money = 100000; int jja; int bbong; int tang;
	int jja_count; int bbong_count; int tang_count;


	printf("** ȫ����� **"); printf("\n");
	printf("1. ¥���		6000��"); printf("\n");
	printf("2. «��			7000��"); printf("\n");
	printf("3. ������		12000��"); printf("\n");
	
	jja = 6000;
	bbong = 7000;
	tang = 12000;
	jja_count = 0;
	bbong_count = 0;
	tang_count = 0;

	while (money >= jja) {
		printf("��ȣ�� �Է��ϼ��� >>> " );
		scanf_s("%d", &sel);
		if (sel == 1) {
			money -= jja;
			jja_count += 1;
		} else if (sel == 2) {
			if (bbong_count < 3) {
				if (money >= bbong) {
					money -= bbong;
					bbong_count += 1;
				} else {
					printf("���� �����մϴ�."); printf("\n"); 
				}
			} else {
				printf("«���� ǰ���Ǿ����ϴ�. �ٸ� �޴��� ����ּ���."); printf("\n");
			}
		} else if (sel == 3) {
			if (money >= tang) {
				money -= tang;
				tang_count += 1;
			} else {
				printf("���� �����մϴ�."); printf("\n");
			}
		} else {
			printf("�߸��Է��߽��ϴ�."); printf("\n");
		}
		printf("\n"); printf("** ������ **"); printf("\n");
		printf("¥��� %d��", jja_count); printf("\t"); 
		printf("%d��", jja * jja_count); printf("\n");
		printf("«�� %d��", bbong_count); printf("\t"); 
		printf("%d��", bbong * bbong_count); printf("\n");
		printf("������ %d��", tang_count); printf("\t"); 
		printf("%d��", tang * tang_count); printf("\n");
		printf("���� ���� �� : %d��", money); printf("\n");
	}
	printf("���� �����մϴ�."); printf("\n");
}
