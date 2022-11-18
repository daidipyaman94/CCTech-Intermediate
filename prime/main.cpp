#include <iostream>
#include <cassert>
#include "prime.h"

using namespace std;

int main(void){

    assert(!isPrime(15));
    assert(isPrime(7));
    assert(!isPrime(0));
    assert(!isPrime(-5));

    int num;
    cout << "Enter the number : ";
    cin >> num;
    isPrime(num) ? cout << "Prime Number!" : cout << "Not a Prime Number!" ;
    
    return 0;
}