#include <stdio.h>
void main(){
	// ���� , ������ , if , for 
	int a = 10;  // ��==> a
	int b = 20;  // ��==> b == 200;
	int arr[5];  // ��==100��==200������
	// arr[0] , arr[1] , arr[2], arr[3], arr[4]
	int i ;
	a = 10;
	a = 20;
	arr[0] = 100;
	arr[1] = 200;
	arr[2] = 300;
	arr[3] = 400;
	arr[4] = 500;
	b = 200;	
	printf("%d\n" , arr[0]);
	printf("%d\n" , arr[1]);
	printf("%d\n" , arr[2]);
	printf("%d\n" , arr[3]);
	printf("%d\n" , arr[4]);
	for(i = 0; i < 5; i++){
		printf("%d\n" , arr[i]);
	}
	//���� 1) for ���� �̿��ؼ� �迭���� ��簪�� ���Ѱ� ���
	//���� 2) ����ū��ã��
}