#include <stdio.h>
#include <stdlib.h>
void main(){	
	// �����Ҵ� �߰�
	int arr[5];  // 4 * 5 ==> 20 byte
	int*p; int* p_add = 0; int add_num;  
	int count = 0;
	int i; int* p_temp;
	//p = malloc(20); // 20 byte ==> arr[5]
	while(1){
		printf("�߰��� ������ �Է��ϼ��� >> ");
		scanf_s("%d" , &add_num);
		p_temp = p_add;  // ���� �ּҰ� ����
		p_add = malloc((count + 1) * 4);  // ==> 4 == arr[1] //���ο�޸�
		p_add[count] = add_num; // ���ο� �޸��� �������� �Է��Ѱ� ����
		for(i = 0; i < count; i++){
			p_add[i] = p_temp[i];  // ���ο� �޸𸮿� �պκ� ����
		}
		count += 1;	// �޸� ũ�� ����
		for(i = 0; i < count; i++){
			printf("%d\n" , p_add[i]); // ��� 
		}
		free(p_temp); // ���� �޸� ���� 
	}
}