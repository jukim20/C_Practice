#include <stdio.h>

void test(int a) {
	// 함수 
	printf("함수 a의 주소 %d\n", &a);
	a = 300;
}

void main() {
	int a = 20;
	printf("a >> %d\n", a); // 20
	test(a);

	printf("a >> %d\n", a); // 안바뀜
	// main이 먼저 실행되고 20 저장
	// test가 실행되고 다른 곳에 20 저장. 이름만 같지 전혀 다른 주소에 저장됨.

}