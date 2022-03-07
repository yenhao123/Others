#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in basic-12

int total=0;
int func(int num){
    if(num==0 || num==1)return num+1;
    else return total=func(num-1)+func(num/2);
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",func(num));
}

