#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char *cwd;//문자열

    cwd = getcwd(NULL, BUFSIZ);//현재 디렉토리 경로를 넘김
    printf("1. 현재 디렉토리는 :%s\n", cwd);

    chdir("bit");

    cwd = getcwd(NULL, BUFSIZ);//현재 디렉토리 경로를 넘김
    printf("2. 변경 디렉토리는 :%s\n", cwd);

    free(cwd);
}