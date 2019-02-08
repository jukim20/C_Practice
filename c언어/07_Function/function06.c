#include <stdio.h>
void swap(int num1 ,int num2){
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
int swap2(int num1 ,int num2){
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	return num1 , num2;  // 함수는 변수 하나만 리턴가능하다.
}
void main(){
	int num1 = 10;
	int num2 = 90;
	printf("%d  ,  %d\n",num1,num2); // 10 , 90 ==> 90 , 10
	swap(num1 ,num2);
	printf("%d  ,  %d\n",num1,num2); // 10 , 90 ==> 90 , 10
}