#include <stdio.h>

void main() {
	int arr2[5]; int arr[5] = {10, 20, 30, 40, 50}; int count = 0;
	arr2[0] = 10; arr2[1] = 20; arr[2] = 30; arr[3] = 40; arr[4] = 50; 
	
	count = 0;

	while (count < 5) {
		printf("%d", arr[count]); printf("\n");
		count += 1;
	}

	// ���� 1) 25 �̻� ����غ�����
	count = 0;
	while (count < 5) {
		if (arr[count] >= 25) {
			printf("%d", arr[count]); printf("\n");
		}
		count += 1;
	}

	// ���� 2) 3�� ����� ����غ����� 
	for (count = 0; count < 5; count += 1) {
		if (arr[count] % 3 == 0) {
			printf("%d", arr[count]); printf("\n");
		}
	}
}
