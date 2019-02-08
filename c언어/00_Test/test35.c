#include <stdio.h>
#include <stdlib.h>
	//	{59, 80, 40, 16}, // kor
	//	{10, 70, 60, 54}, // math
	//	{50, 99, 17, 32}  // eng
struct test01{
	int * p1;
	int * p2;
	int * p3;
	int * p_arr[3];
};
struct ScoreManager{
	int ** pp_scores;
	int ** pp_names;
	//int scores[3][4];
};
void main(){	
	int* p1;
	int* p2;
	int* p3;
	int* p_arr[3];
	int a;
	int b;
	int c;
	struct test01 t1;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	p_arr[0] = &a;
	p_arr[1] = &b;
	p_arr[2] = &c;
	t1.p1 = &a;
	t1.p2 = &b;
	t1.p3 = &c;
}