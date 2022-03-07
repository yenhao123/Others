#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in basic-21

int main(){
    float a,b,b1,b2,b3,b4,b5,b6,b7,b8,b9,max,min,num[100];
    scanf("%f %f %f %f %f %f %f %f %f %f",&a,&b1,&b2,&b3,&b4,&b5,&b6,&b7,&b8,&b9);
    num[0]=b1;num[1]=b2;num[2]=b3;num[3]=b4;num[4]=b5;
    num[5]=b6;num[6]=b7;num[7]=b8;num[8]=b9;
    max=a;min=a;
    for(int i=0;i<9;i++){
        b=num[i];
        if(b>max){
            max=b;
        }else if(b<min){
            min=b;
        }
        //printf("a:%.2f b:%.2f\n",a,b);
    }
    printf("maximum:%.2f\nminimum:%.2f\n",max,min);
}
