#include <stdio.h>
#include <string.h>
#include <stdlib.h> // atoi , itoa 
	// 길이          ==> strlen()    
	// 복사          ==> strcpy_s()	
	// 자르기		 ==> strtok_s() // temp1 = strtok_s(scores," ",&temp2);// 쌍따옴표사이의 문자를 기준으로 잘라서 temp1 , scores 에저장 나머지는 temp2에저장
	// 문자를 정수로  ==> atoi()	    // 정수 = atoi(문자);  // 문자를 정수로 
	// 정수를 문자로  ==> itoa()     // itoa(n_total,c_total,10);  // 정수, 문자, 진수(10)
	// 비교          ==>strcmp()
	// 이어 붙여넣기  ==> strcat_s() // (원본, 크기, 추가할내용)
void main(){	
	// 1. 문자 자르기 이어붙여넣기 
	char data[100] = "100 200 300"; // "김철수 100 10001;김만수 200 10002;이영희 20 10003;
	char temp_data1[100]; // 원복 복사용
	char* temp_f1;
	char* temp_e2;  // 자를때 나머지 저장용
	int arr[100];  // 숫자로 변경후 저장용 
	int count = 0; // 인덱스 체크용
	int i;
	char temp_s1[100];
	strcpy_s(temp_data1, sizeof(temp_data1), data); //일단 원본 복사
	temp_f1 = strtok_s(temp_data1, " ", &temp_e2); // 하나를 먼저잘라낸다.
	while(temp_f1){ // 내용이 없으면 종료
		//printf("%s\n" , temp_f1);
		arr[count] = atoi(temp_f1); // 형변환후 arr에 저장
		temp_f1 = strtok_s(temp_e2," ",&temp_e2);		
		count += 1;
	}
	for(i = 0; i < count; i++){
		printf("%d\n" , arr[i]);
	}
	// 여기서 삭제 
	count -= 1; // 맨뒤에 삭제
	strcpy_s(temp_data1 ,sizeof(temp_data1),""); // 초기화
	for(i = 0; i < count; i++){
		itoa(arr[i] , temp_s1 , 10); // itoa ==> 정수 , 문자 , 진수(10)
		strcat_s(temp_data1, sizeof(temp_s1), temp_s1); // 이어 붙여넣기 
	}
	printf("%s\n" ,temp_data1); // "100 200";
	strcpy_s(data ,sizeof(data),temp_data1); // 최종 복사

	printf("비교 >> %d\n" , strcmp("aa", "bb"));
	printf("비교 >> %d\n" , strcmp("bb", "aa"));
	printf("비교 >> %d\n" , strcmp("aa", "aa"));
}