#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student{char* p_name;};
void main(){		
	struct Student s1;
	struct Student s_arr[2];
	char t_name[100];
	int len;
	// ���� 1) �л� 1���� ������ �� �Է��ϰ� ���
	strcpy_s(t_name , 100 , "�̿���");
	len = strlen(t_name);
	s1.p_name = (char*)malloc(len + 1);
	strcpy_s(s1.p_name , len + 1 , t_name);
	printf("%s\n" , s1.p_name);
	// ���� 2) �迭�� �л� 2���� ������ ���Է��ϰ� ��� 	
	strcpy_s(t_name , 100 , "�̿���2");
	len = strlen(t_name);
	s_arr[0].p_name = (char*)malloc(len + 1);
	strcpy_s(s_arr[0].p_name , len + 1 , t_name);
	printf("%s\n" , s_arr[0].p_name);

	strcpy_s(t_name , 100 , "�̿���3");
	len = strlen(t_name);
	s_arr[1].p_name = (char*)malloc(len + 1);
	strcpy_s(s_arr[1].p_name , len + 1 , t_name);
	printf("%s\n" , s_arr[1].p_name);
}