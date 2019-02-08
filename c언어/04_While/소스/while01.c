#include <stdio.h>
// 1. 변수  , 2. 연산자 , 3. if(조건문) , 4. while(반복문)
// while(반복문)
//		1 . while  >>>  키워드
//		2 . (조건) >>>   조건이 참이면 {실행문 실행}
//      3 . {실행문} >>> 실행문이 실행이 끝난후 조건으로 돌아간다. (반드시 탈출조건이 있어야된다)
#include <Windows.h> // system("pause");
void main(){
	int num = 0;
	if(num <10){
		printf("if실행문\n");
	}
	while(num < 10){
		printf("while 반복\n");
		num = num + 1;
		printf("num >> %d\n" , num);
		//num += 1;  // 축약형
		//num++;  // 축약형
	}
	system("pause");
	// num == 1,2,3,4,5 6,7,8,9,10
	//문제 1) 0~20까지 출력해보세요.
	//문제 2) 0~20중에서 짝수만 출력
	//문제 3) 0~20중에서 홀수만 다 더한값 출력
	//문제 4) atm 을 10번 반복시켜보세요. (출금 ,pw)
}