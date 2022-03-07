#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in 數學1 mm15
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a>100 || b>100)printf("outside\n");
        else printf("inside\n");
    }
}
