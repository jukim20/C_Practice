#include <stdio.h>
struct Student{
	int age;
	int scores[3];
	char** friend_name;
};
void main(){
	struct Student st_arr[2]; int i;
	st_arr[0].age = 20;
	st_arr[0].scores[0] = 100;
	st_arr[0].scores[1] = 20;
	st_arr[0].scores[2] = 40;
	st_arr[1].age = 40;
	st_arr[1].scores[0] = 30;
	st_arr[1].scores[1] = 70;
	st_arr[1].scores[2] = 50;
	for(i = 0; i < 2; i ++){
		printf("%d %d %d %d\n" , st_arr[i].age , st_arr[i].scores[0] , 
			st_arr[i].scores[1],  st_arr[i].scores[2]);
	}

	int age_arr[2];
	int scores_darr[2][3];
}