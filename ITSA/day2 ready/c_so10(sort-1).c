#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in 排序1 c_so10

int ary[100];
void bubbleSort(int num){
    int tmp;
    for(int i=0;i<num;i++){
        for(int j=0;j<num-1;j++){
            if(ary[j]>ary[j+1]){
                tmp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=tmp;
            }
        }
    }
}

int main(){
    int num;
    scanf("%d",&num);

    //input
    for(int i=0;i<num;i++){
        scanf("%d",&ary[i]);
    }
    //bubble sort Sorting
    bubbleSort(num);

    //output
    for(int i=0;i<num;i++){
        if(i==num-1)printf("%d\n",ary[i]);
        else printf("%d ",ary[i]);
    }
}
