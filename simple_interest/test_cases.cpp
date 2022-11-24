#include "simple_interest.h"
#include <cassert>

void test_cases(){
    
    SimpleInterest i1(1000,2,4.5);
    SimpleInterest i2(1750.5, 2.5, 3.5);
    SimpleInterest i3(2500000, 5, 5.5);
    SimpleInterest i4;
    SimpleInterest i5 (-1000, 2, 4.1);
    SimpleInterest i6 (1000, -2, 4.1);
    SimpleInterest i7 (-1000, 2, -4.1);

    assert(i1.calculateSimpleInterest() == 90 );
    assert(i2.calculateSimpleInterest() == 153.16875 );
    assert(i3.calculateSimpleInterest() == 687500 );
    assert(i4.calculateSimpleInterest() == 0 );
    assert(i5.calculateSimpleInterest() == -1 );
    assert(i6.calculateSimpleInterest() == -1 );
    assert(i7.calculateSimpleInterest() == -1 );
}