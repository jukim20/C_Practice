#include <stdio.h>
#include <string.h>
#include <stdlib.h> // atoi , itoa 
	// ����          ==> strlen()    
	// ����          ==> strcpy_s()	
	// �ڸ���		 ==> strtok_s() // temp1 = strtok_s(scores," ",&temp2);// �ֵ���ǥ������ ���ڸ� �������� �߶� temp1 , scores ������ �������� temp2������
	// ���ڸ� ������  ==> atoi()	    // ���� = atoi(����);  // ���ڸ� ������ 
	// ������ ���ڷ�  ==> itoa()     // itoa(n_total,c_total,10);  // ����, ����, ����(10)
	// ��          ==>strcmp()
	// �̾� �ٿ��ֱ�  ==> strcat_s() // (����, ũ��, �߰��ҳ���)
void main(){	
	// 1. ���� �ڸ��� �̾�ٿ��ֱ� 
	char data[100] = "100 200 300"; // "��ö�� 100 10001;�踸�� 200 10002;�̿��� 20 10003;
	char temp_data1[100]; // ���� �����
	char* temp_f1;
	char* temp_e2;  // �ڸ��� ������ �����
	int arr[100];  // ���ڷ� ������ ����� 
	int count = 0; // �ε��� üũ��
	int i;
	char temp_s1[100];
	strcpy_s(temp_data1, sizeof(temp_data1), data); //�ϴ� ���� ����
	temp_f1 = strtok_s(temp_data1, " ", &temp_e2); // �ϳ��� �����߶󳽴�.
	while(temp_f1){ // ������ ������ ����
		//printf("%s\n" , temp_f1);
		arr[count] = atoi(temp_f1); // ����ȯ�� arr�� ����
		temp_f1 = strtok_s(temp_e2," ",&temp_e2);		
		count += 1;
	}
	for(i = 0; i < count; i++){
		printf("%d\n" , arr[i]);
	}
	// ���⼭ ���� 
	count -= 1; // �ǵڿ� ����
	strcpy_s(temp_data1 ,sizeof(temp_data1),""); // �ʱ�ȭ
	for(i = 0; i < count; i++){
		itoa(arr[i] , temp_s1 , 10); // itoa ==> ���� , ���� , ����(10)
		strcat_s(temp_data1, sizeof(temp_s1), temp_s1); // �̾� �ٿ��ֱ� 
	}
	printf("%s\n" ,temp_data1); // "100 200";
	strcpy_s(data ,sizeof(data),temp_data1); // ���� ����

	printf("�� >> %d\n" , strcmp("aa", "bb"));
	printf("�� >> %d\n" , strcmp("bb", "aa"));
	printf("�� >> %d\n" , strcmp("aa", "aa"));
}