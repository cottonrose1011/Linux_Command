#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    // 사용법 ls . -> 현재 디렉터리의 파일 이름 출력 (ls -a와 같은 동작)
    DIR *dp;
    char *dir;
    struct dirent *d;
    char path[BUFSIZ + 1];
    
    if (argc == 1)
        dir = "."; // 현재 디렉터리를 대상
    else dir = argv[1];

    if((dp = opendir(dir)) == NULL) // Read Directory
        perror(dir);
    
    while((d= readdir(dp)) != NULL) // 각 디렉터리 엔트리에 대해
        printf("%s ", d->d_name); //print filename
        
    closedir(dp);
    exit(0);
}
