#include <stdio.h>

void main() {
	int arr[5];  // arr[0], arr[1], arr[2], arr[3], arr[4]
	int index = 0;

	arr[0] = 10;
	arr[index] = 20;  // 숫자 대신 int 변수를 넣어도 됨
	printf("%d", arr[0]);  // 20
	printf("\n");

	arr[1] = 100;
	arr[2] = 200;
	arr[3] = 300;
	arr[4] = 400;

	// 문제 1) 인덱스를 입력 받고 해당 값을 출력

	// 1. 반복문으로 계속해서 확인할 수 있도록
	// 2. 0~4가 아닌 숫자를 눌렀을 때는 종료되도록

	while (1) {  // 1은 true이기 때문에 무한반복이 된다. 나올 수 있는 방법은 break 로 빠져나온다. 
		if (index >= 0 && index < 5) {
			printf("인덱스를 입력하세요 >>> ");
			scanf_s("%d", &index);

			printf("%d", arr[index]); printf("\n");
		} else {
			printf("종료됩니다."); printf("\n");
			break; // 반복문 조건이 무엇이든 반복문을 종료한다. 
		}
	}
}