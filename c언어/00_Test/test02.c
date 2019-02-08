#include <stdio.h>

void main()
{
	//문제 1) 가로가 10 , 세로 가 8 인 사각형 넓이를 구해보세요
	int width = 10;
	int height = 8;
	int score1 ,score2 ,score3;
	int i = 0 ;
	int total;
	printf("사각형넓이: %d\n" , (width * height) );
	//문제 2) 위 사각형의 길이를 가진 삼각형을 구해보세요.
	printf("삼각형넓이: %d\n" , (width * height)/2 );
	//문제 1) 성적 3개를 입력받고 평균이 60 이상이면 합격	
	printf("성적 3개를 입력하세요 >>> ");
	scanf("%d %d %d" , &score1 , &score2 , &score3);
	
	if((score1 + score2 + score3)/3  >= 60){
		printf("합격\n");
	}
	//문제 1) 0~20까지 출력해보세요.
	i = 0;
	while(i < 20){
		printf("%d\n" , i);
		i++;
	}
	for(i = 0; i < 20; i++)
	{
		printf("%d\n" , i);
	}
	//문제 2) 0~20중에서 짝수만 출력
	i = 0;
	while(i < 20){ // i == 0,1,2,3,4,5,6,7,8,9,10...  20
		if(i % 2 == 0){
			printf("%d\n" , i);
		}
		i++;
	}

	for(i = 0; i < 20; i++)
	{
		if(i % 2 == 0){
			printf("%d\n" , i);
		}
	}
	//문제 3) 0~20중에서 홀수만 다 더한값 출력
	i = 0;
	total = 0;
	while(i < 20){ // i == 0,1,2,3,4,5,6,7,8,9,10...  20
		if(i % 2 == 1){
			total += i;  // total = total + i ;   
		}
		i++;
	}
	for(i = 0; i < 20; i++)
	{
		if(i % 2 == 1){
			total += i;  // total = total + i ;   
		}
	}
	printf("%d\n" , total);
}