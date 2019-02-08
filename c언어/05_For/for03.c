#include <stdio.h>
#include <stdlib.h>  // rand();
#include <time.h>
void main(){
	int coin;
	int count = 10;
	int win = 0;
	int coins = 0;
	int me = 0;
	srand(  time(0)  ); // 랜덤시드초기화
	printf("%d\n" , rand());
	printf("%d\n" , rand());
	printf("%d\n" , rand() % 3 );  // 0 , 1 , 2
	coin = rand() % 2;  // 0 , 1
	if(coin == 0){
		printf("앞\n");
	}
	if(coin == 1){
		printf("뒤\n");
	}
	// 문제 1) 동전의 앞뒤를 맞추는 게임을 만들어보세요. (10번 던저셔 맞춘횟수 출력)
	// 문제 2) (홀짝)(동전10개중에 몇개를 감춘뒤 홀짝을 맞추는게임)
	while(count > 0){
		count--; // count = count - 1 ;  count -= 1
		/*count -= 1;
		count = count - 1;*/
		coins = rand()% 10 ;
		printf(" 홀(0) , 짝(1) 을 입력하세요 >>> ");
		scanf("%d" , &me);
		if(coins % 2 == 0){
			if(me == 0){
				win++;
				printf("정답\n");
			}
		}
		if(coins % 2 == 1){
			if(me == 1){
				win++;
				printf("정답\n");
			}
		}	
	}
	printf("win >>>  %d\n" , win);
	// 업다운게임  ( ai == 0~99 사이의 숫자를 랜덤으로 저장한다) 
	//  me  >>> 입력 0~99 사이의 숫자를 입력받고 ai 랑 비교해서 크다 작다 출력 .. 
	//	맞출때까지 반복 , 틀린횟수 출력 
	// 예) ai = 50 ,  30 ==> 작다 , 70 ==> 크다 , 50 ==> 정답  , 틀린횟수 
}