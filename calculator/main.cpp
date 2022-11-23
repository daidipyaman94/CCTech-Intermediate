#include <iostream>
#include <float.h>
#include "calculator.h"

using namespace std;

int main(){
    unsigned int a, b;
    int c, d;
    float e, f;
    double g, h;
    int choice;
    bool exit = false;

    while(!exit){
        cout << endl;
        cout << "************************** CALCULATOR **************************" << endl;
        cout << endl;
        cout << "Range of Unsigned Integer : " << "(" << 0 << " to " << UINT_MAX << ")" << endl << endl;
        cout << "Range of Signed Integer :" << "(" << INT_MIN << " to " << INT_MAX << ")" << endl << endl;
        cout << "Range of float : " << "(" << FLT_MIN << " to " << FLT_MAX << ")" << endl << endl;
        cout << "Range of Double : " << "(" << DBL_MIN << " to " << DBL_MAX << ")" << endl << endl;
        cout << "Enter the choice accordingly: " << endl << endl;
        cout << "1. Addition (Unsigned Integers)\n"<<
                "2. Subtraction (Unsigned Integers)\n"<<
                "3. Multiplication (Unsigned Integers)\n"<<
                "4. Division (Unsigned Integers)\n"<<
                endl<<
                "5. Addition (Signed Integers)\n"<<
                "6. Subtraction (Signed Integers)\n"<<
                "7. Multiplication (Signed Integers)\n"<<
                "8. Division (Signed Integers)\n"<<
                endl<<
                "9. Addition (Float)\n"<<
                "10. Subtraction (Float)\n"<<
                "11. Multiplication (Float)\n"<<
                "12. Division (Float)\n"<<
                endl<<
                "13. Addition (Double)\n"<<
                "14. Subtraction (Double)\n"<<
                "15. Multiplication (Double)\n"<<
                "16. Division (Double)\n"<<
                endl<<
                "17.Test Cases\n"<<
                "18.Exit\n";
        cout << endl;
        cout << "Choice : ";
        cin >> choice;

        if(choice == 1 || choice == 2 || choice == 3 || choice == 4){
            cout << "Enter First Number : ";
            cin >> a;
            cout << "Enter Second Number : ";
            cin >> b;
        }

        else if (choice == 5 || choice == 6 || choice == 7 || choice == 8){
            cout << "Enter First Number : ";
            cin >> c;
            cout << "Enter Second Number : ";
            cin >> d;
        }
        
        else if (choice == 9 || choice == 10 || choice == 11 || choice == 12){
            cout << "Enter First Number : ";
            cin >> e;
            cout << "Enter Second Number : ";
            cin >> f;
        }

        else if (choice == 13 || choice == 14 || choice == 15 || choice == 16){
            cout << "Enter First Number : ";
            cin >> g;
            cout << "Enter Second Number : ";
            cin >> h;
        }

        switch (choice)
        {
        case 1:
            additionUnsignedInt(a,b);
            break;
        case 2:
            subtractionUnsignedInt(a,b);
            break;
        case 3:
            multiplicationUnsignedInt(a,b); 
            break;
        case 4:
            divisionUnsignedInt(a,b);
            break;
        case 5:
            additionSignedInt(c,d); 
            break;
        case 6:
            subtractionSignedInt(c,d);  
            break;
        case 7:
            multiplicationSignedInt(c,d);   
            break;
        case 8:
            divisionSignedInt(c,d);  
            break; 
        case 9:
            additionFloat(e,f);  
            break;
        case 10:
            subtractionFloat(e,f);  
            break;
        case 11:
            multiplicationFloat(e,f);  
            break;
        case 12:
            divisionFloat(e,f);  
            break;
        case 13:
            additionDouble(g,h);  
            break;
        case 14:
            subtractionDouble(g,h);  
            break;
        case 15:
            multiplicationDouble(g,h);  
            break;
        case 16:
            divisionDouble(g,h);  
            break;
        case 17:
            test_cases();
            break;
        case 18:
            exit = true;
            break;
        default:
            cout << "Enter correct choice" << endl;
            break;
        }
    }
    return 0;
}