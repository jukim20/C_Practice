#include <stdio.h>

void main() {
	int a;
	int* p;  // �ּҸ� ���� �� �ִ�.
	int b; 
	a = 100;
	b = a;  // �Ϲ� ����

	// p = a; // ������ // ���� ������ �� ����. �ּҸ� ���� ����.

	// ���� ��� :
	p = &a;  // p�� a�� �� (100)�� �ּҸ� ������. 
	// p[0] == a;

	p[0] = 200;  // ������ a�� ���� �ּҿ� 100�� �������� 200�� ��. 



}