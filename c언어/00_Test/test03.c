#include <stdio.h>
void main(){

	//문제 1) 0~20까지 출력해보세요.
	int i = 0;
	int ggdan = 0;
	/*for(i = 0; i < 5 ; i++){
		printf("%d\n" , i);
	}
	printf("%d\n" , i);
	i = i + 1;
	printf("%d\n" , i);
	i = i + 1;
	printf("%d\n" , i);
	i = i + 1;
	printf("%d\n" , i);
	i = i + 1;
	printf("%d\n" , i);
	i = i + 1;*/
	//문제 2) 0~20중에서 짝수만 출력
	//문제 3) 0~20중에서 홀수만 다 더한값 출력
	//문제 4) 0~20까지 중에서 3의 배수 만출력	
	for (i =0 ; i < 10; i++){
		if(i % 3 ==0 && i != 0){
		//	printf("%d\n" , i);
		}
	}
	//문제 5) 0~20까지 중에서 3의 배수이면서 5의 배수만 출력
	for(i = 0; i < 200 ; i++){
		if(i % 3 == 0 && i % 5 ==0 && i != 0 ){
		//	printf("%d\n" , i);
		}
	}
	//문제 6) 구구단수를 입력받으면 해당 구구단 출력 . 예) 입력 3 ==> 3 * 1 = 3 .....
	printf("구구단을 입력하세요 >>> ");
	scanf("%d" , &ggdan);
	for( i = 0; i < 10; i++){
		printf("%d * %d = %d\n"  , ggdan  , i , ggdan * i);
	}
	//문제 7) 0 에서 10단위로 90까지 출력 . 예) 0 ,10 ,20 ,30 ,40 ,50 ,60 ,70 ,80 ,90
	for(i = 0; i < 10 ; i++){
		printf("%d\n" , i * 10); 
	}
}