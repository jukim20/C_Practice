#include <stdio.h>
void main(){
	// 배열) 값으로 삭제 
	int arr[5] = {10, 20, 30, 40, 50};
	int value  = 0; int i; int remove_index; int count = 5; // 배열크기저장
	printf("삭제할 값을 입력하세요 >> ");
	scanf_s("%d" , &value);
	for(i = 0; i < 5; i++){
		if(value == arr[i]){
			remove_index = i;  // 지울번호를 기억한다.
			//printf("%d" , i);
			count -= 1; // 찾으면 count 를 줄여준다.
		}
	}
	for(i = remove_index; i < count; i++){
		arr[i] = arr[i + 1]; // 지울 번호 부터 뒤에서부터 덮어씌운다 
	}
	for(i = 0; i < count; i++){ // 배열은 count 숫자만큼출력해서 삭제가된것처럼 이용한다.(메모리낭비)
		printf("%d\n" , arr[i]);
	}
}
