#include <stdio.h>
void main(){
	// 성적관리 프로그램
	int test[100];int number[100];
	int count = 0; int i; int sel = 0; int in_score; int remove;
	//int score[] =  {20,      3,   46,   10,   55,    2};
	//int number[] = {5001, 5002, 5003, 5004, 5005, 5006};
	while(1){ // 1은 true (참) 이기때문에 무한반복된다. break로 나올수있다.
		printf("성적관리 프로그램\n");
		printf("1.추가\n");
		printf("2.삭제\n");
		printf("3.조회\n");
		printf("번호를 입력하세요 >>> ");
		scanf_s("%d",&sel);
		if(sel == 1){
			printf("점수를 입력하세요 >> ");
			scanf_s("%d" , &in_score);
			test[count] = in_score;
			number[count] = 5001 + count;
			count += 1;
		}
		else if(sel == 2){
			printf("삭제할 번호를 입력하세요 >>");
			scanf_s("%d"  , &remove);
			for(i = remove; i< count - 1 ; i++){
				test[i] = test[i + 1];
				number[i] = number[i + 1];			
			}	
			count -=1;
		}
		else if(sel == 3){
			for(i = 0; i < count ; i++){
				printf("번호 : %d" , number[i]);
				printf(", 점수 : %d\n" , test[i]);
			}
		}		
	}	
}