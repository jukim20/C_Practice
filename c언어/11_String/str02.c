#include <stdio.h>
#include <string.h>  // strcpy() 문자열 복사 함수  // strlen() 문자열 길이
#include <stdlib.h> // malloc()
char* set_name(){
	char* p;
	int len = 0;
	char buffer[100];
	printf("이름을 입력하세요 >>> ");
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
		printf("%d 번째 성적을 입력하세요 >>> " , i);
		scanf("%d" , &p[i]);
	}
	return p;
}
int main(){
	char* p_name; int i;
	int* p_score; // 국어 , 수학 , 영어 ,
	/////
	//char buffer[100];  // 임시 저장소 ...
	//int len;
	//printf("이름을 입력하세요 >>> ");
	//scanf("%s" ,buffer);  // 임시 저장소에 이름을 입력받는다
	//len = strlen(buffer); // 이름길이를 잰다.
	//p = (char*)malloc(len + 1);  // 길이만큼 동적할당을 받는다. +1 은 \0 값  
	//strcpy(p , buffer);  // 동적할당 메모리에 이름을 복사한다.
	/////
	p_name = set_name();
	p_score = set_scores();
	printf("이름 : %s\n" , p_name);
	for(i = 0; i < 3; i++){
		printf("%d번 성적 : %d\n" , i , p_score[i]);
	}
	// 1차원 성적관리 ==> 2차원 이름도 여러명 
}