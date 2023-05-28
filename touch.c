#include <stdio.h>
#include <stdlib.h>
#include <utime.h>

int main(int argc, char *argv[])
{
    if(argc < 2){
        fprintf(stderr, "Use: touch file1\n");
        exit(-1);
    }

    utime(argv[1], NULL); //Update Last Write Time

    
    return 0;
}