#include <stdio.h>  // printf , scanf 
#include <string.h> // strcpy , strlen , strcmp
#include <stdlib.h> // malloc
void main(){	
	char temp_name[100];
	char** pp_name;
	int len;
	pp_name = (char**)malloc(sizeof(char*) * 3);
	
	strcpy_s(temp_name , 100 , "ȫ�浿");
	len = strlen(temp_name);
	pp_name[0] = (char*)malloc(len + 1);
	strcpy_s(pp_name[0], len + 1,temp_name);
	printf("%s\n" , pp_name[0]);

	strcpy_s(temp_name , 100 , "ȫ�浿");
	len = strlen(temp_name);
	pp_name[1] = (char*)malloc(len + 1);
	strcpy_s(pp_name[1], len + 1,temp_name);
	printf("%s\n" , pp_name[1]);

	strcpy_s(temp_name , 100 , "ȫ�浿");
	len = strlen(temp_name);
	pp_name[2] = (char*)malloc(len + 1);
	strcpy_s(pp_name[2], len + 1,temp_name);
	printf("%s\n" , pp_name[2]);

	// �߰� ���� ��Ʈ�ѷ� ������
	
}