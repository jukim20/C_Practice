#include <stdio.h>
// for ��
// 1. for ==> Ű����
// 2. ()  ==> ���� ==> ������ true �̸� ���๮����
// 3. {}  ==> ���๮ ==> ���๮ ������ ==> �������� �̵��Ѵ�.
// ������ �������ϴ� ���ٿ� �� �������ִ�.
// (1.�ʱ��; 2.���ǽ�; 3.������)   ==> �����ĸ� ; �� ����.
void main(){
	int x = 0; int y = 0; int speed = 0;  int des_x  = 10, 
		int des_y = 7; int max_speed = 3; int sel; int direction = 0; //( �� =0 �� =1 �� =2 �� =3)
	int i = 0; 
	int count = 0; // 1.�ʱ��
	while(count < 10){ // 2. ���ǽ�
		printf("%d : �ݺ�", count);printf("\n");
		count += 1; //3. ������ 
	}
	printf("==========================================");printf("\n");
	for(i = 0; i < 10 ; i += 1){
		printf("%d : �ݺ�", i);printf("\n");
	}
	while(sel != 5){
		printf(" ====== ��� ���� ======= ");printf("\n");
		printf("������ : %d , %d" , des_x , des_y);printf("\n");
		printf(" 1. �ӵ�");printf("\n");
		printf(" 2. ����");printf("\n");
		printf(" 3. ��ȸ��");printf("\n");
		printf(" 4. ��ȸ��");printf("\n");
		printf(" 5. ����");printf("\n");
		printf("��ġ : %d , %d , �ӵ� : %d", x , y , speed);
	}
}