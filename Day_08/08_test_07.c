#include <stdio.h>

void main() {
	int arr[5] = {10, 20, 31, 40, -50}; 
	int arr2[6] = {0, 10, 20, 30, 40, 50};
	int count = 0; int value; int total = 0; int i = 0; 
	int sel = 0; int temp;

	// �迭:
	// 1. �ε����� �� ã�� 

	printf("�ε����� �Է��ϼ��� >>> "); 
	scanf_s("%d", &i);

	while (count < 5) {
		if (arr[count] == arr[i]) {
			printf("�ش� �ε����� �� : %d", arr[i]); printf("\n");
		}
		count += 1;
	}
	printf("======================================"); printf("\n");

	// 2. �����
	// 3. ������ �ε��� ã��

	printf("���� �Է��ϼ��� >>> ");
	scanf_s("%d", &value); 

	count = 0;
	while (count < 5) {
		if (value == arr[count]) {
			printf("�ε��� : %d", count); printf("\n");
		}
		count += 1; 
	}
	printf("======================================"); printf("\n");
	
	// 4. ��� ����
	// 5. ¦�� ���� ���

	// 6. ���� 2�� �Է¹����� 0�� ���������� �̵�.
	// �� ) 2 ==> {10, 0, 20, 30, 40, 50} , 2 ==> {10, 20, 0, 30, 40, 50}
 
	while (1) {
		printf("0�� ���������� �ű���� 2�� �Է��ϼ��� >>> "); 
		scanf_s("%d", &sel);
		if (sel == 2) {
			for (i = 0; i < 6; i += 1) {
				if (arr2[i] == 0 && i != 5) {
					temp = arr2[i+1]; 
					arr2[i+1] = arr2[i];
					arr2[i] = temp;
					break;
				}
			}
		} else {
			break;
		}
		for (i = 0; i < 6; i+=1) { 
			printf("%d  ", arr2[i]); 
		}
		printf("\n");
	}

}