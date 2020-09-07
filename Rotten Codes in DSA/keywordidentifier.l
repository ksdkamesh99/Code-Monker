%{
	#include<stdio.h>
	int flag=0;
%}

%%

auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while { 
			printf("The string you entered is a keyword"); }
^[A-Za-z_][A-Za-z0-9_]* { printf("It is identified as identifier"); }
. { flag=1; }

%%

int yywrap(){
	return 1;
}


int main()
{
	printf("Enter the string\n");
	yylex();
	if(flag){
		printf("The string you entered is not a identifier or keyword");
		}
	return 0;
}