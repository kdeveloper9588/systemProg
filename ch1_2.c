#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

extern int errno;

int main(){
    FILE *fp;
    if((fp=fopen("text.txt", "r"))==NULL){
        printf("errno=%d", errno);
    }
    fclose(fp);
}