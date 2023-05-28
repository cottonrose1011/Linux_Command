#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){

    chdir(argv[1]);
    printf("%s",getcwd(NULL, BUFSIZ),argv[1]);

    return 0;
}