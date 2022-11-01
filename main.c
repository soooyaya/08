#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[SIZE];
	int sum = 0;
	
	printf("input %i scores : ", SIZE);
	
	for(i=0;i<SIZE;i++)
	   scanf("%d", &grade[i]);
	   
	for(i=0;i<SIZE;i++)
	{   
	    sum += grade[i];
	    printf("grade[%d] = %d\n", i, grade[i]);
	}
	printf("Mean : %i\n", sum/SIZE);
	   
	   
	return 0;
}
