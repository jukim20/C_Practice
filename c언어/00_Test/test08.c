#include <stdio.h>
void main(){
	int arr[5] = {10,41,22,33,14};int i;int temp;
	int max = arr[0];
	//������ 50���л��� ��ȣ�� ����ϼ���.
	for(i = 0 ; i < 5; i++){
		printf("��ȣ >>> %d\t���� >>> %d\n" , i , arr[i]);	
		if(arr[i] == 50){
			//printf("������ 50���л� >>> %d\n" , i);
		}
		if(arr[i] >= 50){
			//printf("������ 50�̻����л� >>> %d\n" , i);
		}
		if (max <= arr[i])
		{
			max = arr[i];
		}
	}
	// ������ �߸� �����.
	// 4�� �л� 20 ���� ����
	arr[4] = 20;
	// ��ȭ 
	// 0, 3 ��ȯ �� ��� 
	temp = arr[0];
	arr[0] = arr[3];
	arr[3] = temp;
	//������ ���� ���� �л� ��� 

	
}