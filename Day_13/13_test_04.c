#include <stdio.h>
#include <stdlib.h> // malloc(); 
void main(){
	// 배열은 처음부터 크기가 정해져있어서 유연하게 사용하기힘들다.
	// 자바 파이썬 c# ==> 전부 동적할당 
	int* p1 = 0;
	int* p2 = NULL; 
	int sel = 0; int i; int count = 5; int num = 0;
	int size = 5;
	//int arr[size]; // 배열은 size 에 변수를 사용할수없다. 미리정해놔야함
	int arr[5];
	p1 = (int*)malloc(sizeof(int) * size);	
	p1[0] = 100; p1[1] = 20; p1[2] = 30; p1[3] = 40; p1[4] = 5;
	while(1){
		for (i = 0; i < count; i++){
			printf("출력 : %d\n" , p1[i]);
		}
		printf("1. 삭제\n");
		printf("옵션을 선택하세요 >>> ");
		scanf_s("%d" , &sel);
		if(sel == 1){	
			printf("삭제할 번호를 입력하세요 >> "); // 삭제할 값 ==> 숙제
			scanf_s("%d" , &num); //2
			p2 = p1;
			p1 = (int*)malloc(4 * (count - 1));
			for(i = 0; i < num; i++){ // 앞에꺼복사
				p1[i] = p2[i];
			}
			for(i = num; i < count - 1; i++){ // 뒤에꺼 복사
				p1[i] = p2[i + 1];
			}
			free(p2);
			count -= 1;
		} // 삭제만들기
		else {break;}
	}
	free(p1);// 동적할당은 반드시 사용후 삭제를 해야된다.
}