#include <stdio.h>
#include <stdlib.h> // malloc() �����Ҵ�
/*
	���α׷��� ==> ����( ���� , ���� )
	// ���� ==> �޸� ==> variable(����) array(�迭),struct(����ü), �����Ҵ� =>������
	// ���� ==> �˰��� ==> oprator(������) , if(���ǹ�) , for(�ݺ���) , 
	// ������ ==> �Լ� , �����Ҵ� 
	// ���� ==> �Լ� ==> pointer(������)
*/
void main(){
	int a;
	int arr[3];
	int size = 0;
	int* p;
	scanf("%d" , &size);
	malloc(size); // ù��° �ּҸ� ��ȯ�Ѵ�. ==> �̸��� ����.
	p = malloc(size);  // �����Ϸ��� ������ ����ȯ�� ���ش�.
	p = (int*)malloc(size); // ù��° �ּҸ� ��ȯ�ϴ�void ���̱⶧���� ���� ����ȯ�� ���ش�.
	free(p);
}