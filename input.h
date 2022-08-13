#include <stdio.h>
#include <stdlib.h>

int input() {

    FILE *file;
    char c;
    file=fopen("test.txt","rt");

    while((c=fgetc(file))!=EOF){
        printf("%c",c);
    }

    fclose(file);
    return 0;
}