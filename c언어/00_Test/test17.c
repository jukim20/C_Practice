#include <stdio.h>
void main(){/*
		빙고 , 슬라이드 
		숫자 야구 게임 (심화) 
		1. 0~9까지 배열에 담는다.
		2. 배열을 섞는다.  
		// 심화
		// 랜덤으로 인덱스를 뽑아서 0 번하고 바꾼다 . 100번 
		[0,1,2,3,4,5,6,7,8,9]
		index = rand()%10 , 5
		arr[0] <==> arr[index]
		[5,1,2,3,4,0,6,7,8,9]
		index = rand()%10 , 7
		arr[0] <==> arr[index]
		[7,1,2,3,4,0,6,5,8,9]

		3. 앞에 3 자리를 다시 com[3] 에담는다. 6, 3 ,1 
		4. me[3] 가 숫자 3개를 입력받는다.
		5. com[3] == me[3]  ==> 같은숫자가 있다
		6. ball += 1 ;
		7. 같은숫자인데 자리도 같다 strike += 1;
		8. 1, 3, 8 ==> 1s , 1b  // 심화 
		9. 3strike ==> 승리 반복 
	*/
	int arr[10];int i;
	for(i = 0; i < 10; i++){ // 0~9저장
		arr[i] = i;
	}
	for(i = 0 ; i < 100; i++)  // 100번섞기
	{
		int index = rand()%10;
		int temp = arr[0];
		arr[0] = arr[index];
		arr[index] = temp;
	}
	for(i = 0; i < 10 ; i++){ // 출력
		printf("%d\t" , i);
	}
	int com[3];
	com[0] = arr[0];
	com[1] = arr[1];
	com[2] = arr[2]; // 컴 숫자 저장 
	int me[3];
	int win = 0;
	int strike = 0; 
	while(win == 0){
		printf("숫자 3개를 입력하세요 >> ");
		scanf("%d %d %d" , &me[0] , &me[1] , &me[2]);  // 맞출숫자 저장 
		if (com[0] == me[0] ){strike +=1 , ball+=1 }
		if(strike == 3){
			win = 1;
		}
	}


	// for 
	// 0 ~ 10 까지 출력해보세요.
	int i;		
		//1       // 2    //4
	for( i = 0 ; i < 10 ; i++){
		//3
	//	printf("%d\n" , i);
	}
	// i == 0 , 0 < 10 == true , printf , i == 1
	// i == 1 , 1 < 10 == true , printf , i == 2
	// i == 2 , 2 < 10 == true , printf , i == 3
	// ...
	// i ==10 , 10 < 10 == false ;
	// 0 ~ 10 중에서 짝수만 출력 
	for(i = 0; i < 10 ; i++){
		if(i % 2 == 0){
			//printf("%d\n" , i);
		}}
	// i == 0 , 0 < 10 , i % 2 == 0 , printf() , i == 1
	// i == 1 , 1 < 10 , i % 2 == 1 , i == 2
	// 0 ~ 10 중에서 5보다 큰수만 출력:
	for(i = 0; i < 10 ; i++){
		if(i > 5){
			printf("%d\n" , i);
		}
	}
	// 0~ 10중에 5보다 작은수만 출력 ...
	for( i =0 ; i < 10 ; i++){
		if( i < 5){
		}
	}
	int total = 0;
	// 0~ 10을 다 더한값 출력 ...
	for(i = 0 ; i <10 ; i++){
		total = total + i;
		//total = total + i
		// 0  =		0   + 0 
		// 1  =		0   + 1
		// 3  =		1   + 2
		// 6  =     3   + 3
		// 10 =     6   + 4
		// 15 =    10   + 5
	}
}