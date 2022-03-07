#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in 數學1 mm-21

int main(){
    int i,num;
    long long total=1;
    while(scanf("%d",&num)!=EOF){
        total=1;
        //算階乘
        for(i=1;i<=num;i++){
            total=total*i;
        }
        printf("%lld\n",total);
    }
}
