#include <stdio.h>

/*
	출력 printf()
	입력 scanf_s() ==> 안에 2가지 값을 넣어야한다.
		1) 자료형을 알리는 서식문자
		2) 저장할 변수 ==> & + 변수

*/

void main() {
	int a;
	int width; 
	int height;
	int square;
	int kor;
	int math;
	int eng;
	int total;
	float avg;

	printf("시작"); printf("\n");
	scanf_s("%d", &a);  // a = 키보드로 입력한 값  // a = 10
	printf("%d", a); printf("\n");
	printf("종료"); printf("\n");

	// 전부 입력 받아서 해결해보세요. 
	// 문제 1) 사각형의 넓이를 출력해보세요. 
	printf("가로를 입력하세요 >>> "); 
	scanf_s("%d", &width);
	printf("세로를 입력하세요 >>> "); 
	scanf_s("%d", &height);
	square = width * height;
	printf("사각형의 넓이는 : %d", square); printf("\n");

	// 문제 2) 국어 수학 영어의 평균을 출력해보세요.
	printf("국어 성적을 입력하세요 >>> "); 
	scanf_s("%d", &kor);
	printf("수학 성적을 입력하세요 >>> "); 
	scanf_s("%d", &math);
	printf("영어 성적을 입력하세요 >>> "); 
	scanf_s("%d", &eng);

	total = kor + math + eng;
	avg = total / 3;

	printf("총합 : %d", total); printf("\n");
	printf("평균 : %.2f", avg); printf("\n");


}
