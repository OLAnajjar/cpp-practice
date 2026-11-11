//this is the main program file
#include <iostream>
#include "Time.h"

using namespace std; 

int main(){
    //creating an object
    Time t; 

    t.setTime(11, 30, 05);
    cout<<"\n"; 
    t.printUniversal();
    return 0;

}