#include <stdio.h>
// ��� �Է� ���� ������ ���ǹ� �ݺ��� �迭 //(�ڹ� ���̽� c++ c#)
// �Լ� ������ �����Ҵ� ����ü ���������
void main(){
	//�ݺ��� ==> 0~20���� ¦���� ��
	//�迭 ==> 1. �ε����� ��ã�� 2. ������ �ε��� ã�� 3. ��ȯ  4. ¦������ , ��������  5. ����ū��ã��
	int arr[5] = {10, -2 , 30, 52, -40};
	int index; int value; int i; int index1 , index2; int temp; int even_count; int minus_count; int max_value;
	//�ε��� 
	printf("�ε����� �Է��ϼ��� >> "); printf("\n");
	scanf("%d" , &index);
	printf("%d" , arr[index]); printf("\n");
	//��
	printf("���� �Է��ϼ��� >> "); printf("\n");
	scanf("%d" , &value); 
	// �ʱ���� ó���� �ѹ��� �۵� // ���ǽ� ==> ���๮ ==> ������ ==> ���ǽ� ==> ���๮ ==> ������ 
	for(i = 0; i < 5; i++){ // 1.�ʱ�� // 2. ���ǽ� // 3. ������ (i++) ==> (i+=1) ==> (i = i + 1)
		if(value == arr[i]){
			printf("%d", i); printf("\n");
		}
	}
	//��ȯ
	printf("�ε��� 1 , 2 �� �Է��ϼ��� >> "); printf("\n");
	scanf("%d", &index1);
	scanf("%d", &index2);
	temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
	for(i = 0; i < 5; i++){
		printf("%d" , arr[i]);  printf("\n");
	}
}