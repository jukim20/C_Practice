#include <stdio.h>
#include <stdlib.h>
void dma(){
}
void main(){
	//문제 1) 학생수를 입력받고 해당 학생수만큼 성적을 입력하세요.
	int		st_num;
	int*	p; int i; int input_score;
	printf("학생수를 입력하세요 >>> ");
	scanf("%d" , &st_num);
	// int arr[st_num];
//	p = (int*)malloc(4 * st_num); 이곳에 함수를 호출하자~
	for(i = 0; i < st_num; i++){
		printf("성적을 입력하세요 >>> ");
		scanf("%d" , &input_score);
		p[i] = input_score;
	}
	for(i = 0; i < st_num; i++){
		printf("%d\n" , p[i]);
	}
	free(p); // 메모리 해제 //동적할당받은 메모리는 직접 해제해줘야한다.
}
