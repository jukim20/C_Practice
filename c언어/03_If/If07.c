#include <stdio.h>
/*   # if , else if , else 문		
		1. if 문의 조건이 추가로  필요할때 사용한다.
		2. 단독으로 사용불가능하다.
		3. 실행문은 한가지만 실행된다. 
*/
void main(){
	//문제 1) 물의 온도를 입력받고 결과출력
	int water;
	water = 100;
	if(water >100){
		printf("기체\n");
	}
	else if(water >70){
		printf("뜨겁다\n");
	}
	else if(water >30){
		printf("미지근하다\n");
	}
	else if(water >0){
		printf("차갑다\n");
	}
	else {
		printf("얼음\n");
	}
}