#include <stdio.h>
//1. �ε��� => �� 2. �� => �ε��� 3. ¦�� ���� 4. ū��ã�� 5. ���� 6. �߰� 7. ����             // 8. ����
void main(){
	int d_arr[3][4];
	int total = 0;
	int i; int n; int value = 0; int i1; int i2; int value2;
	for(i = 0; i < 3; i++){ // ����
		for(n = 0; n < 4; n++){ // ����
			d_arr[i][n] = value;
			value += (1 * 10);
		}
	}
	//d_arr[1][1] = 2000;
	for(i = 0; i < 3; i++){
		total = 0;
		for(n = 0; n < 4; n++){
			total += d_arr[i][n];
			printf("%d\t" , d_arr[i][n]);			
		}
		printf("total >> %d \n", total);
		printf("\n");
	}
	// ���� 1) �� ������ ����� 0 + 1 + 2 +3 // 4 +5 + 6 +7 // 
	// ���� 2) �ε����� ��ã�� ==> 0 , 0 ==> 0     ,  0 , 1 ==> 10
	printf("�ε��� �Է� >>");
	scanf_s("%d", &i1);
	printf("�ε��� �Է� >>");
	scanf_s("%d", &i2);
	printf("%d\n" , d_arr[i1][i2]);
	// ���� 3) ������ �ε��� ã�� ==> 10 ==> 0, 1   ,  110 ==> 2, 3
	printf("�� �Է� >>");
	scanf_s("%d" , &value2);
	for(i = 0; i < 3; i++){
		for(n = 0; n < 4; n++){
			if(value2 == d_arr[i][n]){
				printf("%d , %d\n" , i , n);
			}
		}
	}
}