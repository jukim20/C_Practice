#include <stdio.h>
#include <stdlib.h> // malloc(); 
// malloc Ư¡
// 1) <stdlib.h> ����� �߰��ؾ� ��밡��
// 2) ������(ũ��)�� ���� ����ؼ� �Ҵ�
// 3) ����� ������� ���� <==> �迭���� ����ū���� 
// 4) �����͸� ����ؼ� �ּҸ� �Ѱ�����Ѵ�.
// 5) �����ʹ� �´� �ڷ����� ����ؾ��Ѵ�.
// 6) ������ ���������� ���α׷��� �����Ҷ����� �޸𸮸� ����Ѵ�.
void test(){
	int arr[5];
	int*p1 = (int*)malloc(20);
	free(p1);
}
void main(){
	//test();
	//���� 1) �л����� �Է¹ް� �л� ����ŭ 10 �� �����ϰ� ��� 
	int arr[10];
	int st_size;
	int i;
	int* p1;
	//while(1){
	//	printf("����� �л����� �Է��ϼ��� >> ");
	//	scanf_s("%d" , &st_size);
	//	if (st_size > 10){
	//		printf("10�̻��� �Է��Ҽ������ϴ�\n");
	//		break;// �ݺ��� ���� ����
	//	}
	//	for(i = 0; i < st_size; i++){
	//		arr[i] = 10;
	//		printf("%d\n" , arr[i]);
	//	}
	//	break;
	//}
	while(1){
		printf("����� �л����� �Է��ϼ��� >> ");
		scanf_s("%d" , &st_size);
		p1 = (int*)malloc(sizeof(int) * st_size);
		for(i = 0; i < st_size; i++){
			p1[i] = 10;
			printf("%d\n" , p1[i]);
		}
		break;
	}
	free(p1);
}