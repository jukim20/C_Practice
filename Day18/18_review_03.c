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
	printf("���� %d\n", &a);  // p�� �ּҿ� ����!
	test(&a);

	printf("���� a >> %d\n", a);


}