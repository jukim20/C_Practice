#include <stdio.h>
#include <stdlib.h> // malloc()
// �迭�� ���� ==> ����� �̸����ؾߵȴ�.
// ������� ==> ����ۿ� �ü�����.
// ��� ==> ���� != ��� ==> �������ʴ¼�
void main(){
	int size = 10;
	//int arr2[size];
	int arr[5];
	int a = 10;
	int stu[10];  // ==> 40
	int st_num =0;
	int* p;  
	char c[5];  // ==> 5
	double d[5];  // ==> 40
	///////////////////////////////////////////////
	a = 20;
	a = 100;
	printf("�л� ���� �Է��ϼ��� >>> ");
	scanf("%d" , &st_num); // 5
	//int st_score[st_num];	
	malloc(st_num);  // st_num �� ũ���� �޸�Ȯ��	
	//1 . �̸��� ���� . �ּҸ� �������ִ�.
	p = malloc(st_num);
	p = (int*)malloc(st_num);
	//2 . ����� ��Ȯ�ϰ� �˷���ߵȴ�.
	//3 . �Լ� �� ��ߵȴ�.
	p = (int*)malloc(4 * st_num);
	p[0] = 10;
	p[1] = 20;
	p[2] = 30;
	p[3] = 40;
	p[4] = 50;
	//p = new int[st_num];	
}