/*
 1. 저장 ==> 자료구조 ==> 변수, 배열[상수], 동적메모리 배열[변수] , 
								2차원배열[상수] , 2차원동적메모리 배열[변수]
 2. 수정 ==> 알고리즘 ==> (operator , if , for)
 3. 구조 ==> (구조체)(함수)
 4. 포인터 ==> 동적메모리 , 함수 
 객체지향 ==> cpp , c# , java , python
*/
#include <stdio.h>
#include <stdlib.h>// malloc
#include <string.h>// strlen
char** dma_names(int st_num){
	char** pp_names = (char**)malloc(sizeof(char*) * st_num);
	return pp_names;
}
int** dma_scores(int st_num){
	int i;int** pp_scores = (int**)malloc(sizeof(int*) * st_num);
	for( i=0; i < st_num; i++){
		pp_scores[i] = (int*)malloc(sizeof(int) * st_num);
	}
	return pp_scores;
}
void set_info(char ** names , int ** scores , int index){ 
	char buffer[200]; int len;
	printf("%d번 이름을 입력하세요 >>> " , index);
	scanf("%s" , buffer);
	len = strlen(buffer);
	names[index]  = (char*)malloc(len +1);
	strcpy(names[index] , buffer);
	printf("%d번 성적을 입력하세요 >>> " , index);
	scanf("%d" , &scores[index]);
}
void main(){
	//알고리즘 ==>  1. 가위바위보 
	//			   2. 업 다운게임 
	//             3. ATM
	//			   4. 로또
	//			   5. 빙고
	//			   6. 슬라이드
	//             7. 숫자야구게임 
	//			   8. 테트리스 , 애니팡 , 체스
	char** names;int** scores;int st_size;int select = 0;int index = 0;
	printf("학생수를 입력하세요 >>> ");
	scanf("%d" , &st_size);  //3
	names = dma_names(st_size); // 학생 수만큼 동적할당.
	scores = dma_scores(st_size);
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
			set_info(names , scores , index);
			index += 1;
		}
		if(select ==4){
		}
	}

}