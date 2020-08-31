
%{
	#include<stdio.h>
	int vowel=0;
	int consonent=0;
%}

%%

[aeiouAEIOU] {vowel++;} 
[a-zA-Z] {consonent++;} 
. {}

%%

int yywrap(){
	return 1;
}

int main()
{
	printf("Enter the characters\n");
	yylex();
	printf("Vowel is %d consonent is %d",vowel,consonent);
	return 0;
}