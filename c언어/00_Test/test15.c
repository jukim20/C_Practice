#include <stdio.h>
void change_a(int* p){
	printf("%d\n" , p);
	printf("%d\n" , *p);
	*p = 300;
}
void main()
{
	int		a = 10;
	int*	p;
	//scanf("%d" , &a);
	/*printf("%d\n" , a);
	printf("%d\n" , &a);
	p = &a;
	printf("%d\n" , p);
	printf("%d\n" ,*p);
	*p = 200;
	printf("a >>> %d\n" , a);*/
	printf("%d\n" , a);
	printf("%d\n" , &a);
	p = &a;
	change_a(&a);
	printf("%d\n" , a);
}