#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in basic-4

int main(){
    int i,j,start1,start2,end1,end2,hour,min,total=0,sum=0;

    scanf("%d %d",&start1,&start2);
    scanf("%d %d",&end1,&end2);

    hour=end1-start1;
    min=end2-start2;
    //convert total mins
    if(min>=0){
        total=(hour*60+min);
    }else{
        hour-=1;
        min+=60;
        total=(hour*60+min);
    }
    //convert sum money
    if(total<120){
        sum+=(total/30)*30;
    }else{
        if(total<240){
            sum+=120/30*30;
            sum+=(total-120)/30*40;
        }
        else{
            sum+=120/30*30;
            sum+=120/30*40;
            sum+=(total-240)/30*60;
        }
    }

    printf("%d\n",sum);

}
