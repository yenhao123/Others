#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in 數學1 mm-17

int main(){
    int a,b;
    //input
    scanf("%d %d",&a,&b);
    //輾轉相除法
    while(a!=0 && b!=0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }
    //output
    if(a!=0)printf("%d\n",a);
    else printf("%d\n",b);
}
