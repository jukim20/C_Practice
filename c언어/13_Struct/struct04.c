#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Weapon{
	char name[20];
	int power;
	int magic;
	//int count;
};
struct Unit{
	int hp;
	int mp;
};
struct Monster{
	struct Weapon w1;
	struct Unit u1;
};
struct MonsterManger{
	struct Monster m1;	
};
struct Player{
	struct Weapon w1;
	struct Unit u1;
};
struct Monster* d_m_a_mon(int mon_size){
	struct Monster* p_mon;
	p_mon = (struct Monster*) malloc(sizeof(struct Monster) * mon_size);
	return p_mon; 
}
void main(){
	struct MonsterManger mm;
	struct Monster* p_mon;
	int mon_size;
	mon_size = 5;
	printf("������ : %d\n" , sizeof(struct Monster));
	//p_mon = (struct Monster*) malloc(sizeof(struct Monster) * mon_size);
	p_mon = d_m_a_mon(mon_size); // ������ , Į , ���� , Ȱ , â 
	strcpy(p_mon[0].w1.name , "������");
	//p_mon[0].hp = 100;
}