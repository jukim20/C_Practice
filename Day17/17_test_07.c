#include <stdio.h>
#include <stdlib.h>
void main(){
	int ** pp = 0;
    int num1 , num2 , num3, num4; int count = 0; 
	int i; int n; int** temp_pp; 
	//pp = &p[0];
	while(1){
		printf("점수 4 개를 입력하세요 >> \n");	
		scanf_s("%d %d %d %d" , &num1 , &num2 , &num3, &num4);
		temp_pp = pp;	
		pp = (int**)malloc((count + 1) * 4);
		for(i = 0; i < count; i++){
			pp[i] = temp_pp[i];
		}	
		pp[count] = (int*)malloc(16);
		pp[count][0] = num1;
		pp[count][1] = num2;
		pp[count][2] = num3;
		pp[count][3] = num4;
		count += 1;
		for(i = 0; i < count; i++){
			for(n = 0; n < 4; n ++){
				printf("%d\n" , pp[i][n]);
			}
			printf("\n");
		}
	}
}