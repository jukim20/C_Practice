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
	// 문제 1) 학생 1명의 정보를 다 입력하고 출력
	strcpy_s(s1.name , 100 , "김철수");
	s1.age = 30;
	printf("%s , %d\n" , s1.name , s1.age);
	// 문제 2) 배열로 학생 2명의 정보를 다입력하고 출력 
	strcpy_s(s_arr[0].name , 100 , "김만수");
	s_arr[0].age = 20;
	strcpy_s(s_arr[1].name , 100 , "김영수");
	s_arr[1].age = 30;

	strcpy_s(temp_name , 100 , "이영희");
	len = strlen(temp_name);
	s1.p_name = (char*)malloc(len + 1);




	
}