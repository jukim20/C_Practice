#include <stdio.h>  // printf , scanf 
#include <string.h> // strcpy , strlen , strcmp
#include <stdlib.h> // malloc
void name_cpy(char** pp_name){
	char temp_name[100];
	int len;
	printf("�̸��� �Է��ϼ��� >>");
	scanf_s("%s" , &temp_name[0], 100);
	printf("%s\n" ,temp_name);
	len = strlen(temp_name);
	printf("�̸����� >> %d\n" , len);
	pp_name[0] = (char*)malloc(len + 1);
	strcpy_s(pp_name[0], len + 1 , temp_name);
}
char* name_cpy_r(){}
void main(){	
	//char temp_name[100];
	char * p_name;
	//int len;
	//���� 1) temp_name �� �̸��� �Է¹ް� p_name �� �̸����̸�ŭ �����Ҵ��� ������ ���� 
	//======================================
	/*printf("�̸��� �Է��ϼ��� >>");
	scanf_s("%s" , &temp_name[0], 100);
	printf("%s\n" ,temp_name);
	len = strlen(temp_name);
	printf("�̸����� >> %d\n" , len);
	p_name = (char*)malloc(len + 1);
	strcpy_s(p_name, len + 1 , temp_name);*/
	//======================================
	name_cpy(&p_name);
	printf("p_name >> %s\n" , p_name);
	free(p_name);
	//���� 2) �� ������ �Լ��� �������� 
}