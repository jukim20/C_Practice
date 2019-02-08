#include <stdio.h>
#include <stdlib.h> // malloc(); 
// malloc 특징
// 1) <stdlib.h> 헤더를 추가해야 사용가능
// 2) 사이즈(크기)를 직접 계산해서 할당
// 3) 사이즈에 변수사용 가능 <==> 배열과의 가장큰차이 
// 4) 포인터를 사용해서 주소를 넘겨줘야한다.
// 5) 포인터는 맞는 자료형을 사용해야한다.
// 6) 삭제를 하지않으면 프로그램이 종료할때까지 메모리를 사용한다.
void main(){
	int temp;
	int*p_int; // 4byte  // 백만단위 ==> 20억정도가 인트저장범위
	char*p_char; // 4byte
	double* p_double; // 4byte
	p_int = (int*)malloc(20);  // 형변환
	printf("p_int : %d\n" , &p_int[0]);
	p_int[0] = 200;
	printf("p_int : %d\n" , &p_int[1]);
	printf("p_int : %d\n" , &p_int[2]);
	p_char = (char*)malloc(20);
	printf("p_char  : %d\n" , &p_char[0]);
	p_char[0] =200;
	printf("p_char  : %d\n" , &p_char[1]);
	printf("p_char  : %d\n" , &p_char[2]);
	printf("p_char  : %d\n" , &p_char[3]);
	p_double = (double*)malloc(40);
	printf("p_double  : %d\n" , &p_double[0]);
	p_double[0] =200;
	printf("p_double  : %d\n" , &p_double[1]);
	printf("p_double  : %d\n" , &p_double[2]);
	printf("p_double  : %d\n" , &p_double[3]);
	//p_int = malloc(20); // 자동형변환을 해준다.
}