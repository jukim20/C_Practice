#include <stdio.h>
//1. 인덱스 => 값 2. 값 => 인덱스 3. 짝수 개수 4. 큰값찾기 5. 셔플 6. 추가 7. 삭제             // 8. 정렬
void main(){
	int d_arr[3][4];
	int total = 0;
	int i; int n; int value = 0; int i1; int i2; int value2;
	for(i = 0; i < 3; i++){ // 세로
		for(n = 0; n < 4; n++){ // 가로
			d_arr[i][n] = value;
			value += (1 * 10);
		}
	}
	//d_arr[1][1] = 2000;
	for(i = 0; i < 3; i++){
		total = 0;
		for(n = 0; n < 4; n++){
			total += d_arr[i][n];
			printf("%d\t" , d_arr[i][n]);			
		}
		printf("total >> %d \n", total);
		printf("\n");
	}
	// 문제 1) 각 가로의 합출력 0 + 1 + 2 +3 // 4 +5 + 6 +7 // 
	// 문제 2) 인덱스로 값찾기 ==> 0 , 0 ==> 0     ,  0 , 1 ==> 10
	printf("인덱스 입력 >>");
	scanf_s("%d", &i1);
	printf("인덱스 입력 >>");
	scanf_s("%d", &i2);
	printf("%d\n" , d_arr[i1][i2]);
	// 문제 3) 값으로 인덱스 찾기 ==> 10 ==> 0, 1   ,  110 ==> 2, 3
	printf("값 입력 >>");
	scanf_s("%d" , &value2);
	for(i = 0; i < 3; i++){
		for(n = 0; n < 4; n++){
			if(value2 == d_arr[i][n]){
				printf("%d , %d\n" , i , n);
			}
		}
	}
}