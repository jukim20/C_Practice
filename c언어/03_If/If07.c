#include <stdio.h>
/*   # if , else if , else ��		
		1. if ���� ������ �߰���  �ʿ��Ҷ� ����Ѵ�.
		2. �ܵ����� ���Ұ����ϴ�.
		3. ���๮�� �Ѱ����� ����ȴ�. 
*/
void main(){
	//���� 1) ���� �µ��� �Է¹ް� ������
	int water;
	water = 100;
	if(water >100){
		printf("��ü\n");
	}
	else if(water >70){
		printf("�̴߰�\n");
	}
	else if(water >30){
		printf("�������ϴ�\n");
	}
	else if(water >0){
		printf("������\n");
	}
	else {
		printf("����\n");
	}
}