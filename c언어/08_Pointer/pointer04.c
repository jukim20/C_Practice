#include <stdio.h>
// ������ ���� 
	//1.   int*   : �ڷ���
	//2.   p	  : �̸�
// �ּҸ� ������ �ִ� ����.
// ������ ==> ����Ű���ִ� �ּ��� ������ �����ؼ� ���� �����ϴ±�� 
// �Ϲݺ����� ���
	//1 .  a   ==> ���� ��ȯ
	//2 .  &a  ==> �ּҸ� ��ȯ
void main(){
	int		a = 10;
	int*	p = 0;
	int     b = 0;
	printf("�� >>> %d\n" , a);
	printf("�ּ� >>> %d\n" , &a); // �ּ�  ==> ���� �̸� 
	//printf("�ּ� >>> %x\n" , &a); // 16����
	b = a;  // 10
	p = &a; // x001
	printf("%d\n" , p);

	printf("%d\n" , *p);//������
	//printf("%d\n" , a);//������
	*p = 200;
	//a = 200;
	printf("a >>> %d\n" , a);
}
//void swap(int num1 ,int num2){
//	int temp;
//	temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
//void main(){
//	int a = 10;
//	int b = 20;
//	swap(a , b);
//	printf("%d\n" , a);  // 10  ==> 20
//	printf("%d\n" , b);  // 20  ==> 10
//}