#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in �ƾ�1 mm-28

int main(){
    int i=35,num,cnt=0,ary[100];
    while(scanf("%d",&num)!=EOF){
        //���_�[35����W�L���w��
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
