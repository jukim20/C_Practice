#include <stdio.h>
void show_line(){
	printf("=============================="); printf("\n");
}
void show_lines(int num){
	int i = 0;
	for(i = 0; i < num; i++){
		printf("=============================="); printf("\n");
	}
}
void main(){
	int i = 0;
	//문제1 ) ====================== 모양을 출력해주는 함수를 만들어보자.
	//show_line();
	//show_line();
	//show_line();
	//show_line();
	//show_line();

	/*for( i = 0; i < 15; i++){
		show_line();
	}*/

	show_lines(7);
}
