#include <stdio.h>
// for 문
// 1. for ==> 키워드
// 2. ()  ==> 조건 ==> 조건이 true 이면 실행문실행
// 3. {}  ==> 실행문 ==> 실행문 종료후 ==> 조건으로 이동한다.
// 조건이 좀간결하다 한줄에 다 적을수있다.
// (1.초기식; 2.조건식; 3.증감식)   ==> 증감식만 ; 이 없다.
void main(){
	int x = 0; int y = 0; int speed = 0;  int des_x  = 10;
		int des_y = 7; int max_speed = 3; int sel = 0; int direction = 0; //( 북 =0 동 =1 남 =2 서 =3)
	while(sel != 5){
		printf(" ====== 배달 게임 ======= ");printf("\n");
		printf("목적지 : %d , %d" , des_x , des_y);printf("\n");
		printf(" 1. 속도");printf("\n");
		printf(" 2. 전진");printf("\n");
		printf(" 3. 좌회전");printf("\n");
		printf(" 4. 우회전");printf("\n");
		printf(" 5. 종료");printf("\n");
		printf("위치 : %d , %d , 속도 : %d , 방향 : %d", x , y , speed ,direction );
		printf(" 번호를 입력하세요 >>> ");
		scanf_s("%d" , &sel);
		if (sel == 1){}
	}
}