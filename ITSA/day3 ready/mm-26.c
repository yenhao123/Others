#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in 數學1 mm26

int main(){
    int i,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        printf("%d*%d=%d\n",i,i,i*i);
    }
}
