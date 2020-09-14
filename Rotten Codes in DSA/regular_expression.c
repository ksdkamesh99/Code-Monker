#include<stdio.h>
#include<string.h>

int main(){
    // a* or a*b+ or abb
    int curr_state=1;
    printf("Enter the Expression\n");
    char e[32];
    scanf("%s",e);
    int len=strlen(e);
    int i=0;
    int flag=0;
    while(i<len){
        if(curr_state==1){
            if(e[i]=='a'){
                curr_state=2;
            }
            else if(e[i]=='b'){
                curr_state=3;
            }
            else{
                flag=1;
                break;
            }
            i++;
        }
        else if(curr_state==2){
            if(e[i]=='a'){
                curr_state=2;
            }
            else if(e[i]=='b'){
                curr_state=3;
            }
            else{
                flag=1;
                break;
            }
            i++;
        }
        else if (curr_state==3)
        {
            if(e[i]=='b'){
                curr_state=4;
            }
            else{
                flag=1;
                break;
            }
            i++;
        }
        else if(curr_state==4){
            if(e[i]=='b'){
                curr_state=5;
            }
            else{
                flag=1;
                break;
            }
            i++;
        }
        else if(curr_state==5){
            if(e[i]=='b'){
                curr_state=5;
            }
            else{
                flag=1;
                break;
            }
            i++;
        }

    }

    if(flag){
        printf("The String is not matched with any of the 3 cases");
    }
    else{
        if(curr_state==1 || len==0 || curr_state==2 ){
            printf("The String is matched with regular expression a* ");
        }
        else if(curr_state==4 && len==3){
            printf("The String is matched with regular expression abb ");

        }
        else if(curr_state==3 || curr_state==4 || curr_state==5 ){
            printf("The String is matched with regular expression a*b+ ");
        }
    }

    return 0;
}