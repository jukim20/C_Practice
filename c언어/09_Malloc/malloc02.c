#include <stdio.h>
#include <stdlib.h>
void dma(){
}
void main(){
	//���� 1) �л����� �Է¹ް� �ش� �л�����ŭ ������ �Է��ϼ���.
	int		st_num;
	int*	p; int i; int input_score;
	printf("�л����� �Է��ϼ��� >>> ");
	scanf("%d" , &st_num);
	// int arr[st_num];
//	p = (int*)malloc(4 * st_num); �̰��� �Լ��� ȣ������~
	for(i = 0; i < st_num; i++){
		printf("������ �Է��ϼ��� >>> ");
		scanf("%d" , &input_score);
		p[i] = input_score;
	}
	for(i = 0; i < st_num; i++){
		printf("%d\n" , p[i]);
	}
	free(p); // �޸� ���� //�����Ҵ���� �޸𸮴� ���� ����������Ѵ�.
}
