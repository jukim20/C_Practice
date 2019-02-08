#include <stdio.h>
#include <stdlib.h> // malloc(); 
void main(){
	// 배열은 처음부터 크기가 정해져있어서 유연하게 사용하기힘들다.
	// 자바 파이썬 c# ==> 전부 동적할당 
	int* p1 = 0;
	int* p2 = NULL; 
	int sel = 0; int i; int count = 0; int num = 0;
	while(1){
		for (i = 0; i < count; i++){
			printf("출력 : %d\n" , p1[i]);
		}
		printf("1. 추가\n");
		scanf_s("%d" , &sel);
		if(sel == 1){
			printf("저장할 숫자를 입력하세요 >> ");
			scanf_s("%d" , &num);
			p2 = p1;
			
			p1 = (int*)malloc(sizeof(int) * (count + 1));
			// int arr[5] 와 똑같은 것

			for(i = 0; i < count; i++){
				p1[i] = p2[i];
			}
			p1[count] = num;
			count += 1;
			free(p2);
		} // 추가만들기
		else {break;}
	}
}