#include <stdio.h>
#include <stdlib.h>
struct Teachers{
	char **pp_names;
	char **pp_address;
	char **pp_subject;
};
struct ScoreManager{
	int kor_arr[10];
	int eng_arr[10];
	int math_arr[10];
	char ** pp_names;
	char **pp_address;
	struct Teachers t_arr[10];
};
int main(){
	int select =0;
	//////////////////////////
	int kor_arr[10];
	int eng_arr[10];
	int math_arr[10];
	char names[10][200];
	char address[10][200];	
	///////////////////////////
	int scores[10][3];
	char names[10][200];
	char address[10][200];
	////////////////////////////
	int*p_kor;
	int*p_eng;
	int*p_math;
	char**pp_names;
	char**pp_address;
	///////////////////////////
	int** pp_scores;
	char **pp_names;
	char**pp_address;
	////////////////////////////
	struct ScoreManager sm1;
	///////////////////////////////
	int index = 0;
	int i;
	while(select != 5){
		printf("** �������� ���α׷� **\n");
		printf("1. ����\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("4. ���\n");
		printf("5. ����\n");
		printf("��ȣ�� �Է��ϼ��� (1~5) >>>> ");
		scanf("%d" , &select);
		if(select ==1){
			printf("���� ������ �Է��ϼ��� >>> ");
			scanf("%d", &kor_arr[index]);
			printf("���� ������ �Է��ϼ��� >>> ");
			scanf("%d", &eng_arr[index]);
			printf("���� ������ �Է��ϼ��� >>> ");
			scanf("%d", &math_arr[index]);
			index += 1;
		}
		if(select ==4){
			for( i = 0; i < index; i++){
				printf("�������� : %d\n" , kor_arr[i]);
				printf("�������� : %d\n" , eng_arr[i]);
				printf("�������� : %d\n" , math_arr[i]);
			}	
		}
	}
}