#include <stdio.h>
// 1. ���Կ����� : a = b
// 2. ��������� : 
// 3. �񱳿����� : 6��
// 4. �������� : and , or , not 
void main(){
	//    | ==> shift + ��ǥ�� 
	// 1)  a  &&  b     : and ==> a �� ���̰� b �� ���̿��� , ��
	// 2)  a  ||  b     : or  ==> a �� ���̰ų� b �� ���̸� , ��
	// 3)  !a           : not ==> a �� �����̸� , ��
	 int num1,num2,num3,num4;
	 int score1 ,score2,score3;int total = 0;
	 num1 = 10 ,num2 = 20, num3 =30 , num4 =40;
	 if(num1 < num2  && num3 > num4){
		 printf("��1\n");
	 }
	 num1 = 10 ,num2 = 20, num3 =30 , num4 =40;
	 if(num1 > num2  || num3 > num4){
		 printf("��2\n");
	 }
	 num1 = 10 ,num2 = 20, num3 =30 , num4 =40;
	 if( !(num1 < num2)  && !(num3 > num4)){
		 printf("��3\n");
	 }
	 num1 = 10 ,num2 = 20, num3 =30 , num4 =40;
	 if( !(num1 < num2)  || (num3 > num4)){
		 printf("��4\n");
	 }
	 // ���� 1) ���� 3���� �Է¹ް� ����� 60 �̻��̸� �հ� (���� : �Ѱ����̶� 60�����̸� ���հ�)	
	 score1 = 100;
	 score2 = 60;
	 score3 = 59;
	 total = score1 + score2 + score3;
	 if(score1 < 60 || score2 <60 || score3 <60) {
		 printf("���հ�\n");
	 }
	 else{
		 printf("�հ�\n");
	 }
}