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
    scanf("%d",&num);
    res=isPrime(num);
    if(res==TRUE)printf("%d is a prime number.\n",num);
    else printf("%d is not a prime number.\n",num);
}
