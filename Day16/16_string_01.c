#include <stdio.h>

void main(){
	char c; // 1byte
	int  n;
	char str[10] = "박";  // 크기를 넉넉하게 미리 만들어놔야된다.
	double d = 1.1;
	float f = 1.2;
	n = 10;
	c = 'a'; 
	//c = '박';// 한글은 2byte
	printf("%d\n" , n);
	printf("%c\n" ,  c);
	printf("%s\n" , str); // 문자열은 서식문자 s 를 사용한다.
	printf("%lf\n" , d);  // long float ==> double 8byte
	printf("%f\n" , f);   // flaot ==> float 4byte
}