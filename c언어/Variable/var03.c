#include <stdio.h>
void main(){
	//���� 1) ���ΰ� 10 , ���� �� 8 �� �簢�� ���̸� ���غ�����
	//���� 2) �� �簢���� ���̸� ���� �ﰢ���� ���غ�����.
	//���� 3) ������ ������ ������ ���غ�����.
	//���� 4) 10 / 3 �� ����ϴµ� �Ҽ��� 2�ڸ������� ���غ�����.
	//���� 5) ����(����,����,����) 3��(0~99)������ �����ϰ� ���� ����� ����ϼ���. 
	//		����� �Ҽ��� 1�ڸ����� ���
	int galo;int selo;int square;int triangle;int salary;int kor , eng , math;
	int total; double average;  int num1 = 30; int num2 = 10; int temp;
	galo =10;
	selo =8;
	square = galo * selo;
	printf("���� : %d , ���� : %d , ���� : %d \n" , galo ,selo ,square);  
	printf("����3���� �Է��ϼ��� >>> ");
	scanf("%d" , &kor);
	scanf("%d" , &eng);
	scanf("%d" , &math);
	total = kor + eng + math;
	average = (double)total / 3;
	printf("��� : %.1lf \n " , average);
	//��ȭ����) num1 �� num2  ���� ��ȯ�غ�����.(��Ʈ: ������ Ŀ�� , �������� ����)
	printf("%d , %d" , num1 ,num2); // 10 , 30
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("%d , %d" , num1 ,num2); // 10 , 30

}