#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
 {
 	int i,j,N;
 	int count;
 	printf("enter N: ");
 	scanf("%d",&N);
 	count=N*2-1;
 	for(i=1;i<=count;i++)
 	{
 		for(j=1;j<=count;j++)
 		{
 			if(j==i||(j==count-i+1))
 			{
 				printf("*");
			 }
			 else 
			 {
			 printf(" ");
			 
			 }
		}
		printf("\n");
	}
	return 0;
}
			 
 			
		
	 
	
