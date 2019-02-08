#include <stdio.h>
#include <stdlib.h>
//1. 인덱스 => 값 2. 값 => 인덱스 3. 짝수 개수 4. 큰값찾기 5. 셔플 6. 추가 7. 삭제 8. 정렬
void main(){
	int arr[] = {10 ,20, 30, 40 , 50 ,60}; // int arr[6]//
	int d_arr[2][3]; int i; int n;
	//문제 1) arr 의 값을 차례대로 d_arr 에 복사 후 출력 
	int temp = 0;
	for(i =0; i < 2; i++){
		for(n = 0; n < 3; n++){
			d_arr[i][n] = arr[temp];
			temp += 1;
		}
	}
	for(i =0; i < 2; i++){
		for(n = 0; n < 3; n++){
			printf("%d\n" , d_arr[i][n]);
		}
	}
}