#include <stdio.h>
void main(){
	// �迭) ������ ���� 
	int arr[5] = {10, 20, 30, 40, 50};
	int value  = 0; int i; int remove_index; int count = 5; // �迭ũ������
	printf("������ ���� �Է��ϼ��� >> ");
	scanf_s("%d" , &value);
	for(i = 0; i < 5; i++){
		if(value == arr[i]){
			remove_index = i;  // �����ȣ�� ����Ѵ�.
			//printf("%d" , i);
			count -= 1; // ã���� count �� �ٿ��ش�.
		}
	}
	for(i = remove_index; i < count; i++){
		arr[i] = arr[i + 1]; // ���� ��ȣ ���� �ڿ������� ������ 
	}
	for(i = 0; i < count; i++){ // �迭�� count ���ڸ�ŭ����ؼ� �������Ȱ�ó�� �̿��Ѵ�.(�޸𸮳���)
		printf("%d\n" , arr[i]);
	}
}
