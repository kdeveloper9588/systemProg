#define _GNU_SOURCE
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
    char *cwd;//c언어에서 문자열을 사용할 때 이렇게 많이 씀

    cwd = get_current_dir_name();
    printf("cwd = %s\n", cwd);
    free(cwd);

}