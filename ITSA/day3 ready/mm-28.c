#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in 數學1 mm-28

int main(){
    int i=35,num,cnt=0,ary[100];
    while(scanf("%d",&num)!=EOF){
        //不斷加35直到超過給定植
        i=35;cnt=0;
        while(i<=num){
            ary[cnt++]=i;
            i+=35;
        }
        for(i=0;i<cnt;i++){
            if(i==cnt-1)printf("%d\n",ary[i]);
            else printf("%d ",ary[i]);
            ary[i]=0;
        }
    }
}
