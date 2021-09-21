#include <stdio.h>

int main() {

    int n;
    int sum=0;

    for(int i=0; i<10; i++){
        scanf("%1d",&n);
        sum+=n;
    }

    if(sum%7==4){
        printf("suspect");
    }
    else{
        printf("citizen");
    }

    return 0;
}