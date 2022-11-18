#include "echo.h"

using namespace std;

void echo(int count, char* argument[]){
    if(count == 1){
        cout << "\n";
    }
    else{
        for(int i=1; i<count; i++){
            cout << argument[i] << " ";
        }
        cout << "\n";
    }
}