#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Person{
	char name[20];  // 20
	int age;  // 4
};
struct Monster{
	int hp;
};
void main(){
	struct Person p1;
	struct Person p_arr[10];
	struct Monster m_arr[100];
	struct Monster*  p;  // ���� ������ ����	
	/*p_arr[0].age = 10;
	strcpy(p_arr[0].name , "ȫ�浿");	
	printf("%s\n" , p_arr[0].name);
	printf("%d\n" , p_arr[0].age);*/
	int stage =0;
	int mon_size =0;
	while(1){
		//printf("���� ���� �Է��ϼ��� >>> ");
		if(stage == 1){
			mon_size = 5;
			for(int i =0; i < mon_size; i++){
				m_arr[i].hp = 100;
			}		
			//p = (struct Monster*)malloc(sizeof(struct Monster) * mon_size);
			for(int i =0; i < mon_size; i++){
				p[i].hp = 100;
			}
		}
		if(stage == 2){
			free(p);
			mon_size = 10;
			//p = (struct Monster*)malloc(sizeof(struct Monster) * mon_size);
		}
	}
	// ����ü �����Ҵ��� �Լ��� �������� 
}