#include <stdio.h>

void main() {
	int arr[5];  // 20 byte
	int *p;  

	p = &arr[0];  // 1번째 주소 (index 0) 를 p에게 넘김

	p[0] = 100;  // arr[0] 에 강제로 100을 집어넣어짐
	printf("%d\n", arr[0]);
	p[1] = 200;  // arr[1] 에 강제로 200을 집어넣어짐
	printf("%d\n", arr[1]);  


	malloc(20); 


}