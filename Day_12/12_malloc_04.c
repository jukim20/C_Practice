#include <stdio.h>
#include <stdlib.h> // malloc(); 
// malloc 특징
// 1) <stdlib.h> 헤더를 추가해야 사용가능
// 2) 사이즈(크기)를 직접 계산해서 할당
// 3) 사이즈에 변수사용 가능 <==> 배열과의 가장큰차이 
// 4) 포인터를 사용해서 주소를 넘겨줘야한다.
// 5) 포인터는 맞는 자료형을 사용해야한다.
// 6) 삭제를 하지않으면 프로그램이 종료할때까지 메모리를 사용한다.
void main(){
	int score_arr[100];
	// 성적관리 프로그램 
	// 1. 등록
	// 2. 삭제
	// 3. 조회
	int* p1 = 0;int sel; int temp_score; int count = 0 ; int *p2; int i;
	while(1){
		printf("성적관리프로그램\n");
		printf("1. 등록\n");
		printf("2. 삭제\n");
		printf("3. 조회\n");
		printf("4. 정렬\n"); // 성적이 높은순서대로 바꾸는거
		printf("번호를 입력하세요 >> ");
		scanf_s("%d" , &sel);
		if(sel== 1){
			printf("학생점수를 입력하세요 >> ");
			scanf_s("%d" , &temp_score);
			p2 = p1;
			p1 = (int*)malloc(sizeof(int) * (count + 1));
			for(i = 0; i < count; i++){
				p1[i] = p2[i];
			}
			p1[count] = temp_score;
			count += 1;
			if(p2 != 0){free(p2);}
		}
		if(sel == 2){}
		if(sel == 3){
			for(i = 0; i < count ; i++){
				printf("%d\n" , p1[i]);
			}
		}
	}
	free(p1);
}