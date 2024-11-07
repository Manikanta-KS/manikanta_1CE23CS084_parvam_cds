#include<stdio.h>
int main(){
    double a=2;
    double *ptr=&a;
    printf("%d\n",ptr);
    ptr++;
    printf("%d",ptr);
}