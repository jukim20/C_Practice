#include <stdio.h>
#include <Windows.h>
void main(){
	//�����Ҵ�
	int arr[100];int size =0;int select = 0;int i;int score;
	printf("�л����� ����ΰ���?");
	scanf("%d" , &size);
	if( size > 100 || size <= 0)return; // �Լ� ���� main() �� ����ȴ�.
	while(1){
		printf("�л� ���� ���� ���α׷�\n");
		printf("1. ���� ����\n");
		printf("2. ���� ���\n");
		printf("��ȣ�� �Է��ϼ��� >>> ");
		scanf("%d" , &select);
		if (select == 1){
			for (i = 0; i < size; i++){
				printf("%d ���л� ������ �Է��ϼ��� >>> " , i);
				scanf("%d" , &score);
				arr[i] = score;}
		}
		if(select == 2){
			for( i = 0; i < size; i++){
				printf("%d ���л� ���� : %d\n" , i , arr[i]);
			}
		}	
	}
}