#include <stdio.h>

void main()
{
	//���� 1) ���ΰ� 10 , ���� �� 8 �� �簢�� ���̸� ���غ�����
	int width = 10;
	int height = 8;
	int score1 ,score2 ,score3;
	int i = 0 ;
	int total;
	printf("�簢������: %d\n" , (width * height) );
	//���� 2) �� �簢���� ���̸� ���� �ﰢ���� ���غ�����.
	printf("�ﰢ������: %d\n" , (width * height)/2 );
	//���� 1) ���� 3���� �Է¹ް� ����� 60 �̻��̸� �հ�	
	printf("���� 3���� �Է��ϼ��� >>> ");
	scanf("%d %d %d" , &score1 , &score2 , &score3);
	
	if((score1 + score2 + score3)/3  >= 60){
		printf("�հ�\n");
	}
	//���� 1) 0~20���� ����غ�����.
	i = 0;
	while(i < 20){
		printf("%d\n" , i);
		i++;
	}
	for(i = 0; i < 20; i++)
	{
		printf("%d\n" , i);
	}
	//���� 2) 0~20�߿��� ¦���� ���
	i = 0;
	while(i < 20){ // i == 0,1,2,3,4,5,6,7,8,9,10...  20
		if(i % 2 == 0){
			printf("%d\n" , i);
		}
		i++;
	}

	for(i = 0; i < 20; i++)
	{
		if(i % 2 == 0){
			printf("%d\n" , i);
		}
	}
	//���� 3) 0~20�߿��� Ȧ���� �� ���Ѱ� ���
	i = 0;
	total = 0;
	while(i < 20){ // i == 0,1,2,3,4,5,6,7,8,9,10...  20
		if(i % 2 == 1){
			total += i;  // total = total + i ;   
		}
		i++;
	}
	for(i = 0; i < 20; i++)
	{
		if(i % 2 == 1){
			total += i;  // total = total + i ;   
		}
	}
	printf("%d\n" , total);
}