#include <stdio.h>
// for ��
// 1. for ==> Ű����
// 2. ()  ==> ���� ==> ������ true �̸� ���๮����
// 3. {}  ==> ���๮ ==> ���๮ ������ ==> �������� �̵��Ѵ�.
// ������ �������ϴ� ���ٿ� �� �������ִ�.
// (1.�ʱ��; 2.���ǽ�; 3.������)   ==> �����ĸ� ; �� ����.
void main(){
	int x = 0; int y = 0; int speed = 0;  int des_x  = 10;
		int des_y = 7; int max_speed = 3; int sel = 0; int direction = 0; //( �� =0 �� =1 �� =2 �� =3)
	while(sel != 5){
		printf(" ====== ��� ���� ======= ");printf("\n");
		printf("������ : %d , %d" , des_x , des_y);printf("\n");
		printf(" 1. �ӵ�");printf("\n");
		printf(" 2. ����");printf("\n");
		printf(" 3. ��ȸ��");printf("\n");
		printf(" 4. ��ȸ��");printf("\n");
		printf(" 5. ����");printf("\n");
		printf("��ġ : %d , %d , �ӵ� : %d , ���� : %d", x , y , speed ,direction );
		printf(" ��ȣ�� �Է��ϼ��� >>> ");
		scanf_s("%d" , &sel);
		if (sel == 1){}
	}
}