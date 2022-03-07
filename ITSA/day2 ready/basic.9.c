#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in basic-9

int main(){
    int num,total=0;
    while(scanf("%d",&num)!=EOF){
        //initial
        total=0;
        //determine
        for(int i=1;i<=num;i++){
            if(i%3==0)total+=i;
        }
        //output
        printf("%d\n",total);
    }
}
