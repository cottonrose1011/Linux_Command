#include <stdio.h>

int main(int argc, char* argv[]){

    if (argc < 2){
        fprintf(stderr, "사용법: ehco string\n");

        return 1;
    }

    int i;
    for (i = 1; i < argc; i++) {
        printf("%s ", argv[i]);
    }

    return 0;
}