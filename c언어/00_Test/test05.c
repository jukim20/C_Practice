#include <stdio.h> //  printf()  , scanf()
#include <stdlib.h> // rand()    , srand()
#include <time.h>  //  time(0)
void main()
{
	srand(time(0));  // 랜덤시드 초기화 ==> time(0)
	//문제 1) 성적을 입력받고 60이상 합격 이하 불합격 출력
	int score;
	printf("성적을 입력하세요 >>> ");
	scanf("%d" , &score);
	if (score >= 60){
		printf("합격\n");
	}
	else if (score < 60){
		printf("불합격\n");
	}
	//문제 1) 물의 온도를 입력받고 결과출력
	//문제 1) 0~20까지 출력해보세요.
	int i;
	for (i = 0; i < 21 ; i++){
		printf("%d\n" , i);
	}
	//문제 2) 0~20중에서 짝수만 출력
	//문제 3) 0~20중에서 홀수만 다 더한값 출력
	//문제 4) 0~20중 4의 배수만 출력
	//문제 5) 단수를 입력받고 구구단 출력 .
	//문제 6) 0~4 사이의 랜덤값을 출력 , 1~5사이의 랜덤값을 출력 .
	int rand_num = rand()% 5; // 0 ~ 4
	int rand_num2 = rand() % 5 + 1; // 1 ~ 5
}