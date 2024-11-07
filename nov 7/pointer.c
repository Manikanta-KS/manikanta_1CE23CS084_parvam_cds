#include<stdio.h>
int main(){
int b=5;
int c=4;
int *pr=&c;
int *ptr=&b;
printf("%d\n",ptr);
printf("%d",pr);
}