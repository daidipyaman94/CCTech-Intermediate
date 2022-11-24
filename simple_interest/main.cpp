#include <iostream>
#include "simple_interest.h"

using namespace std;

int main(){
    test_cases();
    
    double p;
    double n;
    double r;
    
    cout << "Enter the Principal Amount : ";
    cin >> p;
    cout << "Enter the Duration (in year) : ";
    cin >> n;
    cout << "Enter the Rate of Interest (in percentage): ";
    cin >> r;

    SimpleInterest si(p,n,r);
    if(si.calculateSimpleInterest() == -1)
    {
        cout << "Principa Amount, Duration, Rate of Interest should be greater than zero ";
    }  else{
        cout << "Simple Interest is : " << si.calculateSimpleInterest() << endl;
    }
    return 0;
}