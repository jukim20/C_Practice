#include <stdio.h>
#include <stdlib.h> // malloc(); 
// malloc Ư¡
// 1) <stdlib.h> ����� �߰��ؾ� ��밡��
// 2) ������(ũ��)�� ���� ����ؼ� �Ҵ�
// 3) ����� ������� ���� <==> �迭���� ����ū���� 
void main(){
	int arr[5];
	int a;//4
	char c; //1
	float f;  //4
	double d;  //8
	int temp = 5;
	// sizeof(����) ==> ������ ũ�⸦ �˷��ش�
	printf("arr ũ�� : %d \n", sizeof(arr));
	printf("int ũ�� : %d \n", sizeof(int));
	printf("a ũ�� : %d \n", sizeof(a));
	printf("f ũ�� : %d \n", sizeof(f));
	printf("d ũ�� : %d \n", sizeof(d));
	printf("&a : %d\n" , &a);
	printf("&arr[0] : %d\n" , &arr[0]);
	printf("&arr[1] : %d\n" , &arr[1]);

	malloc(20);
	malloc(sizeof(int) * 5);
	printf("�迭�� ũ�⸦ �Է��ϼ��� >> ");
	scanf_s("%d" , &temp);
	malloc(temp);
}