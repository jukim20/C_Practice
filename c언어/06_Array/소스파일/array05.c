#include <stdio.h>
void main(){
	//int arr3[5] = {0};  // 0���� �ʱ�ȭ
	int arr2[5] = {10,20,30,40,50}; // ����� �Բ� �ʱ�ȭ
	//int arr[5];
	int a = 10;
	int b = 20;
	int temp = 0;
	int i =0;
	int index1;
	int index2;
	temp = a;
	a = b;
	b = temp;
	temp = arr2[0];
	arr2[0] =arr2[1];
	arr2[1] = temp;
	for(i = 0; i < 5; i++){
		printf("%d\t" , arr2[i]);
	}
	printf("\n");
	// ���� 1)  �ε��� 2�� �� �Է¹ް� �迭���� ���� ��ȯ�غ�����.
	printf("���� 2���� �Է��ϼ��� >>> ");
	scanf("%d %d" , &index1 , &index2);
	temp = arr2[index1];
	arr2[index1] = arr2[index2];
	arr2[index2] = temp;
	for(i = 0; i < 5; i++){
		printf("%d\t" , arr2[i]);
	}
	printf("\n");
}