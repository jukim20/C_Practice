#include <stdio.h>
/*	# if else ��
		1. else �� ==>  if ���� ������ �����̸� ����ȴ�.
		2. �ܵ����� ����Ҽ� ����.
*/
void main(){
	//���� 1) ������ �Է¹ް� 60�̻� �հ� ���� ���հ� ���
	int score = 61;
	if(score > 60){
		printf("�հ�\n");
	}
	if(score <= 60){
		printf("���հ�\n");
	}

	if(score > 60){
		printf("�հ�\n");
	}
	else{
		printf("���հ�\n");
	}
}