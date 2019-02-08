#include <stdio.h>
void change_a(int*    p){
}
void swap_ab(int*   p1, int*   p2){
}
void main(){
	int		a = 10;
	int*	p;
	int		b = 54;
	//문제 1) a의 값을 함수에서 변경
	//문제 2) b의 값과 a 의값을 함수에서 교환
	printf("a >>> %d\n" , a); //10 ==> 54
	printf("b >>> %d\n" , b); //54 ==> 10
}