#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in �ƾ�1 mm-08

int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        a=a+b;
        printf("%d\n",a*a);
    }
}
