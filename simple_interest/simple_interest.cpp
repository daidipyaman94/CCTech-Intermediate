#include "simple_interest.h"

SimpleInterest :: SimpleInterest(){
    principal = 0;
    duration = 0;
    rate = 0;
}

SimpleInterest :: SimpleInterest(double principal, double duration, double rate){
    this->principal = principal;
    this->duration = duration;
    this->rate = rate;
}

double SimpleInterest :: calculateSimpleInterest(){
    if(principal < 0 || duration < 0 || rate < 0 )
        return -1;
    return (principal * duration * rate / 100);
}