#include <iostream>
#include <cassert>
#include <string>
#include "hello_world.h"

using namespace std;

int main(void){
    string str;
    
    assert(!helloWorld("Hello"));
    assert(!helloWorld("HelloWorld"));
    assert(!helloWorld("Hello World"));
    assert(helloWorld("Hello World!"));
    assert(!helloWorld("HELLO WORLD"));

    getline(cin, str); 
    assert(helloWorld(str));
    cout << str;
    return 0;
}