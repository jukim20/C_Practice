#include <stdio.h>
void main(){
	// ����ȯ(casting) ==> �ٸ��ڷ������� ��ȯ�� �����ϴ�.
	printf("��� >> %f", (30 + 41 + 53) /3.0); printf("\n"); 
	//  124 ==> (124.0 / 3.0)
	// ���� �ڷ��������� ������ �����ϴ�.
	// ����ȯ ���� ==> 1. �ڵ�����ȯ 2. ��������ȯ
	// 1) �ڵ�����ȯ ==> ��Ȳ�� ���� �����Ϸ��� �ڵ����� ���� �ٲ��ش�.
	//		�Ǽ��� ������ ������ �ϸ� ������ �Ǽ��� ��ȯ��Ų��.
	//   printf("��� >> %f", (30 + 41 + 53) /3.0); printf("\n");
	//   
	// 2) ���� ����ȯ ==> (�ٲٰ������ڷ���)��
	printf("%f" , 10  / (float)3); printf("\n");

	// �Ҽ��� �ڸ����� ==> "%(.���ϴ��ڸ���)f 
	printf("%.2f" , 10  / (float)3); printf("\n");
	printf("%.10f" , 10  / (float)3); printf("\n");

}