#include <stdio.h>
#include <string.h>  // strcpy() ���ڿ� ���� �Լ�  // strlen() ���ڿ� ����
#include <stdlib.h> // malloc()
char* set_name(){
	char* p;
	int len = 0;
	char buffer[100];
	printf("�̸��� �Է��ϼ��� >>> ");
	scanf("%s" , buffer);
	p = (char*)malloc(len + 1);
	strcpy(p , buffer);
	return p;
}
int * set_scores(){
	int i =0;
	int *p;
	p = (int*)malloc(3 * 4);
	for(i = 0; i < 3 ; i++){
		printf("%d ��° ������ �Է��ϼ��� >>> " , i);
		scanf("%d" , &p[i]);
	}
	return p;
}
int main(){
	char* p_name; int i;
	int* p_score; // ���� , ���� , ���� ,
	/////
	//char buffer[100];  // �ӽ� ����� ...
	//int len;
	//printf("�̸��� �Է��ϼ��� >>> ");
	//scanf("%s" ,buffer);  // �ӽ� ����ҿ� �̸��� �Է¹޴´�
	//len = strlen(buffer); // �̸����̸� ���.
	//p = (char*)malloc(len + 1);  // ���̸�ŭ �����Ҵ��� �޴´�. +1 �� \0 ��  
	//strcpy(p , buffer);  // �����Ҵ� �޸𸮿� �̸��� �����Ѵ�.
	/////
	p_name = set_name();
	p_score = set_scores();
	printf("�̸� : %s\n" , p_name);
	for(i = 0; i < 3; i++){
		printf("%d�� ���� : %d\n" , i , p_score[i]);
	}
	// 1���� �������� ==> 2���� �̸��� ������ 
}