#include "square_root.h"
#include <cmath>

double squareRoot(double num){
    if(num < 0){
        return -1;
    }else{
        return sqrt(num);
    }
}
