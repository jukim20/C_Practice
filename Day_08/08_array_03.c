#include <stdio.h>

void main() {
	int arr[5];  // arr[0], arr[1], arr[2], arr[3], arr[4]
	int index = 0;

	arr[0] = 10;
	arr[index] = 20;  // ���� ��� int ������ �־ ��
	printf("%d", arr[0]);  // 20
	printf("\n");

	arr[1] = 100;
	arr[2] = 200;
	arr[3] = 300;
	arr[4] = 400;

	// ���� 1) �ε����� �Է� �ް� �ش� ���� ���

	// 1. �ݺ������� ����ؼ� Ȯ���� �� �ֵ���
	// 2. 0~4�� �ƴ� ���ڸ� ������ ���� ����ǵ���

	while (1) {  // 1�� true�̱� ������ ���ѹݺ��� �ȴ�. ���� �� �ִ� ����� break �� �������´�. 
		if (index >= 0 && index < 5) {
			printf("�ε����� �Է��ϼ��� >>> ");
			scanf_s("%d", &index);

			printf("%d", arr[index]); printf("\n");
		} else {
			printf("����˴ϴ�."); printf("\n");
			break; // �ݺ��� ������ �����̵� �ݺ����� �����Ѵ�. 
		}
	}
}