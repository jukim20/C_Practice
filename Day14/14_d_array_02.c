#include <stdio.h>
void main(){	
	int arr[] = {10 ,20, 30, 40 , 50 ,60}; // int arr[6]//
	int d_arr[2][3]; int i; int n;
	//���� 1) arr �� ���� ���ʴ�� d_arr �� ���� �� ��� 
	// 4. ū��ã�� 5. ����  7. ���� (������ ����)
	int apt[3][4] = {
		{101, 102, 103, 104},
		{201, 202, 203, 204},
		{301, 302, 303, 304}};
	int pay[3][4] = {
		{2000, 2400, 3003, 4104},
		{2201, 7202, 3203 , 2104},
		{3301, 3502, 3703 , 1304}};
	// 1) �� ���� ����� //					2) �� �Է��ϸ� ������ ��� 
	// 3) ������ �Է��ϸ� �����				4) �� 2�� �Է��ϸ� ������ ��ȯ 
	// 5) ������ 3000�� �̻��� ���� ��� // 6) ���� ������ ���� ������ ��� 
		int bingo[5][5] = {0}; // ==> ���� 0 �� �����
		// �ε����� �Է��ϸ� �ش� ���� 5�� �ٲ� 5�� 5���̸���� // ���� 3���̸� ���� 
		for( i = 0; i < 5; i++){
			for (n = 0; n < 5; n ++){
				printf("%d\t", bingo[i][n]);
			}
			printf("\n");
			printf("\n");
		}







}