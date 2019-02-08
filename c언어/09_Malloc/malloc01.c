#include <stdio.h>
#include <stdlib.h> // malloc()
// 배열의 약점 ==> 사이즈를 미리정해야된다.
// 사이즈는 ==> 상수밖에 올수없다.
// 상수 ==> 변수 != 상수 ==> 변하지않는수
void main(){
	int size = 10;
	//int arr2[size];
	int arr[5];
	int a = 10;
	int stu[10];  // ==> 40
	int st_num =0;
	int* p;  
	char c[5];  // ==> 5
	double d[5];  // ==> 40
	///////////////////////////////////////////////
	a = 20;
	a = 100;
	printf("학생 수를 입력하세요 >>> ");
	scanf("%d" , &st_num); // 5
	//int st_score[st_num];	
	malloc(st_num);  // st_num 의 크기의 메모리확보	
	//1 . 이름이 없다 . 주소만 가지고있다.
	p = malloc(st_num);
	p = (int*)malloc(st_num);
	//2 . 사이즈를 정확하게 알려줘야된다.
	//3 . 함수 를 써야된다.
	p = (int*)malloc(4 * st_num);
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50;
	//p = new int[st_num];	
}