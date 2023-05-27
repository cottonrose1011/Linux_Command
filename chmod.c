#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(int argc, char *argv[]) {
    
    if (argc != 3){
        printf("사용법: %s mode 파일명\n", argv[0]);
        exit(1);
    }

    long strtol();
    int newmode;
    
    //문자열로 된 권한 모드를 숫자로 변환
    newmode = (int)strtol(argv[1], NULL, 8);

    if (chmod(argv[2], newmode) == -1){
        perror(argv[2]);
        exit(1);
    }

    exit(0);
}