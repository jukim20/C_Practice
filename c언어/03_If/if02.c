#include <stdio.h>
//  1. ���Կ�����  ==>   a = b  :  b�ǰ��� a���� ���� (����) �ض�
//  2. ���������  ==>   +   -   *   /   %
//  3. �񱳿�����  ==>   ���̸� 1   ,  �����̸� 0 �� ��ȯ�Ѵ�.
//		1)  a == b  :   a �� b �� ���� ����.
//		2)  a != b  :   a �� b �� ���� �ٸ���.
//      3)  a >  b  :   a �� b ���� ũ��.
//      4)  a <  b  :   a �� b ���� �۴�.
//      5)  a >= b  :   a �� b ũ�ų� ����.
//      6)  a <= b  :   a �� b �۰ų� ����.
void main(){
	int num1 , num2;
	num1 = 10; num2 = 20;
	// 6���� �񱳿����ڸ� �ٻ���ؼ� ��� 1�� �������� ��������.
	printf("%d\n" , 10==10);
	printf("%d\n" , 10!=9);
	printf("%d\n" , 10>9);
	printf("%d\n" , 10<19);
	printf("%d\n" , 10>=10);
	printf("%d\n" , 10<=10);
	num1 = 10; num2 = 10;
	printf("%d\n" , num1==num2);
	num1 = 10; num2 = 20;
	printf("%d\n" , num1!=num2);
	num1 = 100; num2 = 20;
	printf("%d\n" , num1 >num2);
	num1 = 10; num2 = 20;
	printf("%d\n" , num1<num2);
	num1 = 100; num2 = 20;
	printf("%d\n" , num1>=num2);
	num1 = 10; num2 = 20;
	printf("%d\n" , num1<=num2);
}