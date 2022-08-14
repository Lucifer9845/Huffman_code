#include <stdio.h>
#include <stdlib.h>
#include<fstream>
#include<sstream>
#include<iostream>
#include<string>
using namespace std;


int read() {

    FILE *file;
    char c;
    //char *s = NULL;
    //int i = 0;
    file=fopen("test.txt","rt");
    ifstream f("test.txt");
    string str;

     if(f) {
      ostringstream ss;
      ss << f.rdbuf(); // reading data
      str = ss.str();
     }
    cout<<str;
   // while((c=fgetc(file))!=EOF){
     //   printf("%c",c);
        //s[i++] = c;
    //}

    fclose(file);
    //printf("%s", s);
    return 0;
}