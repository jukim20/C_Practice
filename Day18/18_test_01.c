#include <stdio.h>
#include <stdlib.h> // malloc()
#include <string.h> // strcpy_s() // 문자열 복사
char** set_name(){
	char **pp_name;char temp_name[100];int count = 3;int name_len;

	pp_name = (char**)malloc(sizeof(char*) * count);
	printf("이름을 입력하세요 >>\n");
	scanf_s("%s" , &temp_name[0] , 100); // 배열은 사이즈를 입력해줘야한다.
	name_len = strlen(temp_name);  // 문자열의 길이 
	pp_name[0] = (char*)malloc(name_len + 1);
	strcpy_s(pp_name[0] , name_len + 1 ,  temp_name);

	return pp_name;
}
void main(){
	// 1. 추가// 2. 삭제        // 3. 정렬// 4. 조회// 5. 종료 
	char** pp_name; int* p_score; int count = 3;
	int sel; int temp_score; char temp_name[100];
	int name_len;
	pp_name = set_name();
	//pp_name = (char**)malloc(sizeof(char*) * count);
	//printf("이름을 입력하세요 >>\n");
	//scanf_s("%s" , &temp_name[0] , 100); // 배열은 사이즈를 입력해줘야한다.
	//name_len = strlen(temp_name);  // 문자열의 길이 
	//pp_name[0] = (char*)malloc(name_len + 1);
	//strcpy_s(pp_name[0] , name_len + 1 ,  temp_name);
	printf("=========================\n");
	printf("%s\n" , pp_name[0]);
	printf("=========================\n");
	/*while(1){
		printf("1. 추가\n");
		printf("2. 삭제\n");
		printf("3. 출력\n");
		printf("번호를 입력하세요 >> \n");
		scanf_s("%d" , &sel);
		if (sel == 1){		
		}
	}*/
}
