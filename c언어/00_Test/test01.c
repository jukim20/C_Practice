#include <stdio.h>
void main(){
	//���빮�� )  �����ϳ��� �Է¹ް� ¦�� ���� Ȧ������ ��� ==> %
	int num1;int num2 , num3; int second;
	printf("���ڸ� �Է��ϼ��� >>>");
	scanf("%d" , &num1);  //�Է� �Լ� >> scanf("���Ĺ���" , & + ����);
	// Ű����� �Է¹��� ���� ������ ����ȴ� 
	if(num1 % 2 ==0){
		printf("¦��\n");}
	if(num1 % 2 == 1){
		printf("Ȧ��\n");}	
	num2 = 100; num3 = 20;
	// 6���� �񱳿����ڸ� �ٻ���ؼ� ��� 1�� �������� ��������.
	printf("%d\n" , (num2 > num3));
	num2 = 10; num3 = 20;	printf("%d\n" , (num2 < num3));
	num2 = 20; num3 = 20;	printf("%d\n" , (num2 == num3));
	num2 = 10; num3 = 20;	printf("%d\n" , (num2 != num3));
	num2 = 100; num3 = 20;	printf("%d\n" , (num2 >= num3));
	num2 = 10; num3 = 20;	printf("%d\n" , (num2 <= num3));
	//���� ) �ʸ� �Է¹ް� ���ʷ� ��� 
	// ��) �Է� : 100  ,  ��� ==> 1�� 40��
	printf("�� �� �Է��ϼ��� >>>");
	scanf("%d" , &second);  
	printf("�� >>> %d ,  %d�� , %d��\n"  , second , second / 60 , second % 60);
	//���� ) 10 / 3 �� ����ϴµ� �Ҽ��� 2�ڸ������� ���غ�����.
	printf("%d / %d = %.2lf \n" , 10  , 3 , (double)10/3);
}