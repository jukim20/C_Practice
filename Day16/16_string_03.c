#include <stdio.h>
#include <string.h>  //strcpy , strlen , strcmp
void main(){
	//1. strcpy (복사)//2. strlen (길이)//3. strcmp (비교)
	char name1[] = "aaa";  // 크기를 자동으로 계산해준다.(4byte) aaa + \0
	char name2[] = "bbb";
	int len = 0;
	//strcpy(name2 , name1);
	strcpy_s(name2, 4, name1); 
	printf("%s\n" , name2);
	len = strlen(name2);
	printf("%d\n" , len);

}