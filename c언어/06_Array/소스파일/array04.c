# include <stdio.h>
# include <stdlib.h>
# include <time.h>
void main(){
	int score = 0;
	int scores[5];
	int i;
	srand(time(0));
	// ������ �ϳ� �������� �Է¹ް� 60�̻��̸� �հݺ��հ����
	/*score = rand() % 101;
	if(score >60){printf("�հ�\n");}*/
	/*scores[0] = rand() % 101;
	scores[1] = rand() % 101;
	scores[2] = rand() % 101;
	scores[3] = rand() % 101;
	scores[4] = rand() % 101;
	printf("%d\n" , scores[0]);
	printf("%d\n" , scores[1]);
	printf("%d\n" , scores[2]);
	printf("%d\n" , scores[3]);
	printf("%d\n" , scores[4]);*/
	for(i = 0; i < 5; i++){
		scores[i] = rand() % 101;
	}
	for(i = 0; i < 5; i++){
		printf("%d\t" , scores[i]);
	}
	printf("\n");
	//���� 1) ������ 50 ���� �̻��� �л��� �ٽ� ����غ�����.
	for( i= 0; i < 5; i++){
		if(scores[i] >50){
			printf("%d\t" , scores[i]);
		}
	}
	printf("\n");
}