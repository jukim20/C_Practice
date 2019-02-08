#include <stdio.h>
#include <stdlib.h> // malloc(); 
// malloc 특징
// 1) <stdlib.h> 헤더를 추가해야 사용가능
// 2) 사이즈(크기)를 직접 계산해서 할당
// 3) 사이즈에 변수사용 가능 <==> 배열과의 가장큰차이 
// 4) 포인터를 사용해서 주소를 넘겨줘야한다.
// 5) 포인터는 맞는 자료형을 사용해야한다.
// 6) 삭제를 하지않으면 프로그램이 종료할때까지 메모리를 사용한다.
void test(){
	int arr[5];
	int*p1 = (int*)malloc(20);
	free(p1);
}
void main(){
	//test();
	//문제 1) 학생수를 입력받고 학생 수만큼 10 을 저장하고 출력 
	int arr[10];
	int st_size;
	int i;
	int* p1;
	//while(1){
	//	printf("등록할 학생수를 입력하세요 >> ");
	//	scanf_s("%d" , &st_size);
	//	if (st_size > 10){
	//		printf("10이상은 입력할수없습니다\n");
	//		break;// 반복문 강제 종료
	//	}
	//	for(i = 0; i < st_size; i++){
	//		arr[i] = 10;
	//		printf("%d\n" , arr[i]);
	//	}
	//	break;
	//}
	while(1){
		printf("등록할 학생수를 입력하세요 >> ");
		scanf_s("%d" , &st_size);
		p1 = (int*)malloc(sizeof(int) * st_size);
		for(i = 0; i < st_size; i++){
			p1[i] = 10;
			printf("%d\n" , p1[i]);
		}
		break;
	}
	free(p1);
}