#include <stdio.h> //  printf()  , scanf()
#include <stdlib.h> // rand()    , srand()
#include <time.h>  //  time(0)
void main()
{
	srand(time(0));  // �����õ� �ʱ�ȭ ==> time(0)
	//���� 1) ������ �Է¹ް� 60�̻� �հ� ���� ���հ� ���
	int score;
	printf("������ �Է��ϼ��� >>> ");
	scanf("%d" , &score);
	if (score >= 60){
		printf("�հ�\n");
	}
	else if (score < 60){
		printf("���հ�\n");
	}
	//���� 1) ���� �µ��� �Է¹ް� ������
	//���� 1) 0~20���� ����غ�����.
	int i;
	for (i = 0; i < 21 ; i++){
		printf("%d\n" , i);
	}
	//���� 2) 0~20�߿��� ¦���� ���
	//���� 3) 0~20�߿��� Ȧ���� �� ���Ѱ� ���
	//���� 4) 0~20�� 4�� ����� ���
	//���� 5) �ܼ��� �Է¹ް� ������ ��� .
	//���� 6) 0~4 ������ �������� ��� , 1~5������ �������� ��� .
	int rand_num = rand()% 5; // 0 ~ 4
	int rand_num2 = rand() % 5 + 1; // 1 ~ 5
}