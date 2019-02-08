#include <stdio.h>
#include <stdlib.h> // malloc() 동적할당
/*
	프로그래밍 ==> 구조( 저장 , 수정 )
	// 저장 ==> 메모리 ==> variable(변수) array(배열),struct(구조체), 동적할당 =>포인터
	// 수정 ==> 알고리즘 ==> oprator(연산자) , if(조건문) , for(반복문) , 
	// 포인터 ==> 함수 , 동적할당 
	// 구조 ==> 함수 ==> pointer(포인터)
*/
void main(){
	int a;
	int arr[3];
	int size = 0;
	int* p;
	scanf("%d" , &size);
	malloc(size); // 첫번째 주소만 반환한다. ==> 이름이 없다.
	p = malloc(size);  // 컴파일러가 강제로 형변환을 해준다.
	p = (int*)malloc(size); // 첫번째 주소만 반환하는void 형이기때문에 직접 형변환을 해준다.
	free(p);
}