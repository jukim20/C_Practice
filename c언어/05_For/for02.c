#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main(){
	int money = 50000;
	int number = 0;
	int count = 3;
	while(money > 5000){
		printf(" *** ȫ����� ***\n");
		printf(" 1. ¥���   5000��\n");
		printf(" 2. «��		6000��\n");
		printf(" 3. ������   12000��\n");
		printf("��ȣ�� �Է��ϼ��� >>> ");
		scanf("%d" , &number);
		if(number == 1 ){
			if(count > 0){
				money = money - 5000;
				count = count - 1;
			}
			else {
				printf("¥����� �ٶ��������ϴ�\n");
			}
		}
		printf("�ܾ� : %d\n"  , money);
	}
	printf("���α׷�����\n");
	// for������ �ٲ㺸��
	//�߰����� ¥����� 3�׸��ۿ� �ȳ��Ҵ�.
}