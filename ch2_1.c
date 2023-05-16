#include<sys/stat.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
    if(mkdir("han", 0755) == -1){//정상적인 호출이 이루어지지 않음//mkdir은 
        perror("에러상황은: ");//에러 출력
        exit(-1);//종료
    }
    printf("han디렉토리가 잘 만들어졌어요!\n");

}