#include "close_to_zero.h"
#include <cmath>

int closeToZero (vector<int> v){
    int small = abs(v[0]);
    int element = v[0];
    for(int i=1; i<v.size(); i++){
        if(abs(v[i]) < small){
            small = abs(v[i]);
            element = v[i];
        }
        if(abs(v[i]==small) &&  v[i]>element){
             element = v[i];
        }  
    }
    return element;
}