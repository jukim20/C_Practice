#include <stdio.h>
#include <stdlib.h>
//1. �ε��� => �� 2. �� => �ε��� 3. ¦�� ���� 4. ū��ã�� 5. ���� 6. �߰� 7. ���� 8. ����
void main(){
	int arr[] = {10 ,20, 30, 40 , 50 ,60}; // int arr[6]//
	int d_arr[2][3]; int i; int n;
	//���� 1) arr �� ���� ���ʴ�� d_arr �� ���� �� ��� 
	int temp = 0;
	for(i =0; i < 2; i++){
		for(n = 0; n < 3; n++){
			d_arr[i][n] = arr[temp];
			temp += 1;
		}
	}
	for(i =0; i < 2; i++){
		for(n = 0; n < 3; n++){
			printf("%d\n" , d_arr[i][n]);
		}
	}
}