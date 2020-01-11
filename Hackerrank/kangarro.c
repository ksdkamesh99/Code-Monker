#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x1,x2,v1,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    int n=1;
    while(n>0){
        
        if((v1==v2|| (x2-x1)/(v1-v2))<0 || n>5000){
            printf("NO");
            break;
        }
        if((x2-x1)==n*(v1-v2)){
            printf("YES");
            break;
        }
        n++;
    }
}
