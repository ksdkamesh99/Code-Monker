#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    printf("Enter a line to check whether it is a comment or not\n");
    scanf("%[^\n]%*c",s);
    int len=strlen(s);
    if(len<2){
        printf("It is not a comment");

    }
    else if(s[0]=='/'){
        if(s[1]=='/'){
            printf("It is a comment");
        }
        else if(s[1]=='*' && len>=4 && s[len-1]=='/' && s[len-2]=='*'){
            printf("It is a comment");
        }
        else{
            printf("It is not a comment");

        }
    }
    else{
        printf("It is not a comment");
    }
    return 0;
}