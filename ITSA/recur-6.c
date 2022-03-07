#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int res;
int func(int n){
    if(n==0 || n==1)return n+1;
    else return res=func(n-1)+func(n/2);
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",func(n));
}
