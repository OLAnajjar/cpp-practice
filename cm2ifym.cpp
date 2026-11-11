// cm2ifym.cpp
// we are creating a cm to {inches, feet, yards, miles} converter
// OLa, 22**6*1*, Assignment1
// 11.11.2026

#include <iostream>
#include <iomanip>

using namespace std; 


int main(){
    float a; // in cm
    
    cout << "Enter the number, pleas: ";
    cin >> a;
    cout<<""<<endl;
    /*To convert from cm to inches; inch = cm:2.54
    feet = cm: 30.48
    yards = cm: 91.44
    miles = cm: 160934.4
    */
    float i = a/2.54;
    float f = a/30.48;
    float y = a/91.44;
    float m = a/160934.4;

    cout << setw(18) << "lengths" <<endl;
    //cout << " - "*30 <<end; this is not possible in cpp
    for(int k = 0; k<35; k++){
        cout<<"-";
    }
    cout<<""<<endl;
    cout << setfill(' ') << fixed << setprecision(2);
    cout << "|"<< "cm" << setw(3)
         << "|"<< "inches" << setw(3)
         << "|"<< "feet" << setw(3) 
         << "|"<< "yards" << setw(3)
         << "|"<< "miles|" <<endl;
    
    for(int k = 0; k<35; k++){
        cout<<"-";
    }
    cout<<""<<endl;
    cout << setfill('0') << fixed << setprecision(2);

    cout << "|"<< setw(8) << i 
         << "|"<< setw(8) << f 
         << "|"<< setw(8) << y 
         << "|" << setw(8)<< m << "|" ;
    return 0;
}