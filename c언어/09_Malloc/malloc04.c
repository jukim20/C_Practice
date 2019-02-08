#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
void main(){
	int*p ;int size =0;int select = 0;int i;int score;
	printf("학생수는 몇명인가요?");
	scanf("%d" , &size);
	p = (int*)malloc(size * 4); // int 는 4byte 라서 4를 곱한다.(동적할당)
	if( size > 10 || size <= 0)return; // 함수 종료 main() 이 종료된다.
	while(1){
		printf("학생 성적 관리 프로그램\n");
		printf("1. 점수 저장\n");
		printf("2. 점수 출력\n");
		printf("번호를 입력하세요 >>> ");
		scanf("%d" , &select);
		if (select == 1){
			for (i = 0; i < size; i++){
				printf("%d 번학생 점수를 입력하세요 >>> " , i);
				scanf("%d" , &score);
				p[i] = score;}
		}
		if(select == 2){
			for( i = 0; i < size; i++){
				printf("%d 번학생 점수 : %d\n" , i , p[i]);
			}
		}	
	}
}