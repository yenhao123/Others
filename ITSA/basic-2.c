#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int main(){
    int num;
    double res;
    while(scanf("%d",&num)!=EOF){
        res=num*1.6;
        printf("%.1f\n",res);
    }
}
