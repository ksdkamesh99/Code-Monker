%{
	#include<stdio.h>
	int num=0;
	int val=0;
	int flag=0;
%}

%%
[0-9] { int matched=char2in(yytext);
	num=num*10+matched;
	val=val+(matched*matched*matched);}
. { flag=1;}
%%

int yywrap(){
	return 1;
}



int char2in(char *a){
	int s=a[0]-'0';
	return s;
}


int main()
{
	printf("enter the number\n");
	yylex();
	if(flag){
		printf("Invalid Characters entered");
	}
	else{
	
	if(num==val){
		printf("It is a amstrong number");
	}
	else{
		printf("It is not a amstrong number");
	}
	}
	return 0;
}