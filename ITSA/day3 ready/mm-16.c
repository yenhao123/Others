#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in 數學1 mm-16

int func(int a,int b){
    int i,sum;
    sum=a*a+b*b;
    for(i=0;i<sum/2+1;i++){
        if(i*i>=sum)break;
    }
    return i;
}

//in ¼Æ¾Ç1 mm16
int main(){
    int i,a,b,radius;
    while(scanf("%d %d",&a,&b)!=EOF){
        //找離原點的距離 a^2+b^2 根號 
        radius=func(a,b);
        //
        if(radius>200)printf("outside\n");
        else printf("inside\n");
    }
}
