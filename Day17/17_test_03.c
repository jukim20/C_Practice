#include <stdio.h>

void main() {
	// 배열
	int arr[5] = {11, 12, 13, 14, 15};

	// 1. 인덱스로 값 찾기 // 1 ==> 12
	// 2. 값으로 인덱스 찾기 // 3 ==> 14
	// 3. 인덱스로 교환 // 1, 3 ==> 11, 14, 13, 12, 15
	// 4. 셔플 // ==> 0번인덱의 값과 랜덤인덱스의 값과 교환 (1000번 반복)
	// 5. 맥스 // 가장 큰 값 찾기
	// 6. 추가 // count를 이용해서 눈속임을 한다. 
	// 7. 삭제 // count를 이용해서 눈속임을 한다. 
	// 8. 정렬 // 0번 인덱스가 나머지와 전부 비교해서 큰 값과 교환 ==> 1번 인덱스가 나머지와 전부 비교해서 큰 값고 교환 ==> 반복

	int my_sort[10] = {10, 342, 231, 34, 3, 2, 34, 5, 6, 1};

	// 추가 
	int my_remove[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // 전부 0으로 초기화
	int count = 0; int remove_num; int i; int remove_index;

	count = 10;

	while (1) {
		for (i = 0; i <count; i++) {
			printf("%d\n" , my_remove[i]); // 출력
		}

		printf("삭제할 정수를 입력하세요 >> ");
		scanf_s("%d", &remove_num);
		
		for (i = 0; i <count; i++) {
			if (remove_num == my_remove[i]) {  // 삭제할 값과 배열 비교
				remove_index = i;  // 삭제할 인덱스 찾기
			}
		}
		count -= 1;  // 삭제 작업
		for (i = remove_index; i <count; i++) { 
			my_remove[i] = my_remove[i+1];  // 삭제 인덱스 위에 뒤의 값을 덮어씌운다
		}


	}

	
}