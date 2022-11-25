#include "square_root.h"
#include <cassert>

void test_cases(){
    assert(squareRoot(25) == 5 );
    assert(squareRoot(4900) == 70 );
    assert(squareRoot(-2500) == -1 );

    // assert(abs(squareRoot(4500.25) - 67.0839) < 1e-9 );
    // cout << squareRoot(4500.25) << endl; //67.0839
    // cout << squareRoot(4500.25) - 67.0839 << endl; //2.6891e-06
    
}