#include <stdio.h>
#include <stdlib.h>
struct Teachers{
	char **pp_names;
	char **pp_address;
	char **pp_subject;
};
struct ScoreManager{
	int kor_arr[10];
	int eng_arr[10];
	int math_arr[10];
	char ** pp_names;
	char **pp_address;
	struct Teachers t_arr[10];
};
int main(){
	int select =0;
	//////////////////////////
	int kor_arr[10];
	int eng_arr[10];
	int math_arr[10];
	char names[10][200];
	char address[10][200];	
	///////////////////////////
	int scores[10][3];
	char names[10][200];
	char address[10][200];
	////////////////////////////
	int*p_kor;
	int*p_eng;
	int*p_math;
	char**pp_names;
	char**pp_address;
	///////////////////////////
	int** pp_scores;
	char **pp_names;
	char**pp_address;
	////////////////////////////
	struct ScoreManager sm1;
	///////////////////////////////
	int index = 0;
	int i;
	while(select != 5){
		printf("** 성적관리 프로그램 **\n");
		printf("1. 저장\n");
		printf("2. 수정\n");
		printf("3. 삭제\n");
		printf("4. 출력\n");
		printf("5. 종료\n");
		printf("번호를 입력하세요 (1~5) >>>> ");
		scanf("%d" , &select);
		if(select ==1){
			printf("국어 점수를 입력하세요 >>> ");
			scanf("%d", &kor_arr[index]);
			printf("영어 점수를 입력하세요 >>> ");
			scanf("%d", &eng_arr[index]);
			printf("수학 점수를 입력하세요 >>> ");
			scanf("%d", &math_arr[index]);
			index += 1;
		}
		if(select ==4){
			for( i = 0; i < index; i++){
				printf("국어점수 : %d\n" , kor_arr[i]);
				printf("영어점수 : %d\n" , eng_arr[i]);
				printf("수학점수 : %d\n" , math_arr[i]);
			}	
		}
	}
}