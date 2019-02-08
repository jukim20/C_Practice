#include <stdio.h>
#include <stdlib.h>
void main(){
	// 1차원 배열
	int arr[4] = {10,20,300,40};
	//    1)  가장큰수 찾기
	// 2차원 배열
	int scores[3][4] = {
		{59, 80, 40, 16}, // kor
		{10, 70, 60, 54}, // math
		{50, 99, 17, 32}  // eng
	};
	int * p_kor;
	int ** pp_scores;
	int temp_arr[12];
	int index =0;
	int temp;
	//      1)  내점수는 70점 내번호는?
	// 심화  2)  점수 높은 순서대로 출력 
	int i; int j;
	for(i = 0; i < 3; i++){
		for(j = 0; j <4; j++){
			if(scores[i][j] == 16){
				printf("%d, %d\n" , i , j);
			}
		}
	}
	// 동적메모리 ==> 1차원  // 	
	p_kor = (int*) malloc( sizeof(int) * 4);
	p_kor[0] = 59;
	p_kor[1] = 80;
	p_kor[2] = 40;
	p_kor[3] = 16;
	//동적메모리를 사용해서 위의 데이타 대로 저장후 출력 
	//int * p_kor;
	//int * p_math;
	//int * p_eng;
	//// 동적메모리 ==> 2차원
	pp_scores = (int**)malloc(sizeof(int*) * 3);  //세로
	pp_scores[0] =  (int*) malloc( sizeof(int) * 4); // 가로
	pp_scores[1] =  (int*) malloc( sizeof(int) * 4); // 가로
	pp_scores[2] =  (int*) malloc( sizeof(int) * 4); // 가로
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){		
			pp_scores[i][j] = scores[i][j];
			temp_arr[index] = pp_scores[i][j];
			index++;
		}
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
		//	printf("%d\t" , pp_scores[i][j]);
		}
	//	printf("\n");
	}
	for(i = 0; i< 12; i++){
		for(j = 0; j < 12 ; j++){
			if(temp_arr[i] > temp_arr[j]){
				temp = temp_arr[i];
				temp_arr[i] = temp_arr[j];
				temp_arr[j] = temp;
			}
		}
	}
	for(i = 0; i< 12; i++){
		printf("%d\n" , temp_arr[i]);
	}

}