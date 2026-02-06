#include<stdio.h>
int main(){
    int a,b,c;
    c=(a=10,b=20,a+b);
    printf("c=%d\n",c);
    return 0;
}