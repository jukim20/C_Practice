#include <stdio.h>
void main(){
	// 성적관리 프로그램
	int test[100];
	int number[100]; int count = 0; int i; int remove;
	/*int temp_test[100];
	int temp_number[100];*/
	test[0] = 100;
	number[0] = 5001;
	count +=1;
	test[1] = 10;
	number[1] = 5002;
	count +=1;
	test[2] = 30;
	number[2] = 5003;
	count +=1;

	printf("삭제할 번호를 입력하세요 >> ");
	scanf_s("%d" , &remove);	
	// temp_test 에 삭제할 번호만빼고 복사한다음 다시 test 에 저장한다. count--;
	for(i = 0; i < count; i++){
		printf("%d , " , number[i]);
		printf("%d\n" , test[i]);
		
	}
}