#include <stdio.h>
void main(){
	// �������� ���α׷�
	int test[100];int number[100];
	int count = 0; int i; int sel = 0; int in_score; int remove;
	//int score[] =  {20,      3,   46,   10,   55,    2};
	//int number[] = {5001, 5002, 5003, 5004, 5005, 5006};
	while(1){ // 1�� true (��) �̱⶧���� ���ѹݺ��ȴ�. break�� ���ü��ִ�.
		printf("�������� ���α׷�\n");
		printf("1.�߰�\n");
		printf("2.����\n");
		printf("3.��ȸ\n");
		printf("��ȣ�� �Է��ϼ��� >>> ");
		scanf_s("%d",&sel);
		if(sel == 1){
			printf("������ �Է��ϼ��� >> ");
			scanf_s("%d" , &in_score);
			test[count] = in_score;
			number[count] = 5001 + count;
			count += 1;
		}
		else if(sel == 2){
			printf("������ ��ȣ�� �Է��ϼ��� >>");
			scanf_s("%d"  , &remove);
			for(i = remove; i< count - 1 ; i++){
				test[i] = test[i + 1];
				number[i] = number[i + 1];			
			}	
			count -=1;
		}
		else if(sel == 3){
			for(i = 0; i < count ; i++){
				printf("��ȣ : %d" , number[i]);
				printf(", ���� : %d\n" , test[i]);
			}
		}		
	}	
}