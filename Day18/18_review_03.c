#include <stdio.h>

void test(int* p){
	printf("p >> %d\n", p);
	p[0] = 300;
}
void main(){
	int a  = 20;
	int*p;
	p = &a;
	p[0] = 300;
	printf("메인 %d\n", &a);  // p의 주소와 같다!
	test(&a);

	printf("메인 a >> %d\n", a);


}