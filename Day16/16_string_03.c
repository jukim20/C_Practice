#include <stdio.h>
#include <string.h>  //strcpy , strlen , strcmp
void main(){
	//1. strcpy (����)//2. strlen (����)//3. strcmp (��)
	char name1[] = "aaa";  // ũ�⸦ �ڵ����� ������ش�.(4byte) aaa + \0
	char name2[] = "bbb";
	int len = 0;
	//strcpy(name2 , name1);
	strcpy_s(name2, 4, name1); 
	printf("%s\n" , name2);
	len = strlen(name2);
	printf("%d\n" , len);

}