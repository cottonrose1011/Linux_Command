#include <stdio.h>
#include <stdlib.h>
#include <utime.h>

int main(int argc, char *argv[])
{
    if(argc < 2){
        fprintf(stderr, "Use: touch file1\n");
        exit(-1);
    }

    utime(argv[1], NULL); //수정 시간 변경

    
    return 0;
}