#include <stdio.h>
#include<string.h>

int identifiers(char id){
    if((id>=65 && id<=90) || (id>=97 && id<=122) || (id>=48 && id<=57) || id=='_'){
        return 1;
    }
    return 0;
}

int main() {
    printf("Enter the string to check whether it is a identifier or not\n");
    char id[100];
    scanf("%s",id);
    int flag=1;

    if(strlen(id)>=32){
        flag=0;
    }
    else{
    for(int i=0;i<strlen(id);i++){
        if(flag==0){
            break;
        }
        else{
            if(identifiers(id[i])){
                if(i==0){
                    if(id[0]-'0'>=0 && id[0]-'0'<=9){
                        flag=0;
                        break;
                    }
                }
            }
            else{
                flag=0;
                break;
            }
        }
    }
    }

    if(flag){
        printf("The string is confirmed as identifier in C");
    }
    else{
        printf("The string is confirmed as not identifier in C");
    }


}
