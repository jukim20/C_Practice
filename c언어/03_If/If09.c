#include <stdio.h>
void main(){
	int num;
	int my_money = 1000;
	int pw = 1234;
	int input_money;
	printf("**** �ڸ��� ATM ****\n");
	printf("1.�Ա�\n");
	printf("2.���\n");
	printf("��ȣ�� �Է��ϼ��� >> \n");
	scanf("%d" , &num);
	if(num == 1){
		printf("�Ա��� �ݾ��� �Է��ϼ��� >>>\n");
		scanf("%d" , &input_money);
		my_money = my_money + input_money;
		printf("�ܾ��� %d �� �Դϴ�. �̿����ּż� �����մϴ�\n" , my_money);
	}
	if(num == 2){
	}
	//���� ) �� �� ����� �߰��غ�����. �Ա� ��� 	
	//���� ) �߰� ����) pw �߰�
}