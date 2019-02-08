#include <stdio.h>
#include <stdlib.h>  // rand()  , srand()
#include <time.h>  // time(0) // 현재시간 
void main(){
	int rand_num; 
	int me = -1;
	srand(time(0));  // 시간이 계속 바뀌기 때문에 랜덤테이블이 초기화
	/*rand_num = rand();
	printf("%d\n" , rand_num);
	rand_num = rand();
	printf("%d\n" , rand_num);
	rand_num = rand();
	printf("%d\n" , rand_num);*/
	rand_num = rand() % 100; // 0 ~ 99
	//줄정렬 ==> ctrl + a , alt + f8
	while(me != rand_num){
		printf("치트 : %d\n" , rand_num);
		printf("0~99사이의 숫자를 입력하세요 >>> ");
		scanf("%d" , &me);
		if (me > rand_num){
			printf("크다\n");
		}
		else if(me < rand_num){
			printf("작다\n");
		}
		else{
			printf("정답\n");
		}
	}
}