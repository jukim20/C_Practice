#include <stdio.h>
#include <Windows.h>
void main(){
	//정적할당
	int arr[100];int size =0;int select = 0;int i;int score;
	printf("학생수는 몇명인가요?");
	scanf("%d" , &size);
	if( size > 100 || size <= 0)return; // 함수 종료 main() 이 종료된다.
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
				arr[i] = score;}
		}
		if(select == 2){
			for( i = 0; i < size; i++){
				printf("%d 번학생 점수 : %d\n" , i , arr[i]);
			}
		}	
	}
}