#include <stdio.h>
void main(){
	int arr[4]; 
	int i;
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 20;
	arr[3] = 60;
	//���� 1) 3��° �л� ������ ����غ�����.
	//���� 2) 4���� �л� ������ �߸� ��ϵǾ��� . 1000������ �������ּ���.
	for(i = 0; i < 4; i++){
		if(i == 1){
			printf("%d\n" , arr[i]);
		}
		if(i == 3){
			arr[i] = 1000;
		}
	}
	for(i = 0; i < 4; i++)
	{
		printf("arr[%d] >>> %d\n" , i , arr[i]);
	}
}