#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
void main(){
	int*p ;int size =0;int select = 0;int i;int score;
	printf("�л����� ����ΰ���?");
	scanf("%d" , &size);
	p = (int*)malloc(size * 4); // int �� 4byte �� 4�� ���Ѵ�.(�����Ҵ�)
	if( size > 10 || size <= 0)return; // �Լ� ���� main() �� ����ȴ�.
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
				p[i] = score;}
		}
		if(select == 2){
			for( i = 0; i < size; i++){
				printf("%d ���л� ���� : %d\n" , i , p[i]);
			}
		}	
	}
}