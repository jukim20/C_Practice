#include <stdio.h>
#include <stdlib.h> // malloc(); 
void main(){		
	int * p1; // ����
	int * p2; // ��ȣ 5001 5002 5003
	int* temp_p1;int* temp_p2;
	int sel = 0; int count = 0; int i; int remove_num; int input_num;
	int grade = 0;
	//1. �߰� ==> 100(5001)    ,  200(5002)
	//2. ���� ==> ��ȣ�� ���� (5001)==> 100 ,
	while(1){
		for(i = 0; i < count; i++){
			printf("%d , %d\n" , p1[i] , p2[i]);
		}
		printf("1. �߰�\n");p
		printf("2. ����\n");
		scanf_s("%d" , &sel);
		if(sel == 1){}
			printf("������ ������ �Է��ϼ��� >>> ");
			scanf_s("%d", &grade);

			p2 = p1;
			p1 = (int*)malloc(sizeof(int) * (count + 1));
			
			for(i = 0; i < count; i++){
				p1[i] = p2[i];
			}
			
			p1[count] = num;
			count += 1;
			free(p2);
	
		else if(sel = 2){}

		else {break;};
	}
	free(p1);
	free(p2);
}