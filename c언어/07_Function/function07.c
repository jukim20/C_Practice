#include <stdio.h>
// 1. ���� , 2.������ , 3. ���ǹ�  , 4.�ݺ��� , 5.�迭 
// 6. �Լ� , 7.������

void main(){
	int		a = 0;
	int*	p = 0;
	p = &a;
	a = 100;
	printf("%d\n" , a);  // 100
	printf("%d\n" , *p); // 100
	*p = 200;
	printf("%d\n" , a);  // 200
	a = 300;
	printf("%d\n" , a);  // 300
}