#include <stdio.h>
#include <string.h>
// ����ü (struct)
/*
	1. ����� ���� �ڷ��� 
	     1) �⺻�ڷ���(int 4 , char 1,double 8, long 4, float 4)
	2. �����ϴ¹� 
		struct �̸�{};
	3. �����ϴ¹�
		struct �ڷ����̸� + ����;
	4. ����ϴ¹�
		����.���κ���  (.)dot ���� ���ο� �����Ѵ�.
*/
struct Person{
	char name[20];  // 20
	int age;  // 4
};
void main(){
	struct Person p1;
	int arr[4]; // int,int,int,int 
	//p1 ==> struct Person;
	//p1.name ==> char[20];
	//p1.age ==> int 
	// p1.name = "ȫ�浿"; char[] �� �ܼ�����(=)�� �ȵȴ�.
	strcpy(p1.name , "ȫ�浿");
	p1.age = 10;
//	printf("%d\n", sizeof(struct Person));  // 24
//	printf("%d\n", sizeof(long));  // 4
	printf("%s\n" , p1.name);
	printf("%d\n" , p1.age);

}