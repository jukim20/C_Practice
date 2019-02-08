#include <stdio.h> //printf() scanf_s()
// 함수 ==> 1. 내장함수  2. 사용자정의함수 
// 자료형 ==> 1. 기본자료형 2. 사용자정의 자료형 ==> (기본자료형을 여러가지 모아놓은것)

// 구조체(struct)
/*
	1) 사용자 정의 자료형 ==> (기본 자료형을 여러가지 모아놓은 것)
	2) 정의하는 법 ==> struct 자료형이름 { 변수들 };
	3) 선언하는 법 ==> struct 자료형이름 변수명;
	4) 사용하는 법 ==> 변수명 + .(dot)

*/
struct Student{
	char name[20];
	int scores[3];
	int age;
	double height;
};
void main(){
	struct Student s1;
	// int a; 처럼 자료형이 되는 것!
	// int a;  // ㅁ => 정수를 넣을 공간을 만들어주는 것

}
