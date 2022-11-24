By using class, Calculate Simple Interest with given Principal amount, Duration and Rate of Interest.

a. Principal amount, Duration and Rate of Interest should be greater than zero.
b. Formula: Simple Interest = principal * duration * Rate / 100

Approach Followed :
1. Created simple_ineterest.h file, Created SimpleInterest class in it with private data members principal, duration and rate. In SimpleInterest class, declared default constructor, parameterized constructor and calculateSimpleInterest() function in public section of class. Defined these functions in simple_interest.cpp.
2. If Principal amount or Duration or Rate is less than zero, then calculateSimpleInterest() will return -1, otherwise it will return calculated value. 
3. Declared test_cases() function in simple_interest.h header file and defined in test_cases.cpp.
4. Created objects of SimpleInterest class and called calculateSimpleInterest() method on these objects in assert() function to check wheather the test cases are correct or not.
5. After all test cases passed, in main(), took input of principal, duration and rate from user. Created object of SimpleInterest class with these input and called calculateSimpleInterest() method on object. And displayed the output.

Test Cases :
In test_cases.cpp file