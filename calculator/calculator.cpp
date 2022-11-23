#include "calculator.h"

void additionUnsignedInt(unsigned int x, unsigned int y){
    unsigned int result = x+y;
    if((x>=y && result < x) || (y>=x && result < y)){
        cout << "Invalid Operation" << endl;
    }else{
        cout << result << endl;
    }   
}

void subtractionUnsignedInt(unsigned int x, unsigned int y){
    unsigned int result = x-y;
    if(result > x){
        cout << "Invalid Operation" << endl;
    }else{
        cout << result << endl;
    }
}

void multiplicationUnsignedInt(unsigned int x, unsigned int y){
    unsigned int result = x*y;
    cout << result <<endl;
}

void divisionUnsignedInt(unsigned int x, unsigned int y){
    if(y == 0){
        cout << "Can not Divide by 0" << endl;
    }else{
        unsigned int result = x/y;
        cout << result << endl;
    }   
}

void additionSignedInt(int x, int y){
    int result = x+y;
    if(x >= 0 && y >= 0){
        if((x>=y && result < x) || (y>=x && result < y)){
        cout << "Invalid Operation" << endl;
        }else{
        cout  << result << endl;
        }
    }
    if(x < 0  && y < 0){
        if((x>=y && result > x) || (y>=x && result > y)){
        cout << "Invalid Operation" << endl;
        }else{
        cout << result << endl;
        }
    }
    if((x<0 && y>0) || (x>0 && y<0)){
        if((x>y && result > x) || (x<y && result >y) ){
            cout << "Invalid Operation" << endl;
        }
        else{
            cout << result << endl;
        }
    }
} 

void subtractionSignedInt(int x, int y){
    int result = x-y;
    if(((x<0 && y>0) || (x>0 && y<0)) && ((x>y && result < x) || (x<y && result > y) )){
            cout << "Invalid Operation" << endl;
        }
    else{
        cout << result << endl;
    }
}

void multiplicationSignedInt(int x, int y){
    int result = x*y;
    cout << result << endl;
}

void divisionSignedInt(int x, int y){
    if(y == 0){
        cout << "Can not Divide by 0" << endl;
    }else{
        int result = x/y;
        cout << result << endl;
    }
}

void additionFloat(float x, float y){
    float result = x+y;
    cout << result << endl;
}

void subtractionFloat(float x, float y){
    float result = x-y;
    cout << result << endl;
}

void multiplicationFloat(float x, float y){
    float result = x*y;
    cout << result << endl;
}

void divisionFloat(float x, float y){
    float result = x/y;
    cout << result << endl;
}

void additionDouble(double x, double y){
    double result = x+y;
    cout << result << endl;
}

void subtractionDouble(double x, double y){
    double result = x-y;
    cout << result << endl;
}

void multiplicationDouble(double x, double y){
    double result = x*y;
    cout << result << endl;
}

void divisionDouble(double x, double y){
    double result = x/y;
    cout << result << endl;
}

