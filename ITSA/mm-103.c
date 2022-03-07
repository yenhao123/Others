#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int fib(int n){
    if(n==1 || n==2)return 1;
    else return fib(n-1)+fib(n-2);
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",fib(num));
}
