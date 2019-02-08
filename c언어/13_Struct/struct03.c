#include <stdio.h>
#include <string.h>
struct Card{
	int num;
	char shape[10];
};  // 14 byte
void test(){
}
void main(){	
	int card_num;
	char card_shape[10];
	struct Card c1;	
	int card_nums[40];
	char card_shapes[40][10];
	struct Card deck[40];
	int i; int temp;
	//card_num = 1;
	//strcpy(card_shape , "하트");
	////printf("%s %d\n" ,card_shape , card_num); 
	//c1.num = 1;
	//strcpy(c1.shape , "하트");
	////printf("%s %d\n" , c1.shape , c1.num);

	//card_nums[0] = 2;
	//strcpy(card_shapes[0] , "다이아"); 
	////printf("%s %d\n" , card_shapes[0] , card_nums[0]);

	//deck[0].num = 2;
	//strcpy(deck[0].shape , "다이아");
	////printf("%s %d\n" , deck[0].shape , deck[0].num);
	for(i = 0 ; i < 40 ; i++){
		if(i / 10 == 0){
			strcpy(deck[i].shape , "♠"); // ㅁ + 한자 ==> 특수키
		}
		if(i / 10 == 1){
			strcpy(deck[i].shape , "♥");
		}
		if(i / 10 == 2){
			strcpy(deck[i].shape , "◆");
		}
		if(i / 10 == 3){
			strcpy(deck[i].shape , "♣");
		}
		deck[i].num = i% 10 + 1;
	}
	for(i = 0 ; i < 40 ; i++){
		printf("%s %d\t" , deck[i].shape , deck[i].num);
		if(i % 10 == 9){
			printf("\n");
		}
	}
	// 과제 카드를 섞어보기
}