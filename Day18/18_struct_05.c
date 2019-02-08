#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student{char* p_name;};
void main(){		
	struct Student s1;
	struct Student s_arr[2];
	char t_name[100];
	int len;
	// 문제 1) 학생 1명의 정보를 다 입력하고 출력
	strcpy_s(t_name , 100 , "이영희");
	len = strlen(t_name);
	s1.p_name = (char*)malloc(len + 1);
	strcpy_s(s1.p_name , len + 1 , t_name);
	printf("%s\n" , s1.p_name);
	// 문제 2) 배열로 학생 2명의 정보를 다입력하고 출력 	
	strcpy_s(t_name , 100 , "이영희2");
	len = strlen(t_name);
	s_arr[0].p_name = (char*)malloc(len + 1);
	strcpy_s(s_arr[0].p_name , len + 1 , t_name);
	printf("%s\n" , s_arr[0].p_name);

	strcpy_s(t_name , 100 , "이영희3");
	len = strlen(t_name);
	s_arr[1].p_name = (char*)malloc(len + 1);
	strcpy_s(s_arr[1].p_name , len + 1 , t_name);
	printf("%s\n" , s_arr[1].p_name);
}