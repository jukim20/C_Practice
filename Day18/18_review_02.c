#include <stdio.h>

void test(int a) {
	// �Լ� 
	printf("�Լ� a�� �ּ� %d\n", &a);
	a = 300;
}

void main() {
	int a = 20;
	printf("a >> %d\n", a); // 20
	test(a);

	printf("a >> %d\n", a); // �ȹٲ�
	// main�� ���� ����ǰ� 20 ����
	// test�� ����ǰ� �ٸ� ���� 20 ����. �̸��� ���� ���� �ٸ� �ּҿ� �����.

}