#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define TRUE 1
#define FALSE 0
#define maxnode 100

void rmnewline(char *line){
    if(line[strlen(line)-1]=='\n')line[strlen(line)-1]='\0';
}

char *getnum(char *ptr,char *qtr){
    char *word=ptr;
    while(*ptr==' ' && *ptr!='\0')ptr++;
    while(*ptr!=' ' && *ptr!='\0')*qtr++=*ptr++;
    *qtr='\0';
    if(strlen(word)!=0)return ptr;
    else return NULL;
}
int searchCol(int *res){
    int i,j;
    for(i=0;i<maxnode;i++){
        if(res[i]==-1)break;
    }return i;
}

int main(){

    int i,j,row=0,col=0;
    int res[maxnode][maxnode];
    char *ptr;
    char buf[maxnode],num[maxnode];

    while(fgets(buf,100,stdin)!=NULL){
        rmnewline(buf);ptr=buf;col=0;
        while((ptr=getnum(ptr,num))!=NULL){
            res[row][col++]=atoi(num);
        }res[row][col]=-1;row++;
    }

    for(i=0;i<row;i++){
        col=searchCol(res[i]);
        for(j=col-1;j>=0;j--){
            if(j==0){printf("%d\n",res[i][j]);break;}
            printf("%d ",res[i][j]);
        }
    }

}
