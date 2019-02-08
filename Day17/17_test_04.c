#include <stdio.h>
#include <stdlib.h>
void main(){	
	// 동적할당 추가
	int arr[5];  // 4 * 5 ==> 20 byte
	int*p; int* p_add = 0; int add_num;  
	int count = 0;
	int i; int* p_temp;
	//p = malloc(20); // 20 byte ==> arr[5]
	while(1){
		printf("추가할 정수를 입력하세요 >> ");
		scanf_s("%d" , &add_num);
		p_temp = p_add;  // 전의 주소값 복사
		p_add = malloc((count + 1) * 4);  // ==> 4 == arr[1] //새로운메모리
		p_add[count] = add_num; // 새로운 메모리의 마지막에 입력한값 저장
		for(i = 0; i < count; i++){
			p_add[i] = p_temp[i];  // 새로운 메모리에 앞부분 복사
		}
		count += 1;	// 메모리 크기 증가
		for(i = 0; i < count; i++){
			printf("%d\n" , p_add[i]); // 출력 
		}
		free(p_temp); // 전의 메모리 삭제 
	}
}