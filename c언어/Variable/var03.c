#include <stdio.h>
void main(){
	//문제 1) 가로가 10 , 세로 가 8 인 사각형 넓이를 구해보세요
	//문제 2) 위 사각형의 길이를 가진 삼각형을 구해보세요.
	//문제 3) 월급을 가지고 연봉을 구해보세요.
	//문제 4) 10 / 3 을 출력하는데 소수점 2자리까지만 구해보세요.
	//문제 5) 성적(국어,영어,수학) 3개(0~99)점수를 저장하고 총합 평균을 출력하세요. 
	//		평균은 소수점 1자리까지 출력
	int galo;int selo;int square;int triangle;int salary;int kor , eng , math;
	int total; double average;  int num1 = 30; int num2 = 10; int temp;
	galo =10;
	selo =8;
	square = galo * selo;
	printf("가로 : %d , 세로 : %d , 넓이 : %d \n" , galo ,selo ,square);  
	printf("성적3개를 입력하세요 >>> ");
	scanf("%d" , &kor);
	scanf("%d" , &eng);
	scanf("%d" , &math);
	total = kor + eng + math;
	average = (double)total / 3;
	printf("평균 : %.1lf \n " , average);
	//심화문제) num1 과 num2  값을 교환해보세요.(힌트: 흰잔의 커피 , 검은잔의 우유)
	printf("%d , %d" , num1 ,num2); // 10 , 30
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("%d , %d" , num1 ,num2); // 10 , 30

}