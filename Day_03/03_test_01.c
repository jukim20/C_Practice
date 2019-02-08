#include <stdio.h>
void main() {
	// 문제 1) 가로가 10이고 세로가 10인 사각형의 넓이를 출력해보세요
	int width = 10;
	int height = 10;
	int square = width * height;
	int triangle = width * height * 0.5;
	int kor = 30;
	int math = 41;
	int eng = 53;
	int total = kor + math + eng;
	float avg = total / 3;

	printf("사각형의 넓이는 : %d" , square);
	printf("\n");
	// 문제 2) 위 길이의 삼각형을 구해보세요
	printf("삼각형의 넓이는 : %d" , triangle);
	printf("\n");
	// 문제 3) 국어 30, 수학 41, 영어 53 의 평균을 출력해보세요
	printf("총합 : %d", total);
	printf("\n");
	printf("평균 : %f", avg);
	printf("\n");
	printf("평균 : %.2f", avg);
	printf("\n");
}