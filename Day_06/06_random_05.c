#include <stdio.h>
#include <stdlib.h>  // �����Լ� rand()
#include <time.h>  // srand(����ð�) ==> ���� ������ ����ð����� �ٲ���

void main() {
	int num; int count;
	srand(time(0));  // �̰� �߰��ؾ� �Ź� �ٸ� �������� ��µȴ�. 
	// �������� ����ؼ� ���� �������� ����������Ѵ�. 
	
	num = rand() % 2; // 0 ~ 1�� ���´�. 
	printf("������ >> %d", num); printf("\n");

	count = 0;
	while (count <= 50) {
		num = rand() % 10; // 0 ~ 9�� ���´�. 
		printf("������ >> %d", num); printf("\n");
		count += 1;
	}
	// ���� 1) ==> 1 ~ 5 �� �������� �غ�����
	num = rand() % 5 + 1;
	printf("������ >> %d", num); printf("\n");

	// ���� 2) ==> -10 ~ 10 ���̰� �������� �غ�����
	num = (rand() % 21) - 10;
	printf("������ >> %d", num); printf("\n");
		

}

