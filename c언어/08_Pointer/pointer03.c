#include <stdio.h>
void test(){
	int a;  //  'int a' : 재정의
	//int a;
}
void main(){
	int a = 10;  //  'a' : 재정의. 여러 번 초기화했습니다.
	//int a = 20;
	{
		int a;
		//int a;  // 'int a' : 재정의
	}
}