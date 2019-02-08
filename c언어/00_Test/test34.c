#include <stdio.h>
#include <stdlib.h>
	//	{59, 80, 40, 16}, // kor
	//	{10, 70, 60, 54}, // math
	//	{50, 99, 17, 32}  // eng
struct ScoreManager{
	int* p_kor;
	int* p_math;
	int* p_eng;
	int kor_arr[4];
	int math_arr[4];
	int eng_arr[4];
};

struct tt{
	int a;
	int b;
	int arr[2];
};
void main(){
	//struct ScoreManager sm1;
	struct tt  t1;
	t1.a =100;
	t1.b = 200;
	t1.arr[0] = 300;
}