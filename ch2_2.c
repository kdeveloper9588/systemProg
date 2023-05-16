#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    if (rmdir("han")==-1){
        perror("잘못됨 ㅅㄱ\n");
        exit(-1);
    }
    printf("제거 성공!\n");
}