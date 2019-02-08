#include <stdio.h>
// 변수의 특징:
	// 1. 변수 선언은 항상 제일 먼저해야된다.
	// 2. 변수는 하나의 값만 저장가능하다. 새로운값이 들어오면 전의 값은 지워진다.
	//		int a = 10; a = 20; a = 30; a = -10; a = -100 ;  a = 0; 결과 >>> a == 0
// 변수 이름규칙
	// 1. 숫자로 시작할수없다.   int 0a (x) , int a0(o)
	// 2. 특수기호는 _ 만 사용가능하다 int _a  ,  int a_b ; 
	// 3. 대소문자를 구분한다.  int a; int A;	
    // 4. 대도록 이름은 뜻을 알수있게 짓는게 좋다.
void main(){
	int a = 21;
	int b = 20;
	double c = 21;
	double d = 20;
	a = 100;
	a = 0;
	a = -1;
	a = 20;
	a = 21;
	printf("%d / %d = %d\n" , a  , b , a / b);
	printf("%lf / %lf = %lf \n" , c , d , c / d);
	// 형변환 ==> (변환할 자료형)변수;
	printf("%d + %d = %d\n" , a  , b , a + b);
	printf("%d - %d = %d\n" , a  , b , a - b);
	printf("%d * %d = %d\n" , a  , b , a * b);
	printf("%d / %d = %lf\n" , a  , b , (double)a / (double)b); 
	// int e = 10;//  error C2143: 구문 오류 : ';'이(가) '형식' 앞에 없습니다.
}