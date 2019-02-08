#include <stdio.h>

void main(){
	// 문제 2) n , x , y 에 50 , 3 , 4  를 입력받고 x y 의 공배수를 n 미만까지 출력
	// 예) 50 , 3 , 4   ==>  12 , 24 , 36 , 48
	// 예) 100 , 3 , 5  ==>  15 , 30 , 45 , 60 ,75 , 90
	int n , x , y;  int count = 0; int xy = 0; int result = 0;
	printf("n , x , y 를 입력하세요 >> ");printf("\n");
	scanf("%d", &n);
	scanf("%d", &x);
	scanf("%d", &y);
	xy = x * y;
	result = xy;
	while(count < n){
		if(count == result){
			printf("공배수 : %d" , count);printf("\n");
			result += xy;
		}
		count += 1;
	}
}