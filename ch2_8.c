#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(){
    DIR *dp;//구조체 자료형 
    struct dirent *dent;

    dp = opendir(".");

    while((dent = readdir(dp))){//디렉토리 읽기
        printf("Name : %s ", dent->d_name);
        printf("Inode : %d\n", (int)dent->d_ino);
    }
    closedir(dp);
}