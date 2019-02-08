#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h> // len , cpy 
struct Student{char name1[100];char* name2;int score;};
void main(){
	// 길이          ==> strlen()    
	// 복사          ==> strcpy_s()	
	// 잘르기		 ==> strtok_s() // temp1 = strtok_s(scores," ",&temp2);
	// 쌍따옴표사이의 문자를 기준으로 잘라서 temp1 , scores 에저장 나머지는 temp2에저장
	// 문자를 정수로  ==> atoi()	    // 정수 = atoi(문자);  // 문자를 정수로 
	// 정수를 문자로  ==> itoa()     // itoa(n_total,c_total,10);  // 정수, 문자, 진수(10)
	// 비교          ==>strcmp()
	// 이어 붙여넣기  ==> strcat_s()
	char data[200] = "김철수 100;김만수 80;이영희 54";
	//김철수 100
	//김만수 80
	//이영희 54 
	struct Student s1;
	char temp[200];
	char* temp_2;
	char* temp_1;
	temp_1 = strtok_s(data, ";", &temp_2);
	printf("%s\n" , temp_1);
	strtok_s(temp_1," ",&temp_2);
	printf("%s\n" , temp_1);
	printf("%s\n" , temp_2);
	strcpy_s(s1.name1, 100, temp_1);
	s1.score = atoi(temp_2);
	printf("%s , %d\n", s1.name1 , s1.score);
	/*
	s1.name;
	s1.score;
	struct Student s_arr[3];
	struct Student* p_s;
	*/
	struct Student* p_s;
}	