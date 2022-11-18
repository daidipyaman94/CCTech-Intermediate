#include <iostream>
#include <cassert>
#include "leap_year.h"

int main(void){
    
    assert(isLeapYear(2016));
    assert(!isLeapYear(2022));
    assert(isLeapYear(2000));
    assert(!isLeapYear(2500));
    
    int year;
    cout << "Enter the Year : ";
    cin >> year;
    isLeapYear(year) ? cout << "Leap Year!" : cout << "Not a Leap Year!";
    
    return 0;
}