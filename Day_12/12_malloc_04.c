#include <stdio.h>
#include <stdlib.h> // malloc(); 
// malloc Ư¡
// 1) <stdlib.h> ����� �߰��ؾ� ��밡��
// 2) ������(ũ��)�� ���� ����ؼ� �Ҵ�
// 3) ����� ������� ���� <==> �迭���� ����ū���� 
// 4) �����͸� ����ؼ� �ּҸ� �Ѱ�����Ѵ�.
// 5) �����ʹ� �´� �ڷ����� ����ؾ��Ѵ�.
// 6) ������ ���������� ���α׷��� �����Ҷ����� �޸𸮸� ����Ѵ�.
void main(){
	int score_arr[100];
	// �������� ���α׷� 
	// 1. ���
	// 2. ����
	// 3. ��ȸ
	int* p1 = 0;int sel; int temp_score; int count = 0 ; int *p2; int i;
	while(1){
		printf("�����������α׷�\n");
		printf("1. ���\n");
		printf("2. ����\n");
		printf("3. ��ȸ\n");
		printf("4. ����\n"); // ������ ����������� �ٲٴ°�
		printf("��ȣ�� �Է��ϼ��� >> ");
		scanf_s("%d" , &sel);
		if(sel== 1){
			printf("�л������� �Է��ϼ��� >> ");
			scanf_s("%d" , &temp_score);
			p2 = p1;
			p1 = (int*)malloc(sizeof(int) * (count + 1));
			for(i = 0; i < count; i++){
				p1[i] = p2[i];
			}
			p1[count] = temp_score;
			count += 1;
			if(p2 != 0){free(p2);}
		}
		if(sel == 2){}
		if(sel == 3){
			for(i = 0; i < count ; i++){
				printf("%d\n" , p1[i]);
			}
		}
	}
	free(p1);
}