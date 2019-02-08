#include <stdio.h>
#include <stdlib.h> // malloc(); 
// malloc 특징
// 1) <stdlib.h> 헤더를 추가해야 사용가능
// 2) 사이즈(크기)를 직접 계산해서 할당
// 3) 사이즈에 변수사용 가능 <==> 배열과의 가장큰차이 
// 4) 포인터를 사용해서 주소를 넘겨줘야한다.
// 5) 포인터는 맞는 자료형을 사용해야한다.
// 6) 삭제를 하지않으면 프로그램이 종료할때까지 메모리를 사용한다.  p1 = (int*)malloc(sizeof(int) * 4); free(p1);
void main(){
	int score[5]  = {10, 20, 30 , 40 , 50};
	int count = 5;
	// 배열 문제 1)
	// 문제 1) 값을 입력하면 인덱스 출력
	// 문제 2) 값을 입력하면 삭제 // count 로 숫자조절 // 예) 30 ==> {10,20,40,50}
	int* p1; int sel = 0; int num = 0; int count2 = 0; int i;
	// 동적할당 (malloc) 문제 1) 1추가를 누르고 숫자를 입력할때마다 늘어나는동적메모리 식을 만들어보세요 
	while(1){
		for(i = 0 ; i < count2 ; i++){printf("%d\n" , p1[i]);}
		printf("1. 추가\n"); // \n 은 한줄띄기
		scanf_s("%d" , &sel); 
		if(sel == 1){
			printf("추가할 숫자를 입력하세요 >> ");
			scanf_s("%d" , &num);		
		}
		else {break;}
	}
}