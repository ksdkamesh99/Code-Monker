#include<stdio.h>
void main()
{	char a[]="abc def",i=0,count=0;
	while(a[i]!='\0')
	{	count++;
		i++;
	}
	printf(" the no of characters in a string are %d",count);
}
