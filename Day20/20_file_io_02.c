#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
struct Student{
	char * name;
	int score;
	int num;
};
void main(){
	struct Student * p_st = 0; int count= 0; struct Student tt_st;
	int sel; int i; int n; int len;
	char t_name[100]; int t_score; struct Student * t_st = 0;
	char data [100] = "aaa 100;bbb 30;ccc 50;ddd 40";
	char data2[100];
	char data3[100];
	char* tt_data2;
	char* tt_data1;
	int tt_count =0;
	char* tt_name;
	char* tt_score;
	char ttt_score[100];
	while(1){
		system("cls");
		printf("============ 학생리스트 ===========\n");
		for(i = 0; i < count; i++){
			printf("%s\t" , p_st[i].name);
			printf("%d\n" , p_st[i].score);
		}
		printf("===================================\n");
		printf("1.추가(이름,점수)\n");
		printf("2.삭제(이름)\n");
		printf("3.조회(1.이름순 2.성적순 3.번호순)\n");
		printf("4.저장\n");
		printf("5.로드\n");
		printf("번호를 입력하세요 >>\n");
		scanf_s("%d" , &sel);
		if(sel == 1){		
			t_st = p_st;
			p_st = (struct Student*)malloc(sizeof(struct Student) * (count + 1));
			for(i = 0; i < count; i++){
				p_st[i] = t_st[i];
			}
			free(t_st);
			printf("이름을 입력하세요 >> ");
			scanf_s("%s" , t_name , sizeof(data));
			printf("성적을 입력하세요 >> ");
			scanf_s("%d" , &t_score);
			len = strlen(t_name);
			p_st[count].name = (char*)malloc(len + 1);
			strcpy_s(p_st[count].name, len +1, t_name); 
			p_st[count].score = t_score;
			count += 1;
		}
		if (sel == 3){
			system("cls");
			printf("============ 정렬 ===========\n");
			printf("1.성적순서\n");
			printf("2.이름순서\n");
			printf("3.번호순서\n");
			printf("번호를 입력하세요 >>\n");
			scanf_s("%d" , &sel);
			if(sel == 1){
				for(i = 0; i< count; i++){
					for(n = 0; n < count; n++){
						if(p_st[i].score > p_st[n].score){
							tt_st = p_st[i];
							p_st[i] = p_st[n];
							p_st[n] = tt_st;
						}
					}
				}
			}

			if(sel == 2){
				for(i = 0; i< count; i++){
					for(n = 0; n < count; n++){
						if(strcmp(p_st[i].name, p_st[n].name) == -1){
							tt_st = p_st[i];
							p_st[i] = p_st[n];
							p_st[n] = tt_st;
						}
					}
				}
			}
		}
		if (sel == 4){
			strcpy_s(data,sizeof(data),"");
			for(i = 0; i < count; i++){	
				strcat_s(data, sizeof(data), p_st[i].name);		
				strcat_s(data, sizeof(data), " ");
				itoa(p_st[i].score , ttt_score , 10);
				strcat_s(data, sizeof(data), ttt_score);											
				if (i + 1 != count){	
					strcat_s(data, sizeof(data), ";");		
				}
			}
			printf("%s\n" , data);
		}
		if (sel == 5){
			if (p_st){ 			
				for(i = 0; i < count; i++){
					free(p_st[i].name);
				}			
				free(p_st);
			}
			tt_count = 0;
			strcpy_s(data2, sizeof(data), data);
			strcpy_s(data3, sizeof(data), data);
			tt_data1 = strtok_s(data2, ";",  &tt_data2);
			while(tt_data1){		
				tt_data1 = strtok_s(tt_data2, ";",  &tt_data2);				
				tt_count += 1;		
			}
			tt_data1 = strtok_s(data3, ";",  &tt_data2);
			p_st = (struct Student*)malloc(sizeof(struct Student) * (tt_count));
			for(i = 0; i < tt_count; i++){
				tt_name = strtok_s(tt_data1, " ", &tt_score);
				len = strlen(tt_name);
				p_st[i].name = (char*)malloc(len + 1);
				strcpy_s(p_st[i].name, len + 1, tt_name);
				p_st[i].score = atoi(tt_score);	
				tt_data1 = strtok_s(tt_data2, ";",  &tt_data2);			
			}
			count = tt_count;
		}
	}
}



