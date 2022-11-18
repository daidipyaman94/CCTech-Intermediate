#include <iostream>
#include <string>
#include "anagrams.h"

using namespace std;

int main(void){
    string str;
    cout << "Enter the string : ";
    cin >> str;
    cout << "Anagrams of " << str << " are : " << endl;
    generateAnagrams(str, 0, str.length()-1);
    
    return 0;
}