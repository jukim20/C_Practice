#include <stdio.h>
#include <string.h>  // strcpy() 문자열 복사 함수

int main(){
	char c1 = 'a';
	char c2[10] = "012345678";// 저장을 배열사이즈 -1 까지밖에 할수없다.
	//문자열은 '\0' 문자가 끝낫음을 표시한다. 기본값으로 저장된다.

	// c2 = "ererer"; 문자열은 대입연산이 불가능하다.
	printf("%s\n" , c2);
	strcpy(c2 , "erererer");
	printf("%s\n" , c2);

	printf("이름을 입력하세요 >>> ");
	strcpy(c2 , "김철수");  // 한글은 2byte
	printf("이름: %s\n" , c2);
	

}