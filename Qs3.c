#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char a[100];
	int i, word;
	i=0;
	word=1;
	printf("\n enter the string:");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]==' ')
		word++;
		i++;
	}
	printf("\n total words=%d",word);
	
	return 0;
}
