#include <stdio.h>

void main(){
	char c; // 1byte
	int  n;
	char str[10] = "��";  // ũ�⸦ �˳��ϰ� �̸� �������ߵȴ�.
	double d = 1.1;
	float f = 1.2;
	n = 10;
	c = 'a'; 
	//c = '��';// �ѱ��� 2byte
	printf("%d\n" , n);
	printf("%c\n" ,  c);
	printf("%s\n" , str); // ���ڿ��� ���Ĺ��� s �� ����Ѵ�.
	printf("%lf\n" , d);  // long float ==> double 8byte
	printf("%f\n" , f);   // flaot ==> float 4byte
}