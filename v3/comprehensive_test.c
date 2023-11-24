#include <stdio.h>
int main(){
    int i=1;
    for(i=1;i<=25;i++){
        if(i%3==0){
            printf("%d\n",i);
        }
    }
    while(i<=50){
        if(i%3==0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}