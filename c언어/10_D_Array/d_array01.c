#include <stdio.h>
void main(){
	int arr[20];
	int d_arr[4][5];
	int i ; int n; int value = 0;
	for(i = 0; i< 20; i++){
		arr[i] = i;
	}
	for(i = 0; i < 20 ; i++){
		printf("%d\t", arr[i]);
		if(i % 5 == 4){
			printf("\n");
			printf("\n");
			printf("\n");
		}
	}
	for(i = 0; i < 4; i++){  // ���� 
		for(n =0; n < 5; n++){  // ����
			d_arr[i][n] = value;
			value++;  // + 1
		}
	}
	d_arr[0][0] = 0;
	d_arr[0][1] = 1;
	d_arr[0][4] = 4;
	d_arr[1][0] = 5;
	d_arr[2][1] = 11;
	for(i = 0; i < 4; i++){   // ���� �ѹ��� ���� ���� 
		for(n= 0; n < 5; n++){
			printf("%d\t" , d_arr[i][n]);
		}
		printf("\n");
	}
	// 3 �� �����  
	//  1 2 3		
	//	4 5 6
	//  7 8 9
}