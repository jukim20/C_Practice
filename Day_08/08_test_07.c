#include <stdio.h>

void main() {
	int arr[5] = {10, 20, 31, 40, -50}; 
	int arr2[6] = {0, 10, 20, 30, 40, 50};
	int count = 0; int value; int total = 0; int i = 0; 
	int sel = 0; int temp;

	// 배열:
	// 1. 인덱스로 값 찾기 

	printf("인덱스를 입력하세요 >>> "); 
	scanf_s("%d", &i);

	while (count < 5) {
		if (arr[count] == arr[i]) {
			printf("해당 인덱스의 값 : %d", arr[i]); printf("\n");
		}
		count += 1;
	}
	printf("======================================"); printf("\n");

	// 2. 합출력
	// 3. 값으로 인덱스 찾기

	printf("값을 입력하세요 >>> ");
	scanf_s("%d", &value); 

	count = 0;
	while (count < 5) {
		if (value == arr[count]) {
			printf("인덱스 : %d", count); printf("\n");
		}
		count += 1; 
	}
	printf("======================================"); printf("\n");
	
	// 4. 양수 갯수
	// 5. 짝수 갯수 출력

	// 6. 숫자 2를 입력받으면 0이 오른쪽으로 이동.
	// 예 ) 2 ==> {10, 0, 20, 30, 40, 50} , 2 ==> {10, 20, 0, 30, 40, 50}
 
	while (1) {
		printf("0을 오른쪽으로 옮기려면 2를 입력하세요 >>> "); 
		scanf_s("%d", &sel);
		if (sel == 2) {
			for (i = 0; i < 6; i += 1) {
				if (arr2[i] == 0 && i != 5) {
					temp = arr2[i+1]; 
					arr2[i+1] = arr2[i];
					arr2[i] = temp;
					break;
				}
			}
		} else {
			break;
		}
		for (i = 0; i < 6; i+=1) { 
			printf("%d  ", arr2[i]); 
		}
		printf("\n");
	}

}