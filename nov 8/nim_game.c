#include<stdio.h>
int main(){
    int n;
    printf("enter the number of stones:");
    scanf("%d",&n);
    if(n%4!=0){
        printf("true");
    }
    else{
        printf("false");
    }
}