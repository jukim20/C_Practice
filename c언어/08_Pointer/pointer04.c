#include <stdio.h>
// 포인터 변수 
	//1.   int*   : 자료형
	//2.   p	  : 이름
// 주소를 담을수 있는 변수.
// 역참조 ==> 가르키고있는 주소의 변수를 참조해서 값을 변경하는기능 
// 일반변수의 모습
	//1 .  a   ==> 값을 반환
	//2 .  &a  ==> 주소를 반환
void main(){
	int		a = 10;
	int*	p = 0;
	int     b = 0;
	printf("값 >>> %d\n" , a);
	printf("주소 >>> %d\n" , &a); // 주소  ==> 실제 이름 
	//printf("주소 >>> %x\n" , &a); // 16진수
	b = a;  // 10
	p = &a; // x001
	printf("%d\n" , p);

	printf("%d\n" , *p);//역참조
	//printf("%d\n" , a);//역참조
	*p = 200;
	//a = 200;
	printf("a >>> %d\n" , a);
}
//void swap(int num1 ,int num2){
//	int temp;
//	temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
//void main(){
//	int a = 10;
//	int b = 20;
//	swap(a , b);
//	printf("%d\n" , a);  // 10  ==> 20
//	printf("%d\n" , b);  // 20  ==> 10
//}