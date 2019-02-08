#include <stdio.h>
//파일 입출력 ==> io ==> input , output
//프로그램중에 사용한 데이터를 파일로 만드는걸 말한다.
//1. open  ==> 파일을 불러온다
//2. read , write ==> 읽기 , 쓰기
//   1) 파일을 불러올 모드를 설정해야된다. r , w 
//      r ==> 읽기밖에 안된다 (저장x)
//      w ==> 파일이 생성되기때문에 전의 데이터가 삭제된다.
//3. close ==> 파일을 닫아준다.
void main(){
	FILE * pFile = NULL;
	fopen_s(&pFile, "test01.txt", "w");
	fclose(pFile);
}