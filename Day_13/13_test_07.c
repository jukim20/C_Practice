#include <stdio.h>

void main() {
	int arr[5];  // 20 byte
	int *p;  

	p = &arr[0];  // 1��° �ּ� (index 0) �� p���� �ѱ�

	p[0] = 100;  // arr[0] �� ������ 100�� ����־���
	printf("%d\n", arr[0]);
	p[1] = 200;  // arr[1] �� ������ 200�� ����־���
	printf("%d\n", arr[1]);  


	malloc(20); 


}