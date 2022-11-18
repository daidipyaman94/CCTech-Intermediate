#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>
#include "close_to_zero.h"

int main(){

    vector<int> vec1 = {-5, 7, 25, 12, 3};
    vector<int> vec2 = {-5, 2, 25, 12, -2};
    vector<int> vec3 = {-5, -2, 25, 12, 2};
    vector<int> vec4 = {-5, -2, 25, 12, -2};
    vector<int> vec5 = {-5, 2, 25, 12, 2};

    assert(closeToZero(vec1) == 3);
    assert(closeToZero(vec2) == 2);
    assert(closeToZero(vec3) == 2);
    assert(closeToZero(vec4) == -2);
    assert(closeToZero(vec5) == 2);

    int element, size;
    vector<int> vec;
    cout << "Enter the number of elements : ";
    cin >> size;
    cout << "Enter the elements: "<< endl;
    for(int i=0; i<size; i++){
        cin >> element;
        vec.push_back(element);
    }
    int result = closeToZero (vec);
    cout << "Closest element to zero is : " << result;
    
    return 0;
}