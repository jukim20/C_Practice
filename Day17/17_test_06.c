#include <stdio.h>
#include <stdlib.h>
void main(){
	// 2차원  1) 구구단 출력 2) 별찍기 3) 관리비 4) 동적할당 추가 삭제
	int apt[3][4] = {{101, 102, 103, 104},{201,202, 203, 204},{301,302,303,304}};
	int i , n; int dong; int total = 0;
	for(i = 0; i < 3; i++){
		total = 0;
		for(n = 0; n < 4; n++){
			total += apt[i][n];
			printf("%d\t" , apt[i][n]);
		}
		printf("total >> %d\n" , total);
		printf("\n");
	}
	printf("동을 입력하세요 >> ");
	scanf_s("%d" , &dong);

	for(i=0; i < 3; i++){
		total = 0;
		for(n=0; n<4; n++) {
			if(apt[i][n] == dong) {
				printf("%d동 >> %d %d", dong, i , n); 
			}
		}
		printf("\n");
	}


}