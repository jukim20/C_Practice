#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h> // len , cpy 
struct Student{char name1[100];char* name2;int score;};
void main(){
	// ����          ==> strlen()    
	// ����          ==> strcpy_s()	
	// �߸���		 ==> strtok_s() // temp1 = strtok_s(scores," ",&temp2);
	// �ֵ���ǥ������ ���ڸ� �������� �߶� temp1 , scores ������ �������� temp2������
	// ���ڸ� ������  ==> atoi()	    // ���� = atoi(����);  // ���ڸ� ������ 
	// ������ ���ڷ�  ==> itoa()     // itoa(n_total,c_total,10);  // ����, ����, ����(10)
	// ��          ==>strcmp()
	// �̾� �ٿ��ֱ�  ==> strcat_s()
	char data[200] = "��ö�� 100;�踸�� 80;�̿��� 54";
	//��ö�� 100
	//�踸�� 80
	//�̿��� 54 
	struct Student s1;
	char temp[200];
	char* temp_2;
	char* temp_1;
	temp_1 = strtok_s(data, ";", &temp_2);
	printf("%s\n" , temp_1);
	strtok_s(temp_1," ",&temp_2);
	printf("%s\n" , temp_1);
	printf("%s\n" , temp_2);
	strcpy_s(s1.name1, 100, temp_1);
	s1.score = atoi(temp_2);
	printf("%s , %d\n", s1.name1 , s1.score);
	/*
	s1.name;
	s1.score;
	struct Student s_arr[3];
	struct Student* p_s;
	*/
	struct Student* p_s;
}	