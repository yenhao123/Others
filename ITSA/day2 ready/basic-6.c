#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in basic-6

int main(){
    int num;
    while(scanf("%d",&num)!=EOF){
        if(num==12||num==1||num==2)printf("Winter\n");
        else if(num==3||num==4||num==5)printf("Spring\n");
        else if(num==6||num==7||num==8)printf("Summer\n");
        else printf("Autumn\n");
    }
}
