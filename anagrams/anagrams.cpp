#include "anagrams.h"

void generateAnagrams(string str, int left, int right){
    if(left == right)
        cout << str << "\t";
    else{
        for(int i=left; i<=right; i++){
            swap(str[left], str[i]);
            generateAnagrams(str, left+1, right);
            swap(str[left], str[i]);
        }
    }
}