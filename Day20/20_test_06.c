#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h> // len , cpy 
void main(){
	// ����          ==> strlen()    
	// ����          ==> strcpy_s()	
	// �߸���		 ==> strtok_s() // temp1 = strtok_s(scores," ",&temp2);
									// �ֵ���ǥ������ ���ڸ� �������� �߶� temp1 , scores ������ �������� temp2������
	// ���ڸ� ������  ==> atoi()	    // ���� = atoi(����);  // ���ڸ� ������ 
	// ������ ���ڷ�  ==> itoa()     // itoa(n_total,c_total,10);  // ����, ����, ����(10)
	// ��          ==>strcmp()
	// �̾� �ٿ��ֱ�  ==> strcat_s()
	char scores[200] = "100 200 300"; // ���� ����Ͻÿ�~  ==> �ٽ� ���� ���� 
	int i;
	char * temp2;
	char * temp1;
	int num[3] ={0};
	char c_total[200];
	int n_total = 0;
	printf("scores ==> %s\n", scores);	
	temp1 = strtok_s(scores," ",&temp2); 
	printf("%s\n", temp2);
	num[0] = atoi(temp1);  
	printf("itoa >> %d\n", num[0]);
	temp1 = strtok_s(temp2," ",&temp2);
	num[1] = atoi(temp1);
	printf("itoa >> %d\n", num[1]);
	num[2] = atoi(temp2);
	printf("itoa >> %d\n", num[2]);
	n_total =  num[0] + num[1] + num[2];
	printf("total >> %d\n",n_total);
	itoa(n_total,c_total,10); 
	strcpy_s(scores, 200, c_total);
	printf("scores ==> %s\n", scores);
	
	
}	