#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int C[ROWS][COLS]; //덧셈 결과 행렬 

int main(int argc, char *argv[]) {
	
	int A[ROWS][COLS] = { //더하기 대상 행렬 
	{2, 3, 0},
	{8, 9, 1},
	{7, 0, 5}};
	
	int B[ROWS][COLS] = {//더하기 대상 행렬 
	{1, 0, 0},
	{0, 1, 0},
	{0, 0, 1}};
	
	addMatrix(A, B, C);
	printMatrix(C);

	return 0;
}

void addMatrix(int A[][COLS], int B[][COLS], int C[][COLS])
{ 
   int i, j;  
   for(i=0;i<ROWS;i++)
     for(j=0;j<ROWS;j++)
         C[i][j] = A[i][j] + B[i][j];
    	  
}

void printMatrix(int A[][COLS])
{
	int i, j;
	for(i=0;i<ROWS;i++)
	  {
	  	for(j=0;j<ROWS;j++)
		printf("%d\t", C[i][j]);
	    printf("\n");	//for 문을 이용해서 계산 
}
 } 
