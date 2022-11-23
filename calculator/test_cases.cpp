#include "calculator.h"
#include <float.h>

void test_cases(){
    cout << endl;
    cout << "Range of Unsigned Integer : " << "(" << 0 << " to " << UINT_MAX << ")" << endl << endl;
    cout << "Range of Signed Integer :" << "(" << INT_MIN << " to " << INT_MAX << ")" << endl << endl;
    cout << "Range of float : " << "(" << FLT_MIN << " to " << FLT_MAX << ")" << endl << endl;
    cout << "Range of Double : " << "(" << DBL_MIN << " to " << DBL_MAX << ")" << endl << endl;
    
    //Test Cases with Output:

    additionUnsignedInt(10,20); //30 
    additionUnsignedInt(10,UINT_MAX); //Invalid Operation
    additionUnsignedInt(UINT_MAX,UINT_MAX); //Invalid Operation

    subtractionUnsignedInt(25,7); //18
    subtractionUnsignedInt(0,7); //Invalid Operation
    subtractionUnsignedInt(UINT_MAX,UINT_MAX); //0
    subtractionUnsignedInt(0,UINT_MAX); //Invalid Operation
    

    multiplicationUnsignedInt(25,4); //100

    divisionUnsignedInt(50,2); //25
    divisionUnsignedInt(50,0); //Can not Divide by 0

    additionSignedInt(10,20); //30
    additionSignedInt(-10,20); //10
    additionSignedInt(10,-20); //-10
    additionSignedInt(-10,-20); //-30
    additionSignedInt(10,INT_MAX); //Invalid Operation
    additionSignedInt(-10,INT_MIN); // Invalid Operation
    additionSignedInt(10,INT_MIN); // -2147483638
    additionSignedInt(-10,INT_MAX); // 2147483637
    additionSignedInt(0,0); // 0
    additionSignedInt(INT_MAX,INT_MAX); // Invalid Operation 
    additionSignedInt(INT_MIN,INT_MIN); // Invalid Operation

    subtractionSignedInt(15,5); //10
    subtractionSignedInt(15,-5); //20
    subtractionSignedInt(INT_MAX,-25); //Invalid Operation
    subtractionSignedInt(-15,5); //-20
    subtractionSignedInt(-15,-5); //-10
    subtractionSignedInt(INT_MIN,5); //Invalid Operation 
    
    multiplicationSignedInt(10,15); //150
    multiplicationSignedInt(-10,15); //-150
    multiplicationSignedInt(-10,-15); //150
    multiplicationSignedInt(0,15); //0

    divisionSignedInt(25,5); //5
    divisionSignedInt(-25,5); //-5
    divisionSignedInt(25,-5); //-5
    divisionSignedInt(0,-5); //0 
    divisionSignedInt(25,0);  //Can not Divide by 0
    divisionSignedInt(5,25);  //0
    divisionSignedInt(INT_MAX,1500);  //1431655

    additionFloat(75.9f, 87.47f); //163.37

    subtractionFloat(20.4f, 857.5f); //-837.1

    multiplicationFloat(25.4f,48.9f); //1242.06

    divisionFloat(48.9f,15.7f); //3.11465
    divisionFloat(8.9f,15.7f); //0.566879

    additionDouble(82.15, 974.5); //1056.65

    subtractionDouble(98.364, 58.778); //39.586

    multiplicationDouble(875.54,4.4); //3852.38

    divisionDouble(77.55, 15.7); //4.93949
    divisionDouble(7.55, 105.7); //0.0714286





}
