#include <stdio.h>
#include <stdlib.h> // malloc()
#include <string.h> // strcpy_s() // ���ڿ� ����
char** set_name(){
	char **pp_name;char temp_name[100];int count = 3;int name_len;

	pp_name = (char**)malloc(sizeof(char*) * count);
	printf("�̸��� �Է��ϼ��� >>\n");
	scanf_s("%s" , &temp_name[0] , 100); // �迭�� ����� �Է�������Ѵ�.
	name_len = strlen(temp_name);  // ���ڿ��� ���� 
	pp_name[0] = (char*)malloc(name_len + 1);
	strcpy_s(pp_name[0] , name_len + 1 ,  temp_name);

	return pp_name;
}
void main(){
	// 1. �߰�// 2. ����        // 3. ����// 4. ��ȸ// 5. ���� 
	char** pp_name; int* p_score; int count = 3;
	int sel; int temp_score; char temp_name[100];
	int name_len;
	pp_name = set_name();
	//pp_name = (char**)malloc(sizeof(char*) * count);
	//printf("�̸��� �Է��ϼ��� >>\n");
	//scanf_s("%s" , &temp_name[0] , 100); // �迭�� ����� �Է�������Ѵ�.
	//name_len = strlen(temp_name);  // ���ڿ��� ���� 
	//pp_name[0] = (char*)malloc(name_len + 1);
	//strcpy_s(pp_name[0] , name_len + 1 ,  temp_name);
	printf("=========================\n");
	printf("%s\n" , pp_name[0]);
	printf("=========================\n");
	/*while(1){
		printf("1. �߰�\n");
		printf("2. ����\n");
		printf("3. ���\n");
		printf("��ȣ�� �Է��ϼ��� >> \n");
		scanf_s("%d" , &sel);
		if (sel == 1){		
		}
	}*/
}
