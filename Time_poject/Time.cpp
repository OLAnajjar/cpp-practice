//this is the implementation file
#include "Time.h"
#include <iostream>
using namespace std;
//we are defining the constructor.
Time::Time(){
    hour = 0;
    minute = 0;
    second = 0;
}

//here Time is the class name 
// :: is Scope Resolution Operator.
void Time::setTime(int h, int m, int s){
    hour = h;
    minute = m;
    second = s;
}

void Time::printUniversal(){
    cout<< hour << ":" << minute << ":" << second << endl;
}