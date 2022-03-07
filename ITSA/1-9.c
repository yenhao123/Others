#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0
#define maxnode 10

void swap(int *a1,int *a2){
    int tmp;
    tmp=*a1;
    *a1=*a2;
    *a2=tmp;
}

void *bubbleSort(int ar[maxnode],int size){
    int i,j;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
            if(ar[j]<ar[j+1])swap(&ar[j],&ar[j+1]);
        }
    }
}

int main(){
    int i,j,num,size=0;
    int ar[maxnode];
    char max[maxnode],min[maxnode];

    while(scanf("%d,",&num)!=EOF){
        ar[size++]=num;
    }
    bubbleSort(ar,size);
    for(i=0;i<size;i++){
        max[i]=ar[i]+48;min[size-1-i]=ar[i]+48;
    }
    num=atoi(max)-atoi(min);
    printf("%d\n",num);
}
