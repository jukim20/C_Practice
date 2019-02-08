#include <stdio.h>
#include <stdlib.h>
//1. 인덱스 => 값 2. 값 => 인덱스 3. 짝수 개수 4. 큰값찾기 5. 셔플 6. 추가 7. 삭제 8. 정렬
void main(){
	int* p1 = 0; int i; int value; int *p2; int count = 3;
	int remove_index = -1;
	p1 = (int*)malloc(sizeof(int) * count); 
	free(p1);
	p1 = malloc(4 * count); // int arr[3]; // 위에꺼 축약형 
	p1[0] = 10; p1[1] = 20; p1[2] = 30;
	//문제 1) 값을 입력하면 삭제 
	for(i = 0; i < count; i++){
		printf("%d\n" , p1[i]); // 출력
	}
	printf("값을 입력하세요 >>");
	scanf_s("%d" , &value);
	for(i =0; i < count; i++){
		if(p1[i] == value){   
			remove_index = i; // 지울 번호 찾기(인덱스)
		}
	}	
	count -=1; // 크기 감소
	p2 = p1;  // 데이터(주소) 복사
	p1 = (int*)malloc(sizeof(int) * count); // 새로운 메모리할당 2개짜리
	for(i = 0; i < remove_index; i++){
		p1[i] = p2[i]; // 전에꺼에서 복사 (앞부분)
	}
	for(i = remove_index; i < count; i++){
		p1[i] = p2[i + 1]; // 전에꺼복사 (뒷부분)
	}	
	free(p2);	// 전 메모리 삭제
	for(i = 0; i < count; i++){
		printf("%d\n" , p1[i]);  // 출력
	}
	free(p1); // 원본 삭제 
}