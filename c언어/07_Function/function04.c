#include <stdio.h>
void show_num(int num1){
	printf("1:%d\n" , num1);
}
int return_num(){
	return 100;
}
int return_num2(){
	int num = 100;
	return num;
}
void main(){
	int num = 100;
	int main_num = 0;
	//show_num(num);
	
	main_num = return_num(); //	main_num = 100;
	printf("2:%d\n" , main_num);

	main_num = return_num2();//	main_num = 100;
	printf("3:%d\n" , main_num);
}