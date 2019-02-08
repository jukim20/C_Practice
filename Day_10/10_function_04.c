#include <stdio.h>
// 변수의 생명주기
//  1) 전역변수 ==> 프로그램이 시작되서 종료될때까지 
//  2) 지역변수 ==> 코드블럭 {} 안에서만 살아있다.

void main(){
	int a = 10;{
		int a = 20;
	}
	printf("%d" , a);printf("\n");
}


