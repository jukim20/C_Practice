#include <stdio.h>
#include <stdlib.h> // malloc(); 
void main(){
	// �迭�� ó������ ũ�Ⱑ �������־ �����ϰ� ����ϱ������.
	// �ڹ� ���̽� c# ==> ���� �����Ҵ� 
	int* p1 = 0;
	int* p2 = NULL; 
	int sel = 0; int i; int count = 5; int num = 0;
	int size = 5;
	//int arr[size]; // �迭�� size �� ������ ����Ҽ�����. �̸����س�����
	int arr[5];
	p1 = (int*)malloc(sizeof(int) * size);	
	p1[0] = 100; p1[1] = 20; p1[2] = 30; p1[3] = 40; p1[4] = 5;
	while(1){
		for (i = 0; i < count; i++){
			printf("��� : %d\n" , p1[i]);
		}
		printf("1. ����\n");
		printf("�ɼ��� �����ϼ��� >>> ");
		scanf_s("%d" , &sel);
		if(sel == 1){	
			printf("������ ��ȣ�� �Է��ϼ��� >> "); // ������ �� ==> ����
			scanf_s("%d" , &num); //2
			p2 = p1;
			p1 = (int*)malloc(4 * (count - 1));
			for(i = 0; i < num; i++){ // �տ�������
				p1[i] = p2[i];
			}
			for(i = num; i < count - 1; i++){ // �ڿ��� ����
				p1[i] = p2[i + 1];
			}
			free(p2);
			count -= 1;
		} // ���������
		else {break;}
	}
	free(p1);// �����Ҵ��� �ݵ�� ����� ������ �ؾߵȴ�.
}