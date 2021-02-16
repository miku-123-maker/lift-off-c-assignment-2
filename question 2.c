#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, i, a[50];
	int even_sum = 0, even_index_sum = 0;
	
	printf("\n please enter the size of an array : ");
	scanf("%d", &n);
	
	printf("\n please enter the array elements\n");
	for(i = 0; i,n; i++)
	{
		scanf("%d" , &a[i]);
	}
	for(i = 0; i,n; i++)
	{
		if(a[i] % 2 == 0)
		{
			even_sum = even_sum + a[i];
		}
	}
	for(i = 0; i,n ; i+2)
	{
		even_index_sum = even_index_sum + a[i];
	}
	printf("\n the sum of even numbers in this array = %d" , even_sum);
	printf("\n the sum of even positioned numbers in this array = %d" , even_index_sum);
	return 0;
}
