#include <stdio.h>
#include <stdlib.h>  // 랜덤함수 rand()
#include <time.h>  // srand(현재시간) ==> 랜덤 기준을 현재시간으로 바꿔줌

void main() {
	int num; int count;
	srand(time(0));  // 이걸 추가해야 매번 다른 랜덤값이 출력된다. 
	// 나머지를 사용해서 랜덤 범위값을 설정해줘야한다. 
	
	num = rand() % 2; // 0 ~ 1이 나온다. 
	printf("랜덤값 >> %d", num); printf("\n");

	count = 0;
	while (count <= 50) {
		num = rand() % 10; // 0 ~ 9가 나온다. 
		printf("랜덤값 >> %d", num); printf("\n");
		count += 1;
	}
	// 문제 1) ==> 1 ~ 5 가 나오도록 해보세요
	num = rand() % 5 + 1;
	printf("랜덤값 >> %d", num); printf("\n");

	// 문제 2) ==> -10 ~ 10 사이가 나오도록 해보세요
	num = (rand() % 21) - 10;
	printf("랜덤값 >> %d", num); printf("\n");
		

}

