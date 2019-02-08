#include <stdio.h>
//출력 printf()
//입력 scanf_s()  ==> () 안에 2가지 값을 넣어야한다 1) 자료형을알리는서식문자 2) 저장할변수 ==> & + 변수
//입력 scanf() ==> 예전버전 사용하면 경고메세지 출력한다.
void main(){
	int a;
	int galo;int selo;int square;int triangle;int kor;int math;int eng;int total; float avg;
	printf("시작"); printf("\n");
	scanf_s("%d", &a);  // a = 키보드로 입력한 값 // a = 10
	printf("%d" , a); printf("\n");
	printf("종료"); printf("\n");

	printf("가로를 입력하세요 >>> ");
	scanf_s("%d" , &galo);
	printf("세로를 입력하세요 >>> ");
	scanf_s("%d" , &selo);
	//전부 입력을 받아서 해결해보세요 .
	//문제 1) 사각형의 넓이를 출력해보세요
	//문제 3) 국어 수학 영어  의 평균을 출력해보세요 
}


//int main(){
//	return 0;
//}
