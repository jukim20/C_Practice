#include <stdio.h>
#include <stdlib.h> // malloc(); 
void main(){
	// �迭�� ó������ ũ�Ⱑ �������־ �����ϰ� ����ϱ������.
	// �ڹ� ���̽� c# ==> ���� �����Ҵ� 
	int* p1 = 0;
	int* p2 = NULL; 
	int sel = 0; int i; int count = 0; int num = 0;
	while(1){
		for (i = 0; i < count; i++){
			printf("��� : %d\n" , p1[i]);
		}
		printf("1. �߰�\n");
		scanf_s("%d" , &sel);
		if(sel == 1){
			printf("������ ���ڸ� �Է��ϼ��� >> ");
			scanf_s("%d" , &num);
			p2 = p1;
			
			p1 = (int*)malloc(sizeof(int) * (count + 1));
			// int arr[5] �� �Ȱ��� ��

			for(i = 0; i < count; i++){
				p1[i] = p2[i];
			}
			p1[count] = num;
			count += 1;
			free(p2);
		} // �߰������
		else {break;}
	}
}