#include <stdio.h>

void main(){
	// ���� 2) n , x , y �� 50 , 3 , 4  �� �Է¹ް� x y �� ������� n �̸����� ���
	// ��) 50 , 3 , 4   ==>  12 , 24 , 36 , 48
	// ��) 100 , 3 , 5  ==>  15 , 30 , 45 , 60 ,75 , 90
	int n , x , y;  int count = 0; int xy = 0; int result = 0;
	printf("n , x , y �� �Է��ϼ��� >> ");printf("\n");
	scanf("%d", &n);
	scanf("%d", &x);
	scanf("%d", &y);
	xy = x * y;
	result = xy;
	while(count < n){
		if(count == result){
			printf("����� : %d" , count);printf("\n");
			result += xy;
		}
		count += 1;
	}
}