#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h> // len , cpy 
void main(){
	// 길이          ==> strlen()    
	// 복사          ==> strcpy_s()	
	// 잘르기		 ==> strtok_s() // temp1 = strtok_s(scores," ",&temp2);
									// 쌍따옴표사이의 문자를 기준으로 잘라서 temp1 , scores 에저장 나머지는 temp2에저장
	// 문자를 정수로  ==> atoi()	    // 정수 = atoi(문자);  // 문자를 정수로 
	// 정수를 문자로  ==> itoa()     // itoa(n_total,c_total,10);  // 정수, 문자, 진수(10)
	// 비교          ==>strcmp()
	// 이어 붙여넣기  ==> strcat_s()
	char scores[200] = "100 200 300"; // 합을 출력하시요~  ==> 다시 합을 저장 
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