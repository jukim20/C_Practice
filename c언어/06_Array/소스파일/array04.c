# include <stdio.h>
# include <stdlib.h>
# include <time.h>
void main(){
	int score = 0;
	int scores[5];
	int i;
	srand(time(0));
	// 성적을 하나 랜덤으로 입력받고 60이상이면 합격불합격출력
	/*score = rand() % 101;
	if(score >60){printf("합격\n");}*/
	/*scores[0] = rand() % 101;
	scores[1] = rand() % 101;
	scores[2] = rand() % 101;
	scores[3] = rand() % 101;
	scores[4] = rand() % 101;
	printf("%d\n" , scores[0]);
	printf("%d\n" , scores[1]);
	printf("%d\n" , scores[2]);
	printf("%d\n" , scores[3]);
	printf("%d\n" , scores[4]);*/
	for(i = 0; i < 5; i++){
		scores[i] = rand() % 101;
	}
	for(i = 0; i < 5; i++){
		printf("%d\t" , scores[i]);
	}
	printf("\n");
	//문제 1) 성적이 50 점이 이상인 학생만 다시 출력해보세요.
	for( i= 0; i < 5; i++){
		if(scores[i] >50){
			printf("%d\t" , scores[i]);
		}
	}
	printf("\n");
}