#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
void f_print(int a[] , int len , FILE* fp = stdout){
	int i;
	for( i = 0; i < len; i++)
	{
		fprintf(fp , "%d\n" , a[i]);
	}
	fprintf(fp , "\n");
}
void main(){
	FILE *fp;
	int a[10];
	int b[10];
	int i;
	time_t tStart;
	time_t tEnd;
	double time_D = 10;
	//time =  time(0) / CLOCKS_PER_SEC;
	//	printf("%lf" , (double)tStart);
	tStart = time(0);
	cout << tStart  <<  endl;
	// printf("%lf" , (double)clock());
	//for(i = 0; i <10; i++)
	//	a[i] = rand();
	//f_print(a , 10);	
	fp = fopen("아스키파일.txt" , "w");
	fprintf(fp , "%.1lf" , (double)tStart);
//	/*f_print(a , 10 , fp);*/
//	fclose(fp);
//
//	fp = fopen("아스키파일.txt" , "r");
//	fscanf(fp , "lf" , time);
////	printf("%lf" , time);
//
//	//for( i = 0; i < 10; i++)
//	//{
//	//	fscanf(fp , "%d" , b+i);
////	}
////	f_print(b, 10);
//	fclose(fp);

	//tEnd = clock();
	//time = (double)(tEnd -tStart) / CLOCKS_PER_SEC;

	//printf("%lf\n" , time);

}
