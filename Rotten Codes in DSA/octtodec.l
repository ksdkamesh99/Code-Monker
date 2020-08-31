%{
	#include<stdio.h>
	int val=0;
%}

%%
[0-7] { val=8*val+chartonum(yytext);}
. {}
%%

int yywrap(){
	return 1;
}
int main()
{
	printf("Enter the Octal Value\n");
	yylex();
	printf("The decimal value is %d",val);
	return 0;
}

int chartonum(char *a){

	int h=a[0]-'0';
	return h;
}