#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in basic-10

int main(){
    int a,b,flag=0;
    //輸入兩對值
    scanf("%d",&a);
    scanf("%d",&b);
    //輾轉相除法
    while(a!=0 && b!=0){
        if(a>b){
                a=a%b;
        }else{
            b=b%a;
        }
        printf("a:%d b:%d\n",a,b);
    }
    //output
    if(a==0)printf("%d\n",b);
    else printf("%d\n",a);
}
