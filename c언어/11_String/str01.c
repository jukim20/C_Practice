#include <stdio.h>
#include <string.h>  // strcpy() ���ڿ� ���� �Լ�

int main(){
	char c1 = 'a';
	char c2[10] = "012345678";// ������ �迭������ -1 �����ۿ� �Ҽ�����.
	//���ڿ��� '\0' ���ڰ� �������� ǥ���Ѵ�. �⺻������ ����ȴ�.

	// c2 = "ererer"; ���ڿ��� ���Կ����� �Ұ����ϴ�.
	printf("%s\n" , c2);
	strcpy(c2 , "erererer");
	printf("%s\n" , c2);

	printf("�̸��� �Է��ϼ��� >>> ");
	strcpy(c2 , "��ö��");  // �ѱ��� 2byte
	printf("�̸�: %s\n" , c2);
	

}