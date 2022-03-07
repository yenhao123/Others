#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int isPrime(int n){
    if(n==1)return FALSE;
    if(n==2)return TRUE;
    for(int i=2;i<n;i++){
        if(n%i==0)return FALSE;
    }
    return TRUE;
}

int main(){
    int num,res;
    while(scanf("%d",&num)!=EOF){
        res=isPrime(num);
        if(res==TRUE)printf("YES\n");
        else printf("NO\n");
    }
}
