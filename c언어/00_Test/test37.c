/*
 1. ���� ==> �ڷᱸ�� ==> ����, �迭[���], �����޸� �迭[����] , 
								2�����迭[���] , 2���������޸� �迭[����]
 2. ���� ==> �˰��� ==> (operator , if , for)
 3. ���� ==> (����ü)(�Լ�)
 4. ������ ==> �����޸� , �Լ� 
 ��ü���� ==> cpp , c# , java , python
*/
#include <stdio.h>
#include <stdlib.h>// malloc
#include <string.h>// strlen
char** dma_names(int st_num){
	char** pp_names = (char**)malloc(sizeof(char*) * st_num);
	return pp_names;
}
int** dma_scores(int st_num){
	int i;int** pp_scores = (int**)malloc(sizeof(int*) * st_num);
	for( i=0; i < st_num; i++){
		pp_scores[i] = (int*)malloc(sizeof(int) * st_num);
	}
	return pp_scores;
}
void set_info(char ** names , int ** scores , int index){ 
	char buffer[200]; int len;
	printf("%d�� �̸��� �Է��ϼ��� >>> " , index);
	scanf("%s" , buffer);
	len = strlen(buffer);
	names[index]  = (char*)malloc(len +1);
	strcpy(names[index] , buffer);
	printf("%d�� ������ �Է��ϼ��� >>> " , index);
	scanf("%d" , &scores[index]);
}
void main(){
	//�˰��� ==>  1. ���������� 
	//			   2. �� �ٿ���� 
	//             3. ATM
	//			   4. �ζ�
	//			   5. ����
	//			   6. �����̵�
	//             7. ���ھ߱����� 
	//			   8. ��Ʈ���� , �ִ��� , ü��
	char** names;int** scores;int st_size;int select = 0;int index = 0;
	printf("�л����� �Է��ϼ��� >>> ");
	scanf("%d" , &st_size);  //3
	names = dma_names(st_size); // �л� ����ŭ �����Ҵ�.
	scores = dma_scores(st_size);
	while(select != 5){
		printf("** �������� ���α׷� **\n");
		printf("1. ����\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("4. ���\n");
		printf("5. ����\n");
		printf("��ȣ�� �Է��ϼ��� (1~5) >>>> ");
		scanf("%d" , &select);
		if(select ==1){
			set_info(names , scores , index);
			index += 1;
		}
		if(select ==4){
		}
	}

}