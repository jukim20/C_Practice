#include <stdio.h>
void show_adder(int num1 , int num2){
	printf("%d + %d = %d\n" , num1 ,num2 ,num1+ num2);
}
int return_adder(){
	int num1 , num2;
	return num1 + num2;
}
int adder(int num1 , int num2){
	int result = num1 +num2;
	return result;
}
void main(){
	int num1 = 0;
	num1 = adder(10 ,20);
	printf("%d\n" , num1);
	// ¹®Á¦ 1) 10 + 20 + 40 + 50
	num1 = adder(num1 , 40);
	printf("%d\n" , num1);
	num1 = adder(num1 , 50);
}