#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcpy_s(), strlen()
void main(){
	char name[4] = "aaa";  // ���ڿ��� ���������� \0 �� �߰��ȴ�
	char name2[10] = "������"; // ��Ģ�����δ� �ѱ��� 2byte
	char name3[10];
	char t_name[100];
	int len;
	char*p_name;
	//name3 = name; // ���ڿ��� �ܼ����� = �� �Ұ����ϴ� ��, �Լ��� ����ؾߵȴ�.
	strcpy_s(name3,10, name);
	//printf("%s\n" , name3);

	strcpy_s(name3,10, name2);
	//printf("%s\n" , name3);

	printf("�̸��� �Է��ϼ��� >> "); // �踸��
	scanf_s("%s" , t_name, 100); // scanf_s() ==> �迭�� �Է¹������� ũ�⸦ �־�����Ѵ�.
	len = strlen(t_name);
	p_name = (char*)malloc(len + 1);
	strcpy_s(p_name,len+1,t_name);
	printf("�̸� : %s\n", p_name);

}