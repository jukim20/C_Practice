#include <stdio.h>
struct Student{char* name; int score;};
void main(){
	char** name; int sel;
	while(1){
		printf("학생 관리 프로그램\n");
		//printf("1.추가\n");printf("2.삭제\n");printf("3.조회\n");
		printf("4.불러오기\n");printf("5.저장\n");
		printf("번호를 입력하세요 >> \n");
		scanf_s("%d" , &sel);
	}
}