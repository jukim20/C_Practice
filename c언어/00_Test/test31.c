#include <stdio.h>
#include <string.h>
// 구조체 (struct)
/*
	1. 사용자 정의 자료형 
	     1) 기본자료형(int 4 , char 1,double 8, long 4, float 4)
	2. 정의하는법 
		struct 이름{};
	3. 선언하는법
		struct 자료형이름 + 변수;
	4. 사용하는법
		변수.내부변수  (.)dot 으로 내부에 접근한다.
*/
struct Person{
	char name[20];  // 20
	int age;  // 4
};
void main(){
	struct Person p1;
	int arr[4]; // int,int,int,int 
	//p1 ==> struct Person;
	//p1.name ==> char[20];
	//p1.age ==> int 
	// p1.name = "홍길동"; char[] 은 단순대입(=)이 안된다.
	strcpy(p1.name , "홍길동");
	p1.age = 10;
//	printf("%d\n", sizeof(struct Person));  // 24
//	printf("%d\n", sizeof(long));  // 4
	printf("%s\n" , p1.name);
	printf("%d\n" , p1.age);

}