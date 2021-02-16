#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n,r,sum;
	sum=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		sum=sum+r;
		n=n/10;
			}
	printf("sum of digits=%d",sum);
	getch();
	return 0;
}
