#include<stdio.h>
#include<string.h>
void main()
{	char s1[]="kota";
	char s2[]="kamesh";
	char c[]={strcat(s1,s2)}; 
	printf("length of string s2 is %ld\n",strlen(s2));
	printf("copy string s2 on s1 is %s\n",strcpy(s1,s2));
	printf("comparing strings is %d\n",strcmp(s1,s2));
	printf("the addition of 2 strings is %s \n",c);
}
	
