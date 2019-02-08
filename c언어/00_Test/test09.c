#include <stdio.h>
void main(){
	int bingo[5] ={0,0,0,0,0};
	int index = -1; // 0~4 는 제외하고 어떤값을 넣어놔도 상관없다.
	int i;
	while(1) // 1 ==> 참 ==> 무한반복.
	{
		for(i = 0; i < 5; i++){
			printf("%d\t" , bingo[i]);
		}
		printf("인덱스를 입력하세요 >>> ");
		scanf("%d" , &index);
		bingo[index] = 3;	
		for(i = 0; i < 5; i++){
			if(bingo[i]==3 && 
				bingo[i-1] ==3 && 
				bingo[i+1] ==3 && 
				i != 0 && i != 4)
			{
				printf("빙고\n");
			}
		}
	}




}