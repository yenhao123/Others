#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

int isPrime(int n){
    if(n==1)return FALSE;
    if(n==2)return TRUE;
    for(int i=2;i<n/2+1;i++){
        if(n%i==0)return FALSE;
    }
    return TRUE;
}

int fPrime(int n){
    for(int i=n;i>0;i--){
        if(isPrime(i)==TRUE)return i;
        else continue;
    }
}

int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",fPrime(num));
}
