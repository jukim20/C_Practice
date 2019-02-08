#include <stdio.h>
void set_name()
{
	printf("!!");
}

void main(){
	int a = 0;
	while(a<10){
		a++;
		set_name();
	}
	

}