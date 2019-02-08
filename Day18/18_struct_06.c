#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Student{char* p_name;};
void main(){		
	struct Student * p_s1;  int count = 0;	
	char t_name[100];
	int len;
	p_s1 = (struct Student*)malloc(sizeof(struct Student) * (count + 1) );
	// 문제 1) 학생 1명의 정보를 다 입력하고 출력
	strcpy_s(t_name , 100 , "이영희");
	len = strlen(t_name);
	p_s1[count].p_name = (char*)malloc(len + 1);
	strcpy_s(p_s1[count].p_name , len + 1 , t_name);
	printf("%s\n" , p_s1[count].p_name);
	// 추가 삭제(번호)
}