#include <stdio.h>
void main(){
	//�ݺ��� ==> 0~20���� ¦���� ��
	//�迭 ==> 1. �ε����� ��ã�� 2. ������ �ε��� ã�� 3. ¦������  4. ����ū��ã��
	int score[] =  {20,    3,     46,    10,    55,     2};
	int number[] = {5001, 5002, 5003, 5004, 5005 , 5006};
	int max = score[0]; int max_idx = 0;
	int i;
	// ����ū��ã��
	for(i = 0; i < 5; i++){
		if(max < score[i]){
			max = score[i];
			max_idx = i; // �߰� 
		}
	}
	printf("�ƽ� :%d" , max); printf("\n");
	//���� 1) ������ ������� �л��� ��ȣ ���  ==> 5005
	printf("�л���ȣ :%d" , number[max_idx]); printf("\n");
	//���� 2)
	/*
	  %%%%
	  %%%
	  %%
	  %
	*/





}