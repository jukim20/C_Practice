#include <stdio.h>
#include <stdlib.h>
void main(){
	// 1���� �迭
	int arr[4] = {10,20,300,40};
	//    1)  ����ū�� ã��
	// 2���� �迭
	int scores[3][4] = {
		{59, 80, 40, 16}, // kor
		{10, 70, 60, 54}, // math
		{50, 99, 17, 32}  // eng
	};
	int * p_kor;
	int ** pp_scores;
	int temp_arr[12];
	int index =0;
	int temp;
	//      1)  �������� 70�� ����ȣ��?
	// ��ȭ  2)  ���� ���� ������� ��� 
	int i; int j;
	for(i = 0; i < 3; i++){
		for(j = 0; j <4; j++){
			if(scores[i][j] == 16){
				printf("%d, %d\n" , i , j);
			}
		}
	}
	// �����޸� ==> 1����  // 	
	p_kor = (int*) malloc( sizeof(int) * 4);
	p_kor[0] = 59;
	p_kor[1] = 80;
	p_kor[2] = 40;
	p_kor[3] = 16;
	//�����޸𸮸� ����ؼ� ���� ����Ÿ ��� ������ ��� 
	//int * p_kor;
	//int * p_math;
	//int * p_eng;
	//// �����޸� ==> 2����
	pp_scores = (int**)malloc(sizeof(int*) * 3);  //����
	pp_scores[0] =  (int*) malloc( sizeof(int) * 4); // ����
	pp_scores[1] =  (int*) malloc( sizeof(int) * 4); // ����
	pp_scores[2] =  (int*) malloc( sizeof(int) * 4); // ����
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){		
			pp_scores[i][j] = scores[i][j];
			temp_arr[index] = pp_scores[i][j];
			index++;
		}
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
		//	printf("%d\t" , pp_scores[i][j]);
		}
	//	printf("\n");
	}
	for(i = 0; i< 12; i++){
		for(j = 0; j < 12 ; j++){
			if(temp_arr[i] > temp_arr[j]){
				temp = temp_arr[i];
				temp_arr[i] = temp_arr[j];
				temp_arr[j] = temp;
			}
		}
	}
	for(i = 0; i< 12; i++){
		printf("%d\n" , temp_arr[i]);
	}

}