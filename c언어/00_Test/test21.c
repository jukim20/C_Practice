#include <stdio.h>
void main(){
	int i = 0;
	int total = 0;
	for( i = 0 ; i < 5; i++){
		// i 가 1 씩 증가하면서 5가되면 반복문 종료.
		if(i == 1){
			printf("%d\n" , i);  // 총 5번 실행이됬다.
		}
	}
	// i 가 홀수 일때만 출력.
	// i 가 3보다 클때만 출력.
	// i 가 1일 때만 출력.
	// i 를 다 더한값 
	for( i = 0 ; i < 5; i++){
		total = total + i;
		// 0  =  0    + 0
		// 1  =  0    + 1
		// 3  =  1    + 2
		// 6  =  3    + 3
		//10  =  6    + 4
	}
	printf("%d\n" ,total);
}