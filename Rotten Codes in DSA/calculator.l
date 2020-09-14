%{
	#include<stdio.h>
	int op=0,i;

	float a,b,c;
%}




%%

[0-9]+|([0-9]*)"."([0-9]+) { calc(); }
"+" { op=1; }
"-" { op=2; }
"*" { op=3; }
"/" { op=4; }
"^" { op=5; }
"\n" { printf("The result is %f\n",a); }

%%

int yywrap(){
	return 1;

}
int main()
{
	yylex();
	return 0;
}

void calc(){
	if(op==0){
	a=atof(yytext);
	c=a;
	}
	else{
	b=atof(yytext);
	switch(op){
	case 1: 
		a=a+b;
	break;
	case 2: 
		a=a-b;
	break;
	case 3: 
		a=a*b;
	break;
	case 4: 
		a=a/b;
	break;
	case 5: for(i=b;i>1;i--){ a=a*c; }
	break;
	
		
	}
	op=0;
	}
}
