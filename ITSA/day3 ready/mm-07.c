#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in ¼Æ¾Ç1 mm-07

int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        printf("%d %d %d\n",num,num*num,num*num*num);
    }
}
