#include <stdio.h>
#include <stdlib.h>

int read() {

    FILE *file;
    char c;
    char *s = NULL;
    int i = 0;
    file=fopen("test.txt","rt");

    while((c=fgetc(file))!=EOF){
        printf("%c",c);
        s[i++] = c;
    }

    fclose(file);
    //printf("%s", s);
    return 0;
}
