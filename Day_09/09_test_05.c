#include <stdio.h>
void main(){
	int arr[5] = {20,100,200,300,400}; // ����������Բ� ������
	int sel = 0; int count = 0;
	while(sel != 2){
		printf("1.��ü���");printf("\n");
		printf("2.����");printf("\n");
		printf("��ȣ�� �Է��ϼ��� >>> ");printf("\n");
		scanf_s("%d" , &sel);
		if (sel == 1){
			count = 0;
			while(count <5){
				printf("%d" , arr[count]);printf("\n");
				count += 1;
			}
		}
	}	
}