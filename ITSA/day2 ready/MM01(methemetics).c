#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

// in 數學1 mm-01

int main(){
    int h1,h2,h3;
    while(scanf("%d %d %d",&h1,&h2,&h3)!=EOF){
        printf("Trapezoid area:%.1f\n",(float)(h1+h2)*h3/2);
    }
}
