#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student{
	int age;
	//int scores[3];
	char name[100];
	char* p_name;
};
void main(){	
	char temp_name[100]; int len;
	struct Student s1;
	struct Student s_arr[2];
	//struct Student* p_s1;
	// ���� 1) �л� 1���� ������ �� �Է��ϰ� ���
	strcpy_s(s1.name , 100 , "��ö��");
	s1.age = 30;
	printf("%s , %d\n" , s1.name , s1.age);
	// ���� 2) �迭�� �л� 2���� ������ ���Է��ϰ� ��� 
	strcpy_s(s_arr[0].name , 100 , "�踸��");
	s_arr[0].age = 20;
	strcpy_s(s_arr[1].name , 100 , "�迵��");
	s_arr[1].age = 30;

	strcpy_s(temp_name , 100 , "�̿���");
	len = strlen(temp_name);
	s1.p_name = (char*)malloc(len + 1);




	
}