#include <stdio.h>
void show_all(int num){
	int i;  int total = 0;
	for(i = 0; i <= num ; i++){
		total = i + total;
	}
	printf("%d\n" , total);
}
void show_all_range(int num1 , int num2){
	int i;  int total = 0;int temp;
	if(num1 > num2){  // num1 �� ũ�� �ڸ��� �ٲ۴�.
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	for(i = num1; i <= num2 ; i++){
		total = i + total;
	}
	printf("%d\n" , total);
}
void main(){
	// ���� �ϳ��� �Է¹����� 0~�׼��ڱ��� ���� �����ִ��Լ�
	show_all(10);
	// ���� 2���� �Է¹����� ���������� ū������ ���������ִ��Լ�
	//�� ) �Է� 1 , 5  ,  ��� ==> 1 + 2 + 3 + 4 + 5
	//�� ) �Է� 7 , 3  ,  ��� ==> 3 + 4 + 5 + 6 + 7
	show_all_range(10 , 2);
	//���� �ϳ��� �Է¹����� ��� ���� ������ִ� �Լ�.
}