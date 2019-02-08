#include <stdio.h>
void main(){
	int arr[5] = {20,100,200,300,400}; // 변수선언과함께 값저장
	int sel = 0; int count = 0;
	while(sel != 2){
		printf("1.전체출력");printf("\n");
		printf("2.종료");printf("\n");
		printf("번호를 입력하세요 >>> ");printf("\n");
		scanf_s("%d" , &sel);
		if (sel == 1){
			count = 0;
			while(count <5){
				printf("%d" , arr[count]);printf("\n");
				count += 1;
			}
		}
	}	
}