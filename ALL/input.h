#include <bits/stdc++.h>
#include<fstream>
#include<sstream>
#include<iostream>
#include<string>
#define SIZE 26
using namespace std;

extern string str;
void read() {

    FILE *file;
    char c;
    //char *s = NULL;
    //int i = 0;
    file=fopen("test.txt","rt");
    ifstream f("test.txt");
    

     if(f) {
      ostringstream ss;
      ss << f.rdbuf(); // reading data
      str = ss.str();
     }
    //cout<<str;
   // while((c=fgetc(file))!=EOF){
     //   printf("%c",c);
        //s[i++] = c;
    //}

    fclose(file);
    //printf("%s", s);
}

void printCharWithFreq(string str)
{
    // size of the string 'str'
    int n = str.size();
 
    // 'freq[]' implemented as hash table
    int freq[SIZE];
 
    // initialize all elements of freq[] to 0
    memset(freq, 0, sizeof(freq));
 
    // accumulate frequency of each character in 'str'
    for (int i = 0; i < n; i++)
        freq[str[i] - 'a']++;
 
    // traverse 'str' from left to right
    for (int i = 0; i < n; i++) {
 
        // if frequency of character str[i] is not
        // equal to 0
        if (freq[str[i] - 'a'] != 0) {
 
            // print the character along with its
            // frequency
            cout << str[i] << freq[str[i] - 'a'] << " ";
 
            // update frequency of str[i] to 0 so
            // that the same character is not printed
            // again
            freq[str[i] - 'a'] = 0;
        }
    }
}

void display()
{
    read();
    cout<<str;
}