#include <stdio.h>
#include <stdlib.h>  // rand()  , srand()
#include <time.h>  // time(0) // ����ð� 
void main(){
	int rand_num; 
	int me = -1;
	srand(time(0));  // �ð��� ��� �ٲ�� ������ �������̺��� �ʱ�ȭ
	/*rand_num = rand();
	printf("%d\n" , rand_num);
	rand_num = rand();
	printf("%d\n" , rand_num);
	rand_num = rand();
	printf("%d\n" , rand_num);*/
	rand_num = rand() % 100; // 0 ~ 99
	//������ ==> ctrl + a , alt + f8
	while(me != rand_num){
		printf("ġƮ : %d\n" , rand_num);
		printf("0~99������ ���ڸ� �Է��ϼ��� >>> ");
		scanf("%d" , &me);
		if (me > rand_num){
			printf("ũ��\n");
		}
		else if(me < rand_num){
			printf("�۴�\n");
		}
		else{
			printf("����\n");
		}
	}
}