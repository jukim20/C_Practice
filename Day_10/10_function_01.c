#include <stdio.h>
// 함수
// 1. 함수란? : 특수한 기능을 따로 만들어 놓은 프로그램 한조각
// 2. 함수는 재활용이 가능하다.
// 3. 함수의 종류 
//			1) 내장함수 : printf() , scanf_s()
//          2) 사용자 정의함수 : 내가 만든함수
// 4. 함수 정의하는 법 : 설계도
//      1. void : 자료형 (int , float double ... 다 사용가능하다)
//      2. main : 이름 (이름은 자유롭게 지을수있다 단 예약어는 불가능)
//      3. ()   : 소괄호 : 매개변수를 만들어줄수있다 예) void test(int a , int b) 
//      4. {}   : 중괄호 : 함수의 영역 (코드블럭) 
// 5. 함수 사용법 : 함수 호출 (call)
//      1. 이름 + () + ;
//      2. 이름 + (값) + ;
void main(); // 함수전방선언 ==> 프로그램은 위에서 아래로 실행되기 때문에 만약에 함수정의 위치가 호출위치보다 아래있을경우 에러발생
void test(){
	printf("테스트");
//	main();
}
void main(){
	int a = 10;
	printf("메인");
	test();
}
