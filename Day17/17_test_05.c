#include <stdio.h>
#include <stdlib.h>
void main(){
	// 2차원  1) 구구단 출력 2) 별찍기 3) 관리비 4) 동적할당 추가 삭제
	int i , n; int a = 5;
	for(i = 0; i < 8; i++){ // 세로 1 ==> 가로전부 , 2 ==> 가로전부 , 3 ==> 가로전부 
		for(n = 0; n < 9; n ++){ // 가로 			
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