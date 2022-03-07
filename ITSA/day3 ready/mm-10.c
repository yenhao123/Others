#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in 數學1 mm-10

int main(){
    float num;
    while(scanf("%f",&num)!=EOF){
        printf("%.1f\n",num*9/5+32);
    }
}
