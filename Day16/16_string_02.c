#include <stdio.h>

void main(){
	//char name1[6] = "aaaaaa"; 
	// 문자열은 갯수를 확인하기위해서 젤마지막에 "\0" 을 저장해야된다.
	// 저장하고싶은 문자사이즈 보다 +1 로 만들어야된다.
	char name2[6] = "bbbbb";
	char name3[100];
	printf("이름을 입력하세요 >> ");
	//scanf("%s",&name3[0]);
	scanf_s("%s",&name3[0],100); 
	// 개량된 함수 (초과 입력을 막기위해서 메모리사이즈를 알려줘야한다)
	printf("%s\n" , name3);
}