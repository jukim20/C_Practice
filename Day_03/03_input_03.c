#include <stdio.h>
//��� printf()
//�Է� scanf_s()  ==> () �ȿ� 2���� ���� �־���Ѵ� 1) �ڷ������˸��¼��Ĺ��� 2) �����Һ��� ==> & + ����
//�Է� scanf() ==> �������� ����ϸ� ���޼��� ����Ѵ�.
void main(){
	int a;
	int galo;int selo;int square;int triangle;int kor;int math;int eng;int total; float avg;
	printf("����"); printf("\n");
	scanf_s("%d", &a);  // a = Ű����� �Է��� �� // a = 10
	printf("%d" , a); printf("\n");
	printf("����"); printf("\n");

	printf("���θ� �Է��ϼ��� >>> ");
	scanf_s("%d" , &galo);
	printf("���θ� �Է��ϼ��� >>> ");
	scanf_s("%d" , &selo);
	//���� �Է��� �޾Ƽ� �ذ��غ����� .
	//���� 1) �簢���� ���̸� ����غ�����
	//���� 3) ���� ���� ����  �� ����� ����غ����� 
}


//int main(){
//	return 0;
//}
