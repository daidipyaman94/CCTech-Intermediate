#include <iostream>

using namespace std;

class SimpleInterest{
    private:
        double principal;
        double duration;
        double rate;
    
    public:
        SimpleInterest();
        SimpleInterest(double principal, double duration, double rate);
        double calculateSimpleInterest();
};

void test_cases();