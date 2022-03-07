#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int res;
int func(int a,int b){
    if(b==0)return 1;
    res=a;
    while(b>1){
        res=res*a;
        b--;
    }
    return res;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",func(a,b));
}
