#include <stdio.h>
#include <stdlib.h>  // rand();
#include <time.h>
void main(){
	int coin;
	int count = 10;
	int win = 0;
	int coins = 0;
	int me = 0;
	srand(  time(0)  ); // �����õ��ʱ�ȭ
	printf("%d\n" , rand());
	printf("%d\n" , rand());
	printf("%d\n" , rand() % 3 );  // 0 , 1 , 2
	coin = rand() % 2;  // 0 , 1
	if(coin == 0){
		printf("��\n");
	}
	if(coin == 1){
		printf("��\n");
	}
	// ���� 1) ������ �յڸ� ���ߴ� ������ ��������. (10�� ������ ����Ƚ�� ���)
	// ���� 2) (Ȧ¦)(����10���߿� ��� ����� Ȧ¦�� ���ߴ°���)
	while(count > 0){
		count--; // count = count - 1 ;  count -= 1
		/*count -= 1;
		count = count - 1;*/
		coins = rand()% 10 ;
		printf(" Ȧ(0) , ¦(1) �� �Է��ϼ��� >>> ");
		scanf("%d" , &me);
		if(coins % 2 == 0){
			if(me == 0){
				win++;
				printf("����\n");
			}
		}
		if(coins % 2 == 1){
			if(me == 1){
				win++;
				printf("����\n");
			}
		}	
	}
	printf("win >>>  %d\n" , win);
	// ���ٿ����  ( ai == 0~99 ������ ���ڸ� �������� �����Ѵ�) 
	//  me  >>> �Է� 0~99 ������ ���ڸ� �Է¹ް� ai �� ���ؼ� ũ�� �۴� ��� .. 
	//	���⶧���� �ݺ� , Ʋ��Ƚ�� ��� 
	// ��) ai = 50 ,  30 ==> �۴� , 70 ==> ũ�� , 50 ==> ����  , Ʋ��Ƚ�� 
}