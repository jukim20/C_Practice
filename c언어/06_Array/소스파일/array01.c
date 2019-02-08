#include <stdio.h>
// 배열 (array)
//    1. 같은 자료형으로 선언된 변수들의 집합
//    2. 메모리에 차례대로 할당.
//		int arr[5]; ==> int 자료형 5개 만들어라 . 번호를 붙여라.
//		[개수] ==> 번호를 인덱스라고 한다 (index)
//		번호는 0 번부터 시작한다.
void main()
{
	int a= 10;
	int a1 = 20;
	int a3 = 30;
	int arr[5];  // 변수 5개 만들어라 // 번호가 붙어있다.
	arr[0];
	arr[1];
	arr[2];
	arr[3];
	arr[4];
	a = 20;
	arr[0] = 1130;
	arr[4] = 30;
	// arr[5] = 10;  인덱스 번호를 착각하기 쉽다.
	printf("arr[0] >>> %d\n" , arr[0]);
	//printf("arr[5] >>> %d
}