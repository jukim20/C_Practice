#include <stdio.h>
#include <stdlib.h>
//1. �ε��� => �� 2. �� => �ε��� 3. ¦�� ���� 4. ū��ã�� 5. ���� 6. �߰� 7. ���� 8. ����
void main(){
	int* p1 = 0; int i; int value; int *p2; int count = 3;
	int remove_index = -1;
	p1 = (int*)malloc(sizeof(int) * count); 
	free(p1);
	p1 = malloc(4 * count); // int arr[3]; // ������ ����� 
	p1[0] = 10; p1[1] = 20; p1[2] = 30;
	//���� 1) ���� �Է��ϸ� ���� 
	for(i = 0; i < count; i++){
		printf("%d\n" , p1[i]); // ���
	}
	printf("���� �Է��ϼ��� >>");
	scanf_s("%d" , &value);
	for(i =0; i < count; i++){
		if(p1[i] == value){   
			remove_index = i; // ���� ��ȣ ã��(�ε���)
		}
	}	
	count -=1; // ũ�� ����
	p2 = p1;  // ������(�ּ�) ����
	p1 = (int*)malloc(sizeof(int) * count); // ���ο� �޸��Ҵ� 2��¥��
	for(i = 0; i < remove_index; i++){
		p1[i] = p2[i]; // ���������� ���� (�պκ�)
	}
	for(i = remove_index; i < count; i++){
		p1[i] = p2[i + 1]; // ���������� (�޺κ�)
	}	
	free(p2);	// �� �޸� ����
	for(i = 0; i < count; i++){
		printf("%d\n" , p1[i]);  // ���
	}
	free(p1); // ���� ���� 
}