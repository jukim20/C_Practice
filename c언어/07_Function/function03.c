#include <stdio.h>
void show_even(int num){
	if(num % 2 == 1){
		printf("Ȧ��\n");
	}else{
		printf("¦��\n");
	}
}
void all_add(int num){
	int i; int total = 0;
	for(i = 0; i < num + 1; i++){
		total += i;
	}
	printf("%d\n" , total);
}
void rand_range(int num1 , int num2){}
void main(){
	int num1;
	// ¦�� Ȧ���� �˷��ִ� �Լ�
	show_even(5);
	// 0���� ~ ���� ��ŭ ���� �����ִ� �Լ�
	all_add(10);
	// ���� 2���� �Է��ϸ� �׻����� �������� �����ִ��Լ�
	// ��)  1 , 5  ==> (1,2,3,4,5)
	// ��)  2 , 4  ==> (2,3,4)
	//  ���빮�� )  10 , 5 ==> ( 5,6,7,8,9,10)
	//int arr[5] = {0,1,2,3,4};

}