#include <stdio.h>
#include <stdlib.h>
void main(){
	// 2����  1) ������ ��� 2) ����� 3) ������ 4) �����Ҵ� �߰� ����
	int i , n; int a = 5;
	for(i = 0; i < 8; i++){ // ���� 1 ==> �������� , 2 ==> �������� , 3 ==> �������� 
		for(n = 0; n < 9; n ++){ // ���� 			
			printf("%d * %d = %d\n" , (i + 2) , (n + 1) , (i + 2) * (n +1));	
		}
		printf("\n");
	}
	for(i = 0; i < 5; i++){
		for(n = 0; n < i + 1; n ++){
			printf("*");
		}
		printf("\n");
	}
	for(i = 0; i < 5; i++){	
		for(n = a; n > 0 ; n--){
			printf("*");
		}
		a -= 1;
		printf("\n");
	}
}