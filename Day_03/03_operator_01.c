#include <stdio.h>
/* 
	��� �Է�
	���� ������ (2) ���ǹ� �ݺ��� �迭

	< ������ >
	1. ��������� ( + , - , * , / , % )
	2. ���Կ����� ( = )
	- ���� ������ �����ϴ� ��
	3. �񱳿�����  ==>  ������ ���̸� 1 , �����̸� 0 �� ����Ѵ�.  
		1) a == b
		2) a != b
		3) a > b
		4) a < b
		5) a >= b
		6) a <= b
*/

void main() {
	int num1;
	int num2;

	printf("%d", 10 == 10); printf("\n");
	printf("%d", 10 != 10); printf("\n");
	printf("%d", 10 > 10); printf("\n");
	printf("%d", 10 < 10); printf("\n");
	printf("%d", 10 >= 10); printf("\n");
	printf("%d", 10 <= 10); printf("\n");

	num1 = 10; 
	num2 = 10;
	
	printf("%d", num1 == num2); printf("\n");

	num1 = 11;
	printf("%d", num1 != num2); printf("\n");
	printf("%d", num1 > num2); printf("\n");
	
	num2 = 12;
	printf("%d", num1 < num2); printf("\n");

	num2 = 10;
	printf("%d", num1 >= num2); printf("\n");
	
	num1 = 9;
	printf("%d", num1 <= num2); printf("\n");

	// ���� ) �� statement���� ��� ���� ������ ������ ������ ���� �����غ�����.
	
}