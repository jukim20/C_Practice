#include <stdio.h>
// �Լ� ����� ���� 
// 1) �Ű����� �� ���� �Լ�
void test1(){
}
// 2) �Ű����� �� �ִ� �Լ�  ==> ȣ���Ҷ� �ݵ�� ���� �־�����Ѵ�.
void test2(int num){
	printf("%d" , num);printf("\n");
}
void calc(int num1 , int num2){
	printf("%d + %d = %d" , num1 , num2 , num1 + num2); printf("\n");
	printf("%d + %d = %d" , num1 , num2 , num1 + num2); printf("\n");
	printf("%d + %d = %d" , num1 , num2 , num1 + num2); printf("\n");
	printf("%d + %d = %d" , num1 , num2 , num1 + num2); printf("\n");
	printf("%d + %d = %d" , num1 , num2 , num1 + num2); printf("\n");
}
void all_sum(int num1){
	int i = 0;
	int total = 0;
	for(i = 0; i <= num1; i++){
		total += i;
	}
	printf("%d", total);printf("\n");
}
void main(){
	test1();
	test2(10); //���� ==> �Ű������� �����ϴ� �� 
	calc(10 , 3);
	all_sum(4);
	//���� 1) ���� 2���� ����ؼ� ��������� ����� ������ִ� �Լ��� ��������>>
	//���� 2) ���� 1���� ����ؼ� "Ȧ�� , ¦�� , ��� , ����" �˷��ش� �Լ�
	//���� 3) ���� 1���� ����ؼ� �ʸ� ���ʷ� �ٲ��ִ� �Լ�
	//���� 4) ���� 1���� ����ؼ� 0~���� ���ڱ����� ���� ������ִ� �Լ� 
}