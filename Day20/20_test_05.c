#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strcpy_s(), strlen()
void main(){
	char name[4] = "aaa";  // 문자열은 젤마지막에 \0 가 추가된다
	char name2[10] = "ㄱㄱㄱ"; // 원칙적으로는 한글은 2byte
	char name3[10];
	char t_name[100];
	int len;
	char*p_name;
	//name3 = name; // 문자열은 단순대입 = 이 불가능하다 즉, 함수를 사용해야된다.
	strcpy_s(name3,10, name);
	//printf("%s\n" , name3);

	strcpy_s(name3,10, name2);
	//printf("%s\n" , name3);

	printf("이름을 입력하세요 >> "); // 김만수
	scanf_s("%s" , t_name, 100); // scanf_s() ==> 배열에 입력받을때는 크기를 넣어줘야한다.
	len = strlen(t_name);
	p_name = (char*)malloc(len + 1);
	strcpy_s(p_name,len+1,t_name);
	printf("이름 : %s\n", p_name);

}