#include <stdio.h>
void main(){
	int bingo[5] ={0,0,0,0,0};
	int index = -1; // 0~4 �� �����ϰ� ����� �־���� �������.
	int i;
	while(1) // 1 ==> �� ==> ���ѹݺ�.
	{
		for(i = 0; i < 5; i++){
			printf("%d\t" , bingo[i]);
		}
		printf("�ε����� �Է��ϼ��� >>> ");
		scanf("%d" , &index);
		bingo[index] = 3;	
		for(i = 0; i < 5; i++){
			if(bingo[i]==3 && 
				bingo[i-1] ==3 && 
				bingo[i+1] ==3 && 
				i != 0 && i != 4)
			{
				printf("����\n");
			}
		}
	}




}