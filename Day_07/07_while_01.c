#include <stdio.h>
void main(){
	int sel = 0;int my_money = 1000; int atm_money = 2000;
	int in = 0; int out = 0;
	while(sel != 4){
		printf(" === ATM === ");printf("\n");
		printf("1. �Ա�");printf("\n");
		printf("2. ���");printf("\n");
		printf("3. ��ȸ");printf("\n");
		printf("4. ����");printf("\n");
		printf("��ȣ�� �Է��ϼ��� >> ");printf("\n");
		scanf_s("%d" , &sel);
		if (sel == 1){
			printf("�Ա��� �ݾ��� �Է��ϼ��� >> ");
			scanf_s("%d" , &in);
			atm_money += in;
			my_money -= in;
		}
		if (sel == 2){
			printf("����� �ݾ��� �Է��ϼ��� >> ");
			scanf_s("%d" , &out);
			atm_money -= out;
			my_money += out;
		}
		if (sel == 3){
			printf("�ܾ� >> %d", atm_money);printf("\n");
			printf("���� >> %d", my_money);printf("\n");
		}
	}
}	