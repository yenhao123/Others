#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in ¼Æ¾Ç1 mm34

int main(){
    int i,num,cnt=0,ary[100];
    while(scanf("%d",&num)!=EOF){
        //initial
        cnt=0;
        //finding
        for(i=1;i<=num;i++){
            if(num%i==0)ary[cnt++]=i;
        }
        //output
        for(i=0;i<cnt;i++){
            if(i==cnt-1)printf("%d\n",ary[i]);
            else   printf("%d ",ary[i]);
            ary[i]=0;
        }
    }
}
