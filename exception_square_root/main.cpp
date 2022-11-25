#include <iostream>
#include "square_root.h"

using namespace std;

int main(){
    test_cases();
    double num;
    cout << "Enter Number : ";
    cin >> num;
    try{
        if(squareRoot(num) == -1) throw num;
        cout << "Square Root of " << num << " is : " << squareRoot(num) << endl;
    }catch(double num){
        cout << "Invalid Input " << num << ". Input Number should not be less than zero!" << endl; 
    }
    return 0;
}