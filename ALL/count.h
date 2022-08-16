#include "input.h"


#include<iostream>
#include<string.h>
int i = 0;

// struct char_name
// {
//   char c;
//   struct char_name *next;
// };

// struct char_count
// {
//   int count;
//   struct char_count *next;
// };


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
