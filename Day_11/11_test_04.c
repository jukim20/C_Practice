#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	int win = 0;
	int my_num;
	int com_num;
	srand(time(0));
	while(1){
		com_num = rand() % 3; // 0 , 1 , 2
		printf("����(0) ����(1) ��(2) �� �Է��ϼ��� >>");
		scanf_s("%d" , &my_num);
		if(my_num == 0){
			if(com_num == 0){}
			if(com_num == 1){}
			if(com_num == 2){}
		}
		if(my_num == 1){
			if(com_num == 0){}
			if(com_num == 1){}
			if(com_num == 2){}
		}
		if(my_num == 2){
			if(com_num == 0){}
			if(com_num == 1){}
			if(com_num == 2){}
		}
		if(win == 1) break;
	}
}