#include <stdio.h>
void main(){
	int arr[5] = {10,20,300,40,50};  // 0~4
	int index = -1; int i;
	printf("�ε����� �Է��ϼ��� (0~4) >>> ");
	scanf("%d" , &index);
	arr[index] = 1000;
	/*printf("%d\t" , arr[0]); 
	printf("%d\t" , arr[1]); 
	printf("%d\t" , arr[2]); 
	printf("%d\t" , arr[3]); 
	printf("%d\t" , arr[4]); */
	printf("\n");
	for(i = 0; i < 5; i++){
		printf("%d\t" , arr[i]);
	}
	for(i = 0 ; i < 5; i++){
		if(i == 3){
			printf("%d\n" , arr[i]);
		}
	}
	for(i = 0 ; i < 5; i++){
		if(arr[i] == 50){
			printf("%d\n" , i);
		}
	}
}
	//���� ) ���ΰ� 10 , ���� �� 8 �� �簢�� ���̸� ���غ�����
	//���� )  �����ϳ��� �Է¹ް� ��� ���� �������� ���	
	//���� ) 0~20�߿��� Ȧ���� �� ���Ѱ� ���
	//���� ) 0~20�� 4�� ����� ���
	
	//���� ) �ε����� �Է¹ް� �ش� ���� 1000���� ����
	//���� ) ���� �Է¹����� �ش� �ε��� ���
	//���� ) �迭���� ����ū�� ������ ��� 

/*
	int width = 10;
	int height = 8;
	int result = 0;
	result = width * height;
	int input_num;
	printf("���ڸ� �Է��ϼ��� >>>");
	scanf("%d" , &input_num);
	if(input_num >0){printf("���\n");}
	int i;
	int sum =0;
	for (i = 0; i < 20; i++){
		if( i % 2 == 1){
			sum = sum + i;
		}
		if( i % 4 == 0){
		}
		if(i > 5 && i < 15){
		}
	}*/