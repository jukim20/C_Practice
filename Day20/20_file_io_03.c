#include <stdio.h>
//���� ����� ==> io ==> input , output
//���α׷��߿� ����� �����͸� ���Ϸ� ����°� ���Ѵ�.
//1. open  ==> ������ �ҷ��´�
//2. read , write ==> �б� , ����
//   1) ������ �ҷ��� ��带 �����ؾߵȴ�. r , w 
//      r ==> �б�ۿ� �ȵȴ� (����x)
//      w ==> ������ �����Ǳ⶧���� ���� �����Ͱ� �����ȴ�.
//3. close ==> ������ �ݾ��ش�.
void main(){
	FILE * pFile = NULL;
	fopen_s(&pFile, "test01.txt", "w");
	fclose(pFile);
}