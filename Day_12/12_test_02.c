#include <stdio.h>
void main(){
	int sel = 0;
	do{
		printf("do while\n");
		scanf_s("%d", &sel);
		if(sel == 4){break;}
	}while(1);
	sel = 0;
	while(1){		
		printf("while\n");
		scanf_s("%d", &sel);
		if(sel == 4){break;}
	}
}