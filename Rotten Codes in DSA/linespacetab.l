%{
	#include<stdio.h>
	int lines=0;
	int spaces=0;
	int tabs=0;

%}

%%

\n {lines++;}
" " {spaces++;}
\t {tabs++;}
. {}
%%

int yywrap(){
	return 1;
}
 
int main()
{	printf("Enter the characters\n");
	yylex();
	printf("lines %d tabs %d spaces %d",lines,tabs,spaces);
	return 0;
}