#include <stdio.h>
// ��� �Է�
// ���� ������(2) ���ǹ� �ݺ��� �迭 
// 1. ��������� ==>  + - * / %
// 2. ���Կ����� ==>  =
// 3. �񱳿����� ==>    ������ ���̸� 1  , ������ �����̸� 0 �� ����Ѵ�.
//       1) a  ==  b   ==> ����
//       2) a  !=  b   ==> �ٸ���
//       3) a  >   b   ==> ũ��
//       4) a  <   b   ==> �۴�
//       5) a  >=  b   ==> ũ�ų� ����
//       6) a  <=  b   ==> �۰ų� ���� 
void main(){
	int num1; int num2;
	/*printf("%d" , 10 == 10); printf("\n");
	printf("%d" , 10 != 10); printf("\n");
	printf("%d" , 10 > 10);  printf("\n");
	printf("%d" , 10 < 10);  printf("\n");
	printf("%d" , 10 >= 10); printf("\n");
	printf("%d" , 10 <= 10); printf("\n");*/
	num1 = 10; num2 = 10;
	printf("%d" , num1 == num2); printf("\n");
	num2 = 20;
	printf("%d" , num1 != num2); printf("\n");
	printf("%d" , num1 >  num2); printf("\n");
	printf("%d" , num1 <  num2); printf("\n");
	printf("%d" , num1 >= num2); printf("\n");
	printf("%d" , num1 <= num2); printf("\n");
}