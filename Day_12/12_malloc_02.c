#include <stdio.h>
#include <stdlib.h> // malloc(); 
// malloc Ư¡
// 1) <stdlib.h> ����� �߰��ؾ� ��밡��
// 2) ������(ũ��)�� ���� ����ؼ� �Ҵ�
// 3) ����� ������� ���� <==> �迭���� ����ū���� 
// 4) �����͸� ����ؼ� �ּҸ� �Ѱ�����Ѵ�.
// 5) �����ʹ� �´� �ڷ����� ����ؾ��Ѵ�.
// 6) ������ ���������� ���α׷��� �����Ҷ����� �޸𸮸� ����Ѵ�.
void main(){
	int temp;
	int*p_int; // 4byte  // �鸸���� ==> 20�������� ��Ʈ�������
	char*p_char; // 4byte
	double* p_double; // 4byte
	p_int = (int*)malloc(20);  // ����ȯ
	printf("p_int : %d\n" , &p_int[0]);
	p_int[0] = 200;
	printf("p_int : %d\n" , &p_int[1]);
	printf("p_int : %d\n" , &p_int[2]);
	p_char = (char*)malloc(20);
	printf("p_char  : %d\n" , &p_char[0]);
	p_char[0] =200;
	printf("p_char  : %d\n" , &p_char[1]);
	printf("p_char  : %d\n" , &p_char[2]);
	printf("p_char  : %d\n" , &p_char[3]);
	p_double = (double*)malloc(40);
	printf("p_double  : %d\n" , &p_double[0]);
	p_double[0] =200;
	printf("p_double  : %d\n" , &p_double[1]);
	printf("p_double  : %d\n" , &p_double[2]);
	printf("p_double  : %d\n" , &p_double[3]);
	//p_int = malloc(20); // �ڵ�����ȯ�� ���ش�.
}