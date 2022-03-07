#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0

//in basic-14

int main(){
    char word[100];
    int i,j,flag,len,num[100];
    while(scanf("%s",word)!=EOF){
        //initial
        flag=TRUE;
        len=strlen(word);
        //determine 前面與後面相不相同
        for(i=0;i<len/2;i++){
            if(word[i]!=word[len-i-1]){flag=FALSE;break;}
        }
        //output
        if(flag==FALSE)printf("NO\n");
        else printf("YES\n");
    }
}
