#include <stdio.h>
/*
	배열 (array)
		1. 같은 자료형으로 선언된 변수들의 집합
		2. 메모리에 차례대로 할당
		3. 방번호 (인덱스) 가 0부터 차례대로 저장된다.
*/

void main() {
	int a = 10;
	int b = 20;
	int c = 30;

	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	printf("%d", arr[0]); printf("\n");
}